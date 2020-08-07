//高次方求模
//算同余定理的一个应用 
//思想：利用递推或者循环将原本很大的次数分成底数（或者同余底数）的平方的（b/2)幂
//例题：输入 a,b,c 求a^b%c (这里用递归函数，同余定理里有循环解法） 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fast(ll a,ll b,ll c)
{
	ll temp=1; 
	if(b==0) //递归边界 
	    return 1;//任何数的0次幂都为1
	if(b==1)//边界 
	    return a%c;
	temp =fast(a,b/2,c); 
	temp=temp*temp%c;
	if(b&0x1) //当b是奇数时 
	{
		temp=temp*a%c;//不能用平方表示的部分 a%c和a同余，所以这里直接用 a也是对的 
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
 
