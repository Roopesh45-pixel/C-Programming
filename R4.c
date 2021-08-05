#include <stdio.h>
int date_validation();
int dd,mm,yyyy,dflag=0,mflag=0,yflag=0;
int main()
{ int flag=0;
    flag=date_validation();
    if (flag==1)
    printf("Date is valid.");
    if(flag==-1)
    printf("Day is invalid.");
    if(flag==-2)
    printf("Month is not valid.");
    if(flag==-3)
    printf("Year is not valid.");
    return 0;
}
  int date_validation()
  {
   scanf("%d/%d/%d",&dd,&mm,&yyyy);
    if(yyyy>=1900 && yyyy<=9999)
    {
        if(mm>=1 && mm<=12)
        {
            if((dd>=1 && dd<=31) && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10 || mm==12))
                dflag=1;
            else if((dd>=1 && dd<=30) && (mm==4 || mm==6 || mm==9 || mm==11))
               dflag=1;
            else if((dd>=1 && dd<=28) && (mm==2))
                dflag=1;
            else if(dd==29 && mm==2 && (yyyy%400==0 ||(yyyy%4==0 && yyyy%100!=0)))
                dflag=1;
            else
            {
                dflag=-1;
            }
                return dflag;
        }
        else
        {
           mflag=-2;
           return mflag;
        }
    }
    else
    {
        yflag=-3;
        return yflag;
    }

}