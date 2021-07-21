#include<bits/stdc++.h>

using namespace std;

int main()

{

   char str[50009];

   bool mm=false;

   scanf("%s",&str);

   map<char,int>mp;

   vector<char>vc;

   int l=strlen(str);

   if(l<26){

       printf("-1\n");

       return 0;

   }

   for(int i=0;i<=l-26;i++){

       bool q=false;

       for(int j=i;j<i+26;j++){

           mp[str[j]]++;

           if(str[j]!='?' && mp[str[j]]>1){

               q=true;

               mp.clear();

               break;

           }

       }

       if(q==false){

           mm=true;

           for(char j='A';j<='Z';j++)

               if(mp[j]==0)

               vc.push_back(j);

           int q=0;

           for(int j=i;j<i+26;j++)

               if(str[j]=='?'){

                   str[j]=vc[q];

                   q++;

               }

           break;

       }

   }

   if(mm==true){

       for(int i=0;i<l;i++)

           if(str[i]=='?')

           str[i]='A';

       printf("%s\n",str);

       return 0;

   }

   printf("-1\n");

   return 0;

}