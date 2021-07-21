#include<bits/stdc++.h>

using namespace std;

int main()

{

   int n,k,arr[550],ad=0;

   scanf("%d %d",&n,&k);

   for(int i=0;i<n;i++)

       scanf("%d",&arr[i]);

   if(n==1){

           printf("0\n");

           printf("%d\n",arr[0]);

       return 0;

   }

   for(int i=1;i<n;i++){

       if((arr[i]+arr[i-1])>=k) continue;

       int x=k-(arr[i]+arr[i-1]);

       ad+=x;

       arr[i]+=x;

   }

   printf("%d\n",ad);

   for(int i=0;i<n;i++)

       printf("%d ",arr[i]);

   return 0;

}