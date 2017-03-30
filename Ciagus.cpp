/*
** 每次改动前请自行写上这内容，并保留它们

最后更新：2017年1月13日 20:54:33
更新者：范天明
更新内容：修改main函数里的代码框架
统一main函数内部局部变量的命名规则
让整个main函数的可读性更高
更新使用的平台 ： Windows 10 Dev C++ 64位
-------------------------------------------------
最后更新：2017年1月12日12:05:45
更新者：范天明
更新内容：增加代码的开源协议
更新使用的平台 ： Windows 10 Dev C++ 64位
*/

#include <cmath>
#include<cstdio>
#include<cstdlib>
#include<conio.h>
#include<ctime>
#include<iostream>
using namespace std;
/* srand()所属头文件 */


/*
Name : Digcus
Coder Power By WangZhe EveryDay
Lisence : GPL V2
We Use GNU General Public License v2.0
GNU GENERAL PUBLIC LICENSE
Version 2, June 1991

Copyright (C) 1989, 1991 Free Software Foundation, Inc., <http://fsf.org/>
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
Everyone is permitted to copy and distribute verbatim copies
of this license document, but changing it is not allowed.

日期：2017年1月12日12:00:37
项目：数字算盘
代码作者：天天上王者
代码许可： GPL V2 许可
我们使用 GNU General Public License（即通用公共许可证） v2.0-
* 确保软件自始至终都以开放源代码形式发布，保护开发成果不被窃取用作商业发售。任何一套软件，只要其中使用了受 GPL 协议保护的第三方软件的源程序，并向非开发人员发布时，软件本身也就自动成为受 GPL 保护并且约束的实体。也就是说，此时它必须开放源代码。
*GPL就是一个左侧版权（Copyleft，或译为“反版权”、“版权属左”、“版权所无”、“版责”等）的体现。你可以去掉所有原作的版权信息，只要你保持开源，并且随源代码、二进制版附上就是一个左侧版权（Copyleft，或译为“反版权”、“版权属左”、“版权所无”、“版责”等）的体现。你可以去掉所有原作的版权信息，只要你保持开源，并且随源代码、二进制版附上GPL的许可证就行，让后人可以很明确地得知此软件的授权信息。GPL精髓就是，只要使软件在完整开源的情况下，尽可能使使用者得到自由发挥的空间，使软件得到更快更好的发展。

* 无论软件以何种形式发布，都必须同时附上源代码。例如在 Web 上提供下载，就必须在二进制版本（如果有的话）下载的同一个页面，清楚地提供源代码下载的链接。如果以光盘形式发布，就必须同时附上源文件的光盘。

* 开发或维护遵循 GPL 协议开发的软件的公司或个人，可以对使用者收取一定的服务费用。必须无偿提供软件的完整源代码，不得将源代码与服务做捆绑或任何变相捆绑销售。


*/

void history(void) {

}


void game(void) {
	int a, b, c, i;

	srand(time(0));
	b = rand() % 100;

	printf(" 开始猜吧！… \n ");
	scanf("%d", &c);


	for (i = 1; i <= 6; i++) {
		if (b == c) {
			if (i <= 5 && i > 1) {

				printf(" 不错，");
			}
			if (i == 1) {

				printf(" 神枪手！你开挂的？");
			}
			printf(" 猜对了！\n\n\n");
			break;
		} else {
			if (c > b) {
				printf(" 大了！ \n ");
				if (i == 6) {
					printf(" 还有最后一次机会\n ");
				}
				scanf("%d", &c);
			} else {
				printf(" 小了！ \n ");

				if (i == 6) {
					printf(" 还有最后一次机会 \n ");
				}
				scanf("%d", &c);
			}
		}
	}
	if (i == 7 && c != b) {
		printf(" 真可惜，其实 正确答案是 %d\n", b);
		system("cls");

	}

	if (i == 7 && c == b) {
		printf(" 猜对了！！！\n\n\n", b);
		system("cls");

	}
	if (c == b) {
		printf(" 恭喜你，闯过了第一关\n");
		printf(" 试试第二关吧！\n");
		printf(" 加大难度了哦！\n");

		b = rand() % 1000; // 产生0-99的随机数
		printf(" 开始猜吧！… \n ");
		scanf("%d", &c);
		for (i = 1; i <= 8; i++) {

			if (b == c) {
				printf(" 啊啊啊！有啦！猜对了！\n\n\n");
				break;
			} else {
				if (c > b) {

					printf(" 大了！ \n ");

					if (i == 8) {
						printf(" 还有最后一次机会\n ");
					}

					scanf("%d", &c);
				} else {
					printf(" 小了！ \n ");

					if (i == 8) {
						printf(" 还有最后一次机会 \n ");
					}
					scanf("%d", &c);

				}
			}
		}

		if (i == 9 && c != b) {
			printf(" 真可惜，其实 正确答案是 %d\n", b);

		}

		if (i == 9 && c == b) {
			printf(" 有啦！有啦！啊啊啊！猜对了！！！\n\n\n", b);
		}
	}
}


void Symmetric_Line(void) {
	float a, b, c, d, m, n, k, A, B, C;
	printf(" 输入一次函数的X前系数");
	scanf("%f", &A);
	printf(" Y前系数");
	scanf("%f", &B);
	printf(" 常数项");
	scanf("%f", &C);

	printf(" 输入坐标，以 , 隔开\n");
	scanf("%f,%f", &m, &n);


	a = 2 * m - 1;
	b = 2 * n + (A) / (B) + (C) / (B);
	c = 2 * m - 2;
	d = 2 * n + (2 * A) / (B) + (C) / (B);

	k = (b - d) / (a - c);
	m = b - a * k;
	if (m == 0) {
		printf(" 对称点方程为 Y = %.1fX", k);
	} else if (m < 0) {
		printf(" 对称点方程为 Y = %.1f X %.1f\n", k, m);
	} else {
		printf(" 对称点方程为 Y = %.1f X + %.1f\n", k, m);
	}
}


/* 点关于直线对称 */
void Symmetric_Points(void) {
	float a, b, c, d, A, B, C;
	printf(" 输入坐标，以 , 隔开\n");
	scanf("%f,%f", &a, &b);
	printf(" 输入一次函数的X前系数");
	scanf("%f", &A);
	printf(" Y前系数");
	scanf("%f", &B);
	printf(" 常数项");
	scanf("%f", &C);

	d = (-2 * A * B * a - 2 * B * C - (A * A - B * B) * b) / (A * A + B * B);

	c = (A * d + B * a - A * b) / (B);

	printf(" 对称点为（%.2f，%.2f）\n", c, d);

}

/* 解一元二次方程 */
void axx(void) {
	double d;
	double e;
	double f;

	printf(" 请输入二次项系数， ");
	scanf("%lf", &d);

	printf(" 再输入一次项系数， ");
	scanf("%lf", &e);

	printf(" 最后输入常数项 ， ");
	scanf("%lf", &f);
	double delta = e * e - 4 * d * f;
	double x1 = (-e + sqrt(delta)) / (2 * d);
	double x2 = (-e - sqrt(delta)) / (2 * d);
	double S = (e) / (-(2 * d)); // 定义对称轴
	double M = (4 * d * f - e * e) / (4 * d); // 定义最值

	printf("\n\n");

	printf(" %.2lf x2 + %.2lf x + %.2lf = 0\n", d, e, f);

	printf(" 所以该方程根的判别式为 ");
	printf("%.2lf\n", delta);

	printf(" 该函数的对称轴为 ");
	printf("%.2lf\n", S);

	if (d > 0) {
		printf(" 该函数的最大值为 ");
		printf("%.2lf\n\n", M);
	} else {
		printf(" 该函数的最小值为 ");
		printf("%.2lf\n\n", M);
	}

	if (delta > 0) {
		printf(" 一个解 为 %.2lf\n", x1);
		printf(" 另一个解 为 %.2lf\n", x2);
	}

	else if (delta == 0) {
		printf(" 两个解相同，为 %.2f\n", x1);
	}

	else {
		printf(" 此方程无解\n");

	}
}

/* 空间两点间距离 */
void dimensional(void) {
	float a, b, c, d, e, f;

	printf(" 输入A点坐标，以 , 隔开\n");
	scanf("%f,%f,%f", &a, &b, &c);
	printf(" B点坐标，以 , 隔开\n");
	scanf("%f,%f,%f", &d, &e, &f);

	float dis = sqrt((a - d) * (a - d) + (b - e) * (b - e) + (c - f) * (c - f));

	printf(" 两点间距离为%.2f\n", dis);
}

/* 两点求直线方程 */
void XYZ(void) {
	float a, b, c, d, k, m;
	printf(" 输入A点坐标，以 , 隔开\n");
	scanf("%f,%f", &a, &b);
	printf(" 输入B点坐标，以 , 隔开\n");
	scanf("%f,%f", &c, &d);

	k = (b - d) / (a - c);
	m = b - a * k;
	if (m == 0) {
		printf(" 方程为 Y = %.1fX", k);
	} else if (m < 0) {
		printf(" 方程为 Y = %.1f X %.1f\n", k, m);
	} else {
		printf(" 方程为 Y = %.1f X + %.1f\n", k, m);
	}
}

void standard(void) { /* 标准式求圆与直线的关系 */

	float a, b, r;
	float A, B, C, d;

	printf(" 输入圆心的横坐标");
	scanf("%f", &a);
	printf(" 输入纵坐标 ");
	scanf("%f", &b);
	printf(" 那么半径呢？");
	scanf("%f", &r);

	printf(" 输入一次函数的X前系数");
	scanf("%f", &A);
	printf(" Y前系数");
	scanf("%f", &B);
	printf(" 常数项");
	scanf("%f", &C);

	d =
	    (sqrt((A * a + B * b + C) * (A * a + B * b + C))) / (sqrt(A * A + B * B));

	printf(" 由于d=%.2f\n\n", d);

	if (d < r) {
		printf(" 圆与线有两个交点\n");
	} else if (d == r) {
		printf(" 圆与线相切\n");
	} else {
		printf(" 圆与线相离\n");
	}
}
void Pytrem(void)
/* 勾股定理 */
{
	float a, b, c;
	int option;

	printf("键入数字：\n 1.已知两直角边\n");
	printf(" 2.已知斜边\n");
	scanf("%d", &option);
	if (option == 1) {

		printf(" 输入一直角边的长度\n");
		scanf("%f", &a);
		printf(" 另一直角边的长度\n");
		scanf("%f", &b);
		float c = sqrt(a * a + b * b);
		printf(" 斜边长度为 %.2f \n", c);
	} else if (option == 2) {
		printf(" 输入一直角边的长度\n");
		scanf("%f", &a);
		printf(" 斜边的长度\n");
		scanf("%f", &c);
		float b = sqrt(c * c - a * a);
		printf(" 另一直角边长度为 %.2f \n", b);
	} else {
		printf("输入指令有错！ \n");
	}
}

void relate(void)
/* 圆与圆的位置关系， */
{
	float a, b, ra, c, d, rb;
	printf(" 输入A圆圆心，以 , 隔开\n");
	scanf("%f,%f", &a, &b);
	printf(" 输入A圆半径\n");
	scanf("%f", &ra);
	printf(" 输入B圆圆心，以 , 隔开\n");
	scanf("%f,%f", &c, &d);
	printf(" 输入B圆半径\n");
	scanf("%f", &rb);

	float rc = ra - rb;
	float dis = sqrt((a - c) * (a - c) + (d - b) * (d - b));

	if (ra - rb < 0) {
		rc = rb - ra;
	} else {
	}

	printf(" 由于圆心相距为 %.2f \n", dis);
	if (dis > ra + rb) {
		printf(" 两圆外离");
	} else if (dis == ra + rb) {
		printf(" 两圆外切");
	} else if (dis < ra + rb && dis > rc) {
		printf(" 两圆相交");
	} else if (dis == rc) {
		printf(" 两圆内切");
	} else if (dis < rc) {
		printf(" 两圆内含");
	}
}


void distance(void)
/* ，两点间距离公式 */ {
	float a, b, c, d;

	printf(" 输入A点坐标，以 , 隔开\n");
	scanf("%f,%f", &a, &b);
	printf(" B点坐标，以 , 隔开\n");
	scanf("%f,%f", &c, &d);
	float dis = sqrt((a - c) * (a - c) + (d - b) * (d - b));

	printf(" 两点间距离为%.3f\n", dis);
}

void Useless(void) {
	/*
	*标准式圆与圆的位置关系Beta
	*运用求解法，具有保存价值
	*/

	float a, b, r;
	float k, c;

	printf(" 请输入圆心的横坐标");
	scanf("%f", &a);
	printf(" 请输入纵坐标 ");
	scanf("%f", &b);
	printf(" 那么半径呢？");
	scanf("%f", &r);
	float R = r * r; // 存放半径的平方
	float p_a = -a;
	float p_b = -b; // 存放负值

	if (a > 0) {
		printf(" (X- %.2f)2", a);
	} else if (a < 0) {
		printf(" (X+ %.2f)2", p_a);
	} else {
		printf(" X2");
	}

	if (b > 0) {
		printf("+ (Y- %.2f)2", b);
	} else if (b < 0) {
		printf("+ (Y+ %.2f)2", p_b);
	} else {
		printf("+ Y2");
	}
	printf("=%.2f \n\n", R);

	printf(" 该圆的圆心为:\n （%.2f , %.2f）", a, b);

	printf("\n 输入一次函数X前系数");
	scanf("%f", &k);
	printf(" 常数项");
	scanf("%f", &c);

	double d = (k * k) + 1;
	double e = 2 * k * c - 2 * k * b - 2 * a;
	double f = a * a + b * b + c * c - R;
	double delta = e * e - 4 * d * f;
	double x1 = (-e + sqrt(delta)) / (2 * d);
	double x2 = (-e - sqrt(delta)) / (2 * d);
	double y1 = (d * x1 * x1) + (e * x1) + f;
	double y2 = (d * x2 * x1) + (e * x2) + f;

	printf("\n\n");
	if (delta > 0) {
		printf(" 圆与线有两个交点\n");
		printf(" 分别为（%.2f，%.2f）和（%.2f， %.2f）\n", x1, y1, x2,
		       y2);

	}

	else if (delta == 0) {
		printf(" 圆与线相切");
		printf(" 于点（%.2f，%.2f）\n", x1, y1);
	}

	else {
		printf(" 圆与线相离\n");

	}

}

void ordinary(void)
/* 一般式求圆， */ {
	float C, D, E;

	printf(" 输入X前数字");
	scanf("%f", &C);
	printf(" Y前数字");
	scanf("%f", &D);
	printf(" 还有常数项 ");
	scanf("%f", &E);

	float S_C = 0.5 * C;
	float S_D = 0.5 * D;
	float other = (C * C + D * D - 4 * E) / (4);
	if (other > 0) {

		printf(" (X+%.2f)2 + (Y+%.2f)2 = %.2f \n", S_C, S_D, other);

		printf(" 圆心为（-%.2f，-%.2f）\n", S_C, S_D);
	} else if (other == 0) {
		printf(" 方程表示（-%.2f，-%.2f）的点\n", S_C, S_D);
	} else {
		printf(" 由于方程右边为 %.2f ＜0\n", other);
		printf(" 方程不表示任何图形");
	}
}


int main(int argc, char **argv) {

	int MainOption = 0, SecondOption = 0, ThirdOption = 0, FourthOption = 0;
	/*
	MainOption 为主菜单选项
	SecondOption 为次级菜单选项
	ThirdOption 为三级菜单选项
	FourthOption 为四级菜单选项
	*/
	cout<<"数学算盘 0 0.1 测试版"<<endl<<endl<<" 键入数字，进行选择"<<endl;
	while(1) {
// 采用死循环让程序不限运行
		cout<<" 1.生活娱乐"<<endl;
		cout<<" 2.数学工具"<<endl;
		cout<<" 9.离开"<<endl;

		scanf("%d", &MainOption);
		system("cls");

		switch(MainOption) {


			case 1 :
				cout<<" 1.猜数字"<<endl;
				cout<<" 2.时间轴<<endl;

				    scanf("%d", &SecondOption);
				    system("cls");

				    if (SecondOption == 1) {
				    game();
		    } else if (SecondOption == 2) {
				    history();
		    } else {}
				    break;

				    case 2 :
				    printf(" 1.圆与方程\n");
				    printf(" 2.直线与方程\n");
				    printf(" 3.其它工具\n");
				    scanf("%d", &SecondOption);
				    if (SecondOption == 1) {
				    printf(" 1.直线与圆的位置关系\n");
				    printf(" 2.圆的一般式\n");
				    printf(" 3.圆与圆位置关系\n");
				    scanf("%d", &ThirdOption);

				    if (ThirdOption == 1) {
				    standard();
		    } else if (ThirdOption == 2) {
				    ordinary();
		    } else if (ThirdOption == 3) {
				    relate();
		    } else {
		    }
		    } else if (SecondOption == 2) {
				    printf(" 1.两点关系\n");
				    printf(" 2.对称关系\n");

				    scanf("%d", &ThirdOption);
				    if (ThirdOption == 1) {
				    printf(" 1.两点间距离\n");
				    printf(" 2.两点确定线\n");
				    printf(" 3.空间两点距离\n");
				    scanf("%d", &FourthOption );

				    if (FourthOption == 1) {
				    distance();
		    } else if (FourthOption == 2) {
				    XYZ();

		    } else if (FourthOption == 3) {
				    dimensional();
		    }
		    }

				    else if (ThirdOption == 2) {

				    printf(" 1.点关于线对称\n");
				    printf(" 2.线关于点对称\n");
				    scanf("%d", &FourthOption );

				    if (FourthOption == 1) {
				    Symmetric_Points();
		    } else if (FourthOption == 2) {
				    Symmetric_Line();

		    }
		    }

				    else {

		    }
		    } else if (SecondOption == 3) {
				    printf(" 1.一元二次方程\n");
				    printf(" 2.勾股定理\n");
				    scanf("%d", &ThirdOption);

				    if (ThirdOption == 1) {
				    axx();
		    } else if (ThirdOption == 2) {
				    Pytrem();
		    } else {

		    }
		    }

				    case 9:
				    return 0;
				    break;

				    default :
				    int nothing;
				    printf(" \n数字键继续...\n");
				    scanf("%d", &nothing);
		    }

		    }
				    return 0;
		    }
