#include<cstdio>

#include<iostream>

using namespace std;

int main()

{

   int n,m,work[1002][1002],b1[1002][1002],b2[1002][1002],g1[1002][1002],g2[1002][1002];

   scanf("%d %d",&n,&m);

   for(int i=1;i<=n;i++){

       for(int j=1;j<=m;j++){

           scanf("%d",&work[i][j]);

       }

   }

   for(int i=1;i<=n;i++){

       for(int j=1;j<=m;j++){

           b1[i][j]=max(b1[i][j-1],b1[i-1][j])+work[i][j];

       }

   }

   for(int i=n;i>=0;i--){

       for(int j=m;j>=0;j--){

           b2[i][j]=max(b2[i+1][j],b2[i][j+1])+work[i][j];

       }

   }

   for(int i=n;i>=1;i--){

       for(int j=1;j<=m;j++){

           g1[i][j]=max(g1[i+1][j],g1[i][j-1])+work[i][j];

       }

   }

   for(int i=1;i<=n;i++){

       for(int j=m;j>=0;j--){

           g2[i][j]=max(g2[i-1][j],g2[i][j+1])+work[i][j];

       }

   }

   int op1,op2,ans=0;

   for(int i=2;i<n;i++){

       for(int j=2;j<m;j++){

           op1=b1[i][j-1]+b2[i][j+1]+g1[i+1][j]+g2[i-1][j];

           op2=b1[i-1][j]+b2[i+1][j]+g1[i][j-1]+g2[i][j+1];

           ans=max(ans,max(op1,op2));

       }

   }

   printf("%d\n",ans);

   return 0;

}

