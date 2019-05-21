#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PHI 3.14

double Cuboid(double width, double length, double height) {
   return width * length * height;
}
double sphere(double r1)
{
   return 4 / 3 * r1 * r1 * r1 * PHI;
}
double tripyra(void)
{
	printf("밑면과 윗면이 평행한 원뿔대의 부피 구하기\n\n");
	printf("┌────────────────────────────────────────────────────────────────────────────────────────────┐\n");
	printf("│                                                                                            │\n");
	printf("│           1번 : 밑면과 윗면의 반지름의 길이를 알고 뿔대의 높이를 아는 경우                 │\n");
	printf("│           2번 : 밑면과 윗면의 반지름의 길이를 알고 빗변의 길이를 아는 경우                 │\n");
	printf("│                                                                                            │\n");
	printf("└────────────────────────────────────────────────────────────────────────────────────────────┘\n");
	
	int ip;
	printf("입력하세요 : ");
	scanf("%d",&ip);
	
	double i1;
	double j1;
	double h1,h2;
	double V1;
	if(ip==1){
		printf("밑면의 반지름의 길이를 입력하세요 : ");
		scanf("%lf", &i1);
		printf("윗면의 반지름의 길이를 입력하세요 : ");
		scanf("%lf", &j1);
		printf("높이를 입력하세요 : ");
		scanf("%lf", &h1);
		
		h2=(h1*j1)/(i1-j1); //작은 원뿔의 높이 
		V1=((i1*i1*PHI*(h1+h2))-(j1*j1*PHI*h2))/3;//원뿔대의 부피 
		
		printf("부피는 %.3lf 입니다.",V1);
		return V1;
	}
	
	double i2;
	double j2;
	double l1,l2,h3,h4;
	double V2;
	if(ip==2){
		printf("밑면의 반지름의 길이를 입력하세요 : ");
		scanf("%lf", &i2);
		printf("윗면의 반지름의 길이를 입력하세요 : ");
		scanf("%lf", &j2);
		printf("빗변의 길이를 입력하세요 : ");
		scanf("%lf", &l1); //원뿔대의 빗변의 길이 
		
		l2=(l1*j2)/(i2-j2); //작은 원뿔의 빗변의 길이 
		h3=sqrt((double)(l2*l2-j2*j2));//작은 원뿔의 높이 
		h4=sqrt((double)((l1+l2)*(l1+l2)-i2*i2));//큰 원뿔의 높이 
		V2=((i2*i2*PHI*h4)-(j2*j2*PHI*h3))/3;
		
		printf("부피는 %.3lf 입니다.",V2);
		return V2;
	}
}

int main(void) {
    int  c;
  printf("┌────────────────────────────────────────────────────────────────────────────────────────────┐\n");
	printf("│                                                                                            │\n");
	printf("│                                 1번 : 직육면체의 부피 구하기                               │\n");
	printf("│                                 2번 : 구의 부피 구하기                                     │\n");
	printf("│                                 3번 : 원뿔대의 부피 구하기                                 │\n");
	printf("│                                                                                            │\n");
	printf("└────────────────────────────────────────────────────────────────────────────────────────────┘\n");
    printf("부피를 구하고자 하는 도형에 해당하는 숫자를 입력하시오. : ");
    scanf("%d", &c);
	
	system("cls"); 
   if(c==1)
   {
		double w, l, h, VolumeC;

   		printf("가로 : ");
   		scanf_s("%lf", &w);
   		printf("세로 : ");
   		scanf_s("%lf", &l);
   		printf("높이 : ");
   		scanf_s("%lf", &h);

   		VolumeC = Cuboid(w, l, h);
   		printf("직육면체의부피 : %f", VolumeC);
   }
   else if(c==2)
   { 
   		double r1, volume1;
   		printf("\n구의 반지름을 입력하시오.(cm)");
   		scanf_s("%lf", &r1);

   		volume1 = sphere(r1);

   		printf("구의 부피는 %lf cm^3 입니다", volume1);
   }
   else if (c == 3)
   {
		tripyra();
   }
   else 
   {
      printf("잘못 입력하셨습니다.\n");
   }
   return 0;
}
