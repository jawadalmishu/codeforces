#include<cstdio>

#include<iostream>

using namespace std;

int main()

{

   int m,n,a[101][101],b[101][101],c[101][101];

   scanf("%d %d",&m,&n);

   for(int i=0;i<m;i++)

       for(int j=0;j<n;j++)

          a[i][j]=1;

   for(int i=0;i<m;i++){

       for(int j=0;j<n;j++){

           scanf("%d",&b[i][j]);

           if(b[i][j]==0){

               for(int k=0;k<n;k++)

                   a[i][k]=0;

               for(int k=0;k<m;k++)

                   a[k][j]=0;

           }

       }

   }

   for(int i=0;i<m;i++){

       for(int j=0;j<n;j++){

           int x=0;

           for(int k=0;k<n;k++)

               x=x|a[i][k];

           for(int k=0;k<m;k++)

               x=x|a[k][j];

           c[i][j]=x;

       }

   }

   int q=0;

   for(int i=0;i<m;i++){

       for(int j=0;j<n;j++){

           if(c[i][j]!=b[i][j]){

               q=-1;

               break;

           }

       }

       if(q==-1) break;

   }

   if(q==-1) printf("NO\n");

   else{

       printf("YES\n");

       for(int i=0;i<m;i++){

           for(int j=0;j<n;j++){

               printf("%d ",a[i][j]);

           }

           printf("\n");

       }

   }

   return 0;

}