/*三角形面积
给定三点坐标，求三角形面积 */
//①利用海伦公式 s=sqrt(n*(n-a)*(n-b)*(n-c)) n=(a+b+c)/2*/
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
	printf("不构成三角形");
	else
	{
	n=(a+b+c)/2.0;
	s=sqrt(n*(n-a)*(n-b)*(n-c));
	printf("%.2lf",s);
	}
	return 0;
 }  */
//②向量叉乘求三角形面积
//原理实则是axb=|a|*|b|*sin()可以求由a b 两个向量确定的平行四边形的面积
//公式：s=(1/2)*[(x2*y3-x3*y2)-(x1*y3-x3*y1)+(x1*y2-x2*y1)]
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
 
