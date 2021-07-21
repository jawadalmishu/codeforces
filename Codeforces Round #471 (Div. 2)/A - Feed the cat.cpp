#include<bits/stdc++.h>

using namespace std;

int main()

{

   int hh=0,mm=0,h,d,c,n,k,p;

   double cost1,cost2;

   char str[10];

   scanf("%[^\n]%*c",str);

   scanf("%d %d %d %d",&h,&d,&c,&n);

   for(int i=0;i<=4;i++){

       if(i==2) continue;

       if(i<2){

           p=str[i]-48;

           hh=p+hh*10;

       }

       else{

           p=str[i]-48;

           mm=p+mm*10;

       }

   }

   if(hh>=20){

       k=h/n;

       if(n*k<h) k++;

       cost1=c*k;

       cost1=cost1-(cost1*20)/100;

       printf("%lf\n",cost1);

       return 0;

   }

   k=h/n;

   if(n*k<h) k++;

   cost1=c*k;

   int ttl=(20*60)-(hh*60+mm);

   h=h+(d*ttl);

   k=h/n;

   if(n*k<h) k++;

   cost2=c*k;

   cost2=cost2-(cost2*20)/100;

   printf("%lf\n",min(cost1,cost2));

}