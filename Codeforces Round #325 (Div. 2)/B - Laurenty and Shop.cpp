#include<cstdio>

#include<iostream>

#include<cmath>

#include<vector>

#include<map>

#include<algorithm>

using namespace std;

int main()

{

   int h,arr[2][55],b[55],sum;

   vector<int>vc;

   scanf("%d",&h);

   arr[0][0]=0;

   arr[1][0]=0;

   for(int i=0;i<=1;i++){

       for(int j=1;j<h;j++){

           scanf("%d",&arr[i][j]);

       }

   }

   for(int i=0;i<h;i++)

       scanf("%d",&b[i]);

   for(int i=0;i<h;i++){

       sum=0;

       sum=b[i];

       for(int j=0;j<=i;j++){

           sum=sum+arr[0][j];

       }

       for(int j=i+1;j<h;j++){

           sum=sum+arr[1][j];

       }

       vc.push_back(sum);

   }

   sort(vc.begin(),vc.end());

   printf("%d\n",vc[0]+vc[1]);

   return 0;

}