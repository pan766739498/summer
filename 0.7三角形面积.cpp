/*���������
�����������꣬����������� */
//�����ú��׹�ʽ s=sqrt(n*(n-a)*(n-b)*(n-c)) n=(a+b+c)/2*/
/*#include<stdio.h>
#include<math.h>
int main()
{
	double x1,x2,x3,y1,y2,y3,a,b,c,n,s;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	c=sqrt((x2-x2)*(x2-x3)+(y2-y3)*(y2-y3));
	if(a+b<=c||a+c<=b||b+c<=a||a==0||b==0||c==0) 
	printf("������������");
	else
	{
	n=(a+b+c)/2.0;
	s=sqrt(n*(n-a)*(n-b)*(n-c));
	printf("%.2lf",s);
	}
	return 0;
 }  */
//��������������������
//ԭ��ʵ����axb=|a|*|b|*sin()��������a b ��������ȷ����ƽ���ı��ε����
//��ʽ��s=(1/2)*[(x2*y3-x3*y2)-(x1*y3-x3*y1)+(x1*y2-x2*y1)]
#include<stdio.h>
#include<math.h>
int main ()
{
	double x1,x2,x3,y1,y2,y3,s;
	scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
	s=((x2*y3-x3*y2)-(x1*y3-x3*y1)+(x1*y2-x2*y1))/2.0;
	if(s<0) s=-s;
	printf("%.2lf",s);
	return 0;
}
 
