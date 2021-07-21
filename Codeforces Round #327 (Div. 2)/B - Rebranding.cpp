#include<cstdio>

#include<iostream>

#include<vector>

#include<cstring>

#include<map>

#include<cmath>

#include<algorithm>

#include<queue>

using namespace std;

int main()

{

   int n,m,aa;

   char str[200009],alp[30],a,b;

   scanf("%d %d",&n,&m);

   scanf("%s",&str);

   for(int i=0;i<26;i++){

       alp[i]='a'+i;

   }

   for(int i=0;i<m;i++){

       cin>>a>>b;

      for(int j=0;j<28;j++){

          if(alp[j]==a)

           alp[j]=b;

          else if(alp[j]==b)

           alp[j]=a;

      }

   }

   for(int i=0;i<n;i++){

       aa=str[i]-'a';

       str[i]=alp[aa];

   }

   printf("%s\n",str);

   return 0;

}