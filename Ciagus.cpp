/*
** ÿ�θĶ�ǰ������д�������ݣ�����������

�����£�2017��1��13�� 20:54:33
�����ߣ�������
�������ݣ��޸�main������Ĵ�����
ͳһmain�����ڲ��ֲ���������������
������main�����Ŀɶ��Ը���
����ʹ�õ�ƽ̨ �� Windows 10 Dev C++ 64λ
-------------------------------------------------
�����£�2017��1��12��12:05:45
�����ߣ�������
�������ݣ����Ӵ���Ŀ�ԴЭ��
����ʹ�õ�ƽ̨ �� Windows 10 Dev C++ 64λ
*/

#include <cmath>
#include<cstdio>
#include<cstdlib>
#include<conio.h>
#include<ctime>
#include<iostream>
using namespace std;
/* srand()����ͷ�ļ� */


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

���ڣ�2017��1��12��12:00:37
��Ŀ����������
�������ߣ�����������
������ɣ� GPL V2 ���
����ʹ�� GNU General Public License����ͨ�ù������֤�� v2.0-
* ȷ�������ʼ���ն��Կ���Դ������ʽ���������������ɹ�������ȡ������ҵ���ۡ��κ�һ�������ֻҪ����ʹ������ GPL Э�鱣���ĵ����������Դ���򣬲���ǿ�����Ա����ʱ���������Ҳ���Զ���Ϊ�� GPL ��������Լ����ʵ�塣Ҳ����˵����ʱ�����뿪��Դ���롣
*GPL����һ������Ȩ��Copyleft������Ϊ������Ȩ��������Ȩ���󡱡�����Ȩ���ޡ��������𡱵ȣ������֡������ȥ������ԭ���İ�Ȩ��Ϣ��ֻҪ�㱣�ֿ�Դ��������Դ���롢�����ư渽�Ͼ���һ������Ȩ��Copyleft������Ϊ������Ȩ��������Ȩ���󡱡�����Ȩ���ޡ��������𡱵ȣ������֡������ȥ������ԭ���İ�Ȩ��Ϣ��ֻҪ�㱣�ֿ�Դ��������Դ���롢�����ư渽��GPL�����֤���У��ú��˿��Ժ���ȷ�ص�֪���������Ȩ��Ϣ��GPL������ǣ�ֻҪʹ�����������Դ������£�������ʹʹ���ߵõ����ɷ��ӵĿռ䣬ʹ����õ�������õķ�չ��

* ��������Ժ�����ʽ������������ͬʱ����Դ���롣������ Web ���ṩ���أ��ͱ����ڶ����ư汾������еĻ������ص�ͬһ��ҳ�棬������ṩԴ�������ص����ӡ�����Թ�����ʽ�������ͱ���ͬʱ����Դ�ļ��Ĺ��̡�

* ������ά����ѭ GPL Э�鿪��������Ĺ�˾����ˣ����Զ�ʹ������ȡһ���ķ�����á������޳��ṩ���������Դ���룬���ý�Դ�����������������κα����������ۡ�


*/

void history(void) {

}


void game(void) {
	int a, b, c, i;

	srand(time(0));
	b = rand() % 100;

	printf(" ��ʼ�°ɣ��� \n ");
	scanf("%d", &c);


	for (i = 1; i <= 6; i++) {
		if (b == c) {
			if (i <= 5 && i > 1) {

				printf(" ����");
			}
			if (i == 1) {

				printf(" ��ǹ�֣��㿪�ҵģ�");
			}
			printf(" �¶��ˣ�\n\n\n");
			break;
		} else {
			if (c > b) {
				printf(" ���ˣ� \n ");
				if (i == 6) {
					printf(" �������һ�λ���\n ");
				}
				scanf("%d", &c);
			} else {
				printf(" С�ˣ� \n ");

				if (i == 6) {
					printf(" �������һ�λ��� \n ");
				}
				scanf("%d", &c);
			}
		}
	}
	if (i == 7 && c != b) {
		printf(" ���ϧ����ʵ ��ȷ���� %d\n", b);
		system("cls");

	}

	if (i == 7 && c == b) {
		printf(" �¶��ˣ�����\n\n\n", b);
		system("cls");

	}
	if (c == b) {
		printf(" ��ϲ�㣬�����˵�һ��\n");
		printf(" ���Եڶ��ذɣ�\n");
		printf(" �Ӵ��Ѷ���Ŷ��\n");

		b = rand() % 1000; // ����0-99�������
		printf(" ��ʼ�°ɣ��� \n ");
		scanf("%d", &c);
		for (i = 1; i <= 8; i++) {

			if (b == c) {
				printf(" ���������������¶��ˣ�\n\n\n");
				break;
			} else {
				if (c > b) {

					printf(" ���ˣ� \n ");

					if (i == 8) {
						printf(" �������һ�λ���\n ");
					}

					scanf("%d", &c);
				} else {
					printf(" С�ˣ� \n ");

					if (i == 8) {
						printf(" �������һ�λ��� \n ");
					}
					scanf("%d", &c);

				}
			}
		}

		if (i == 9 && c != b) {
			printf(" ���ϧ����ʵ ��ȷ���� %d\n", b);

		}

		if (i == 9 && c == b) {
			printf(" ���������������������¶��ˣ�����\n\n\n", b);
		}
	}
}


void Symmetric_Line(void) {
	float a, b, c, d, m, n, k, A, B, C;
	printf(" ����һ�κ�����Xǰϵ��");
	scanf("%f", &A);
	printf(" Yǰϵ��");
	scanf("%f", &B);
	printf(" ������");
	scanf("%f", &C);

	printf(" �������꣬�� , ����\n");
	scanf("%f,%f", &m, &n);


	a = 2 * m - 1;
	b = 2 * n + (A) / (B) + (C) / (B);
	c = 2 * m - 2;
	d = 2 * n + (2 * A) / (B) + (C) / (B);

	k = (b - d) / (a - c);
	m = b - a * k;
	if (m == 0) {
		printf(" �ԳƵ㷽��Ϊ Y = %.1fX", k);
	} else if (m < 0) {
		printf(" �ԳƵ㷽��Ϊ Y = %.1f X %.1f\n", k, m);
	} else {
		printf(" �ԳƵ㷽��Ϊ Y = %.1f X + %.1f\n", k, m);
	}
}


/* �����ֱ�߶Գ� */
void Symmetric_Points(void) {
	float a, b, c, d, A, B, C;
	printf(" �������꣬�� , ����\n");
	scanf("%f,%f", &a, &b);
	printf(" ����һ�κ�����Xǰϵ��");
	scanf("%f", &A);
	printf(" Yǰϵ��");
	scanf("%f", &B);
	printf(" ������");
	scanf("%f", &C);

	d = (-2 * A * B * a - 2 * B * C - (A * A - B * B) * b) / (A * A + B * B);

	c = (A * d + B * a - A * b) / (B);

	printf(" �ԳƵ�Ϊ��%.2f��%.2f��\n", c, d);

}

/* ��һԪ���η��� */
void axx(void) {
	double d;
	double e;
	double f;

	printf(" �����������ϵ���� ");
	scanf("%lf", &d);

	printf(" ������һ����ϵ���� ");
	scanf("%lf", &e);

	printf(" ������볣���� �� ");
	scanf("%lf", &f);
	double delta = e * e - 4 * d * f;
	double x1 = (-e + sqrt(delta)) / (2 * d);
	double x2 = (-e - sqrt(delta)) / (2 * d);
	double S = (e) / (-(2 * d)); // ����Գ���
	double M = (4 * d * f - e * e) / (4 * d); // ������ֵ

	printf("\n\n");

	printf(" %.2lf x2 + %.2lf x + %.2lf = 0\n", d, e, f);

	printf(" ���Ը÷��̸����б�ʽΪ ");
	printf("%.2lf\n", delta);

	printf(" �ú����ĶԳ���Ϊ ");
	printf("%.2lf\n", S);

	if (d > 0) {
		printf(" �ú��������ֵΪ ");
		printf("%.2lf\n\n", M);
	} else {
		printf(" �ú�������СֵΪ ");
		printf("%.2lf\n\n", M);
	}

	if (delta > 0) {
		printf(" һ���� Ϊ %.2lf\n", x1);
		printf(" ��һ���� Ϊ %.2lf\n", x2);
	}

	else if (delta == 0) {
		printf(" ��������ͬ��Ϊ %.2f\n", x1);
	}

	else {
		printf(" �˷����޽�\n");

	}
}

/* �ռ��������� */
void dimensional(void) {
	float a, b, c, d, e, f;

	printf(" ����A�����꣬�� , ����\n");
	scanf("%f,%f,%f", &a, &b, &c);
	printf(" B�����꣬�� , ����\n");
	scanf("%f,%f,%f", &d, &e, &f);

	float dis = sqrt((a - d) * (a - d) + (b - e) * (b - e) + (c - f) * (c - f));

	printf(" ��������Ϊ%.2f\n", dis);
}

/* ������ֱ�߷��� */
void XYZ(void) {
	float a, b, c, d, k, m;
	printf(" ����A�����꣬�� , ����\n");
	scanf("%f,%f", &a, &b);
	printf(" ����B�����꣬�� , ����\n");
	scanf("%f,%f", &c, &d);

	k = (b - d) / (a - c);
	m = b - a * k;
	if (m == 0) {
		printf(" ����Ϊ Y = %.1fX", k);
	} else if (m < 0) {
		printf(" ����Ϊ Y = %.1f X %.1f\n", k, m);
	} else {
		printf(" ����Ϊ Y = %.1f X + %.1f\n", k, m);
	}
}

void standard(void) { /* ��׼ʽ��Բ��ֱ�ߵĹ�ϵ */

	float a, b, r;
	float A, B, C, d;

	printf(" ����Բ�ĵĺ�����");
	scanf("%f", &a);
	printf(" ���������� ");
	scanf("%f", &b);
	printf(" ��ô�뾶�أ�");
	scanf("%f", &r);

	printf(" ����һ�κ�����Xǰϵ��");
	scanf("%f", &A);
	printf(" Yǰϵ��");
	scanf("%f", &B);
	printf(" ������");
	scanf("%f", &C);

	d =
	    (sqrt((A * a + B * b + C) * (A * a + B * b + C))) / (sqrt(A * A + B * B));

	printf(" ����d=%.2f\n\n", d);

	if (d < r) {
		printf(" Բ��������������\n");
	} else if (d == r) {
		printf(" Բ��������\n");
	} else {
		printf(" Բ��������\n");
	}
}
void Pytrem(void)
/* ���ɶ��� */
{
	float a, b, c;
	int option;

	printf("�������֣�\n 1.��֪��ֱ�Ǳ�\n");
	printf(" 2.��֪б��\n");
	scanf("%d", &option);
	if (option == 1) {

		printf(" ����һֱ�Ǳߵĳ���\n");
		scanf("%f", &a);
		printf(" ��һֱ�Ǳߵĳ���\n");
		scanf("%f", &b);
		float c = sqrt(a * a + b * b);
		printf(" б�߳���Ϊ %.2f \n", c);
	} else if (option == 2) {
		printf(" ����һֱ�Ǳߵĳ���\n");
		scanf("%f", &a);
		printf(" б�ߵĳ���\n");
		scanf("%f", &c);
		float b = sqrt(c * c - a * a);
		printf(" ��һֱ�Ǳ߳���Ϊ %.2f \n", b);
	} else {
		printf("����ָ���д� \n");
	}
}

void relate(void)
/* Բ��Բ��λ�ù�ϵ�� */
{
	float a, b, ra, c, d, rb;
	printf(" ����AԲԲ�ģ��� , ����\n");
	scanf("%f,%f", &a, &b);
	printf(" ����AԲ�뾶\n");
	scanf("%f", &ra);
	printf(" ����BԲԲ�ģ��� , ����\n");
	scanf("%f,%f", &c, &d);
	printf(" ����BԲ�뾶\n");
	scanf("%f", &rb);

	float rc = ra - rb;
	float dis = sqrt((a - c) * (a - c) + (d - b) * (d - b));

	if (ra - rb < 0) {
		rc = rb - ra;
	} else {
	}

	printf(" ����Բ�����Ϊ %.2f \n", dis);
	if (dis > ra + rb) {
		printf(" ��Բ����");
	} else if (dis == ra + rb) {
		printf(" ��Բ����");
	} else if (dis < ra + rb && dis > rc) {
		printf(" ��Բ�ཻ");
	} else if (dis == rc) {
		printf(" ��Բ����");
	} else if (dis < rc) {
		printf(" ��Բ�ں�");
	}
}


void distance(void)
/* ���������빫ʽ */ {
	float a, b, c, d;

	printf(" ����A�����꣬�� , ����\n");
	scanf("%f,%f", &a, &b);
	printf(" B�����꣬�� , ����\n");
	scanf("%f,%f", &c, &d);
	float dis = sqrt((a - c) * (a - c) + (d - b) * (d - b));

	printf(" ��������Ϊ%.3f\n", dis);
}

void Useless(void) {
	/*
	*��׼ʽԲ��Բ��λ�ù�ϵBeta
	*������ⷨ�����б����ֵ
	*/

	float a, b, r;
	float k, c;

	printf(" ������Բ�ĵĺ�����");
	scanf("%f", &a);
	printf(" ������������ ");
	scanf("%f", &b);
	printf(" ��ô�뾶�أ�");
	scanf("%f", &r);
	float R = r * r; // ��Ű뾶��ƽ��
	float p_a = -a;
	float p_b = -b; // ��Ÿ�ֵ

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

	printf(" ��Բ��Բ��Ϊ:\n ��%.2f , %.2f��", a, b);

	printf("\n ����һ�κ���Xǰϵ��");
	scanf("%f", &k);
	printf(" ������");
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
		printf(" Բ��������������\n");
		printf(" �ֱ�Ϊ��%.2f��%.2f���ͣ�%.2f�� %.2f��\n", x1, y1, x2,
		       y2);

	}

	else if (delta == 0) {
		printf(" Բ��������");
		printf(" �ڵ㣨%.2f��%.2f��\n", x1, y1);
	}

	else {
		printf(" Բ��������\n");

	}

}

void ordinary(void)
/* һ��ʽ��Բ�� */ {
	float C, D, E;

	printf(" ����Xǰ����");
	scanf("%f", &C);
	printf(" Yǰ����");
	scanf("%f", &D);
	printf(" ���г����� ");
	scanf("%f", &E);

	float S_C = 0.5 * C;
	float S_D = 0.5 * D;
	float other = (C * C + D * D - 4 * E) / (4);
	if (other > 0) {

		printf(" (X+%.2f)2 + (Y+%.2f)2 = %.2f \n", S_C, S_D, other);

		printf(" Բ��Ϊ��-%.2f��-%.2f��\n", S_C, S_D);
	} else if (other == 0) {
		printf(" ���̱�ʾ��-%.2f��-%.2f���ĵ�\n", S_C, S_D);
	} else {
		printf(" ���ڷ����ұ�Ϊ %.2f ��0\n", other);
		printf(" ���̲���ʾ�κ�ͼ��");
	}
}


int main(int argc, char **argv) {

	int MainOption = 0, SecondOption = 0, ThirdOption = 0, FourthOption = 0;
	/*
	MainOption Ϊ���˵�ѡ��
	SecondOption Ϊ�μ��˵�ѡ��
	ThirdOption Ϊ�����˵�ѡ��
	FourthOption Ϊ�ļ��˵�ѡ��
	*/
	cout<<"��ѧ���� 0 0.1 ���԰�"<<endl<<endl<<" �������֣�����ѡ��"<<endl;
	while(1) {
// ������ѭ���ó���������
		cout<<" 1.��������"<<endl;
		cout<<" 2.��ѧ����"<<endl;
		cout<<" 9.�뿪"<<endl;

		scanf("%d", &MainOption);
		system("cls");

		switch(MainOption) {


			case 1 :
				cout<<" 1.������"<<endl;
				cout<<" 2.ʱ����<<endl;

				    scanf("%d", &SecondOption);
				    system("cls");

				    if (SecondOption == 1) {
				    game();
		    } else if (SecondOption == 2) {
				    history();
		    } else {}
				    break;

				    case 2 :
				    printf(" 1.Բ�뷽��\n");
				    printf(" 2.ֱ���뷽��\n");
				    printf(" 3.��������\n");
				    scanf("%d", &SecondOption);
				    if (SecondOption == 1) {
				    printf(" 1.ֱ����Բ��λ�ù�ϵ\n");
				    printf(" 2.Բ��һ��ʽ\n");
				    printf(" 3.Բ��Բλ�ù�ϵ\n");
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
				    printf(" 1.�����ϵ\n");
				    printf(" 2.�Գƹ�ϵ\n");

				    scanf("%d", &ThirdOption);
				    if (ThirdOption == 1) {
				    printf(" 1.��������\n");
				    printf(" 2.����ȷ����\n");
				    printf(" 3.�ռ��������\n");
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

				    printf(" 1.������߶Գ�\n");
				    printf(" 2.�߹��ڵ�Գ�\n");
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
				    printf(" 1.һԪ���η���\n");
				    printf(" 2.���ɶ���\n");
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
				    printf(" \n���ּ�����...\n");
				    scanf("%d", &nothing);
		    }

		    }
				    return 0;
		    }
