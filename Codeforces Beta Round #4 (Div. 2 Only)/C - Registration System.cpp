#include<cstdio>

#include<iostream>

#include<map>

using namespace std;

int main()

{

   int n;

   char str[35];

   map<string,int>mp;

   scanf("%d",&n);

   for(int i=0;i<n;i++){

       scanf("%s",str);

       if(mp[str]==0) printf("OK\n");

       else printf("%s%d\n",str,mp[str]);

       mp[str]++;

   }

   return 0;

}