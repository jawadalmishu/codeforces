#include<iostream>

#include<cmath>

#include<vector>

#include<queue>

#include<map>

#include<cstring>

#include<algorithm>

#include<cstdio>

using namespace std;

int s(long long x){

   int sum=0;

   while(x){

       sum=sum+x%10;

       x=x/10;

   }

   return sum;

}

int main()

{

   ios_base::sync_with_stdio(false); cin.tie(0);

   long long n,m,sum=0;

  cin>>n;

  long long x=sqrt(n);

   for(long long i=x-100000;i<=x+100000;i++){

       if(i>0 && i*i+i*s(i)==n){

           cout<<i<<endl;

           return 0;

       }

   }

  cout<<"-1"<<endl;

  return 0;

}