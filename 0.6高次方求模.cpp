//�ߴη���ģ
//��ͬ�ඨ���һ��Ӧ�� 
//˼�룺���õ��ƻ���ѭ����ԭ���ܴ�Ĵ����ֳɵ���������ͬ���������ƽ���ģ�b/2)��
//���⣺���� a,b,c ��a^b%c (�����õݹ麯����ͬ�ඨ������ѭ���ⷨ�� 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fast(ll a,ll b,ll c)
{
	ll temp=1; 
	if(b==0) //�ݹ�߽� 
	    return 1;//�κ�����0���ݶ�Ϊ1
	if(b==1)//�߽� 
	    return a%c;
	temp =fast(a,b/2,c); 
	temp=temp*temp%c;
	if(b&0x1) //��b������ʱ 
	{
		temp=temp*a%c;//������ƽ����ʾ�Ĳ��� a%c��aͬ�࣬��������ֱ���� aҲ�ǶԵ� 
	} 
	return temp;
	 
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		ll a,b,c;
		scanf("%lld",&a);
		scanf("%lld",&b);
		scanf("%lld",&c);
		ll x=fast(a,b,c);
		printf("%lld\n",x);
	}
	return 0;
 } 
 
