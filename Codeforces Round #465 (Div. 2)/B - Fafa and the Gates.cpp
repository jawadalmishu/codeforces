#include<bits/stdc++.h>

using namespace std;

int main()

{

   int n,k,m,coin=0,x=0,y=0,g=0;

   char s[100009];

   scanf("%d",&n);

   scanf("%s",s);

   if(n<=2){

       printf("0\n");

       return 0;

   }

   if(s[0]=='U'){

       m=2; k=2; x=0; y=1;

   }

   else{

       m=1; k=1; x=1; y=0;

   }

   for(int i=1;i<n;i++){

       if(s[i]=='U'){

           y=y+1;

           if(y>x) m=2;

           if(m!=k){

               k=m;

               coin++;

           }

       }

       else{

           x=x+1;

           if(x>y) m=1;

           if(m!=k){

               k=m;

               coin++;

           }

       }

   }

   printf("%d\n",coin);

   return 0;

}