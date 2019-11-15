#include <math.h>
#include <iostream>


//使用梯度下降法求y = sin(x) + 5*x*x + 2的极致
double origin_fun(double x)
{
	return (2 * x / ((1 + 3 * x)*(1 + 2 * x)));
}
double diff_fun(double x)
{//求导
	return ((-12 * x*x + 2) / ((x*x * 6 + 5 * x + 1)*(x*x * 6 + 5 * x + 1)));
}

int main()
{
	double origin_y;
	double xuexilv = 0.1;
	double x = 0;
	int cishu = 0;
	while (true)
	{
		cishu += 1;
		double y = diff_fun(x);
		printf("y = %f\n", y);
		x += xuexilv*y;
		printf("x = %f\n", x);
		if (abs(y) < 0.000000001)
		{
			break;
		}
	}
	printf("一共训练了%d次后找到,x = %f,y=%f", cishu, x, origin_fun(x));
	getchar();
}

////求梯度下降y = (x - 2)^2 + (z - 3)^2的极小值
//void fun(double x,double z,double &y,double &y1,double &y2)
//{
//	y = (x - 2)*(x - 5) + (z - 2)*(z - 2);
//	y1 = 2*x - 7;
//	y2 = 2*z - 4;
//}
//
//void main()
//{
//	double xuexilv = -0.2;
//	double x1 = 10;
//	double x2 = 10;
//	int cishu = 0;
//	while (true)
//	{
//		cishu += 1;
//		double y;
//		double y1;
//		double y2;
//		fun(x1, x2, y, y1, y2);
//		x1 += xuexilv*y1;
//		x2 += xuexilv*y2;
//		printf("x1:%f x2:%f y1:%f y2:%f y:%f\n", x1, x2, y1, y2, y);
//		if (abs(y1) < 0.00001 && abs(y2) < 0.00001)
//		{
//			break;
//		}
//	}
//	printf("\n\n");
//	printf("运行%d次后,得到最小值 x1 = %f x2 = %f\n",cishu,x1,x2);
//	getchar();
//}