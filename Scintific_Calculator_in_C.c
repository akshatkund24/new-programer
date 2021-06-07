#include <stdio.h>
#include <math.h>

int main()
{
   float r,x,y,z,n,f,g,h,sub,sum=0,mul=1,div,angle,num,res,rt;
   int again,d,e,i,q=1,bas,po,fac,faci=1;
   double result;
   long int val=1,facf=1;
   top:

    //telling the user to chose between these operation
    printf("1 - Add\n");
    printf("2 - Subtract\n");
    printf("3 - Multiply\n");
    printf("4 - Divide\n");
    printf("5 - sin\n");
    printf("6 - cos\n");
    printf("7 - tan\n");
    printf("8 - cosec\n");
    printf("9 - sec\n");
    printf("10 - cot\n");
    printf("11 - log\n");
    printf("12 - square root\n");
    printf("13 - power\n");
    printf("14 - factorial\n");


    do
    {
        printf("What operation do u want to perform \n");
        scanf("%d",&d );

        switch (d)
    {
        case 1:
             printf("enter how many number you want to add \n");
             scanf("%d",&e);
             printf("enter the number\n");
             for(i=0;i<e;i++)
             {
                 scanf("%f",&f);
                 sum=sum+f;
             }
             printf("the sum is %f\n",sum);
             break;

        case 2:
             printf("enter two number you want to subtract \n");
             scanf("%f %f",&g,&h);
             sub=g-h;
             printf("%f-%f= %f\n",g,h,sub);
             break;

        case 3:
             printf("enter how many number you want to multiply \n");
             scanf("%d",&e);
             printf("enter the number\n");
             for(i=0;i<e;i++)
             {
                 scanf("%f",&f);
                 mul=mul*f;
             }
             printf("the answer is %f\n",mul);
             break;

        case 4:
             printf("enter two number you want to divide \n");
             scanf("%f %f",&g,&h);
             div=g/h;
             printf("%f/%f= %f\n",g,h,div);
             break;

         case 5:
             printf("enter the value of an angle \n");
             scanf("%f",&angle);
             r=(3.14/180)*angle;
             x=sin(r);
             printf("the value of sin(%f): %f\n",angle,x);
             break;

         case 6:
             printf("enter the value of an angle \n");
             scanf("%f",&angle);
             r=(3.14/180)*angle;
             y=cos(r);
             printf("the value of cos(%f): %f\n",angle,y);
             break;

         case 7:
             printf("enter the value of an angle \n");
             scanf("%f",&angle);
             r=(3.14/180)*angle;
             z=tan(r);
             printf("the value of tan(%f): %f\n",angle,z);
             break;

         case 8:
             printf("enter the value of an angle \n");
             scanf("%f",&angle);
             r=(3.14/180)*angle;
             x=sin(r);
             n=1/x;
             printf("the value of cosec(%f): %f\n",angle,n);
             break;

         case 9:
             printf("enter the value of an angle \n");
             scanf("%f",&angle);
             r=(3.14/180)*angle;
             y=cos(r);
             n=1/y;
             printf("the value of sec(%f): %f\n",angle,n);
             break;

         case 10:
             printf("enter the value of an angle \n");
             scanf("%f",&angle);
             r=(3.14/180)*angle;
             z=tan(r);
             n=1/z;
             printf("the value of cot(%f): %f\n",angle,n);
             break;

         case 11:
             printf("enter the number \n");
             scanf("%f",&num);
             result=log(num);
             printf("log(%f)= %0.21f\n",num,result);
             break;

         case 12:
             printf("enter the number\n");
             scanf("%f",&rt);
             res=sqrt(rt);
             printf(" the square root of number %f is %f \n",rt,res);
             break;

         case 13:
            printf("enter the base\n");
            scanf("%d",&bas);
            printf("enter the power\n");
            scanf("%d",&po);
            while(q<=po)
            {
                val=val*bas;
                printf("%ld\n",val);

                q++;
            }
            printf("%d^%d= %ld\n",bas,po,val);
            break;

         case 14:
            printf("enter the number \n");
            scanf("%d",&fac);
            while(faci<=fac)
            {
                facf=facf*faci;
                faci++;
            }
            printf("%d ! is %ld\n",fac,facf);
            break;

         default:
             printf("enter a valid operation");
            break;
    }
    printf("if u want to do more calculation then press 0 \n");
    scanf("%d",&again);
    }
    while(again==0);

    goto top;


}
