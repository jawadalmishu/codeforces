#include<bits/stdc++.h>

using namespace std;

int main()

{

   char str[100009];

   scanf("%s",&str);

   int l=strlen(str);

   int q=0;

   while(str[q]=='a')

       q++;

       bool b=false;

   for(int i=q;i<l;i++){

       if(str[i]=='a') break;

       str[i]=str[i]-1;

       b=true;

   }

   if(b==false) str[l-1]='z';

   printf("%s\n",str);

   return 0;

}