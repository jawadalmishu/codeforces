#include<bits/stdc++.h>

using namespace std;

int main()

{

   int n,k;

   long long ttl=0;

   scanf("%d",&k);

   if(k>36){

       printf("-1\n");

       return 0;

   }

   if(k%2==0){

       n=k/2;

       for(int i=0;i<n;i++)

           ttl=ttl*10+8;

       printf("%I64d\n",ttl);

       return 0;

   }

   n=k/2;

   for(int i=0;i<n;i++)

       ttl=ttl*10+8;

   ttl=ttl*10+9;

   printf("%I64d\n",ttl);

   return 0;

}