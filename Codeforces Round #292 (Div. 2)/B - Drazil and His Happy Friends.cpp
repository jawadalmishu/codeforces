#include<bits/stdc++.h>

using namespace std;

int main()

{

   int n,m,x,coun,b,g,p,q;

   int boy[105]={0},girl[105]={0};

   scanf("%d %d",&n,&m);

   scanf("%d",&b);

   for(int i=0;i<b;i++){

       scanf("%d",&x);

       boy[x]=1;

   }

   scanf("%d",&g);

   for(int i=0;i<g;i++){

       scanf("%d",&x);

       girl[x]=1;

   }

   coun=0;

   if(n==m){

       for(int i=0;i<n;i++){

           if(boy[i]==1 || girl[i]==1)

               coun++;

       }

       if(coun==n){

           printf("Yes\n");

           return 0;

       }

       else{

           printf("No\n");

           return 0;

       }

   }

   coun=0;

   for(int i=0;i<n*m+101;i++){

       p=i%n;

       q=i%m;

       if(boy[p]==1 || girl[q]==1){

           boy[p]=1;

           girl[q]=1;

       }

   }

   for(int i=0;i<n;i++){

       if(boy[i]==0){

           printf("No\n");

           return 0;

       }

   }

   for(int i=0;i<m;i++){

       if(girl[i]==0){

           printf("No\n");

           return 0;

       }

   }

   printf("Yes\n");

   return 0;

}