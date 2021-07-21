#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()

{

   ll n,b[200009],mx,p,q;

   scanf("%I64d",&n);

   mx=0;

   for(ll i=0;i<n;i++){

       scanf("%I64d",&b[i]);

       if(i==0) mx=abs(b[i]);

       else{

           p=abs(b[i]);

           q=abs(b[i-1]);

           if((b[i]<0 && b[i-1]>0) || (b[i]>0 && b[i-1]<0)){

               p=abs(b[i]-0);

               q=abs(b[i-1]-0);

               mx+=p+q;

           }

           else mx+=abs(p-q);

       }

   }

   printf("%I64d\n",mx);

   return 0;

}