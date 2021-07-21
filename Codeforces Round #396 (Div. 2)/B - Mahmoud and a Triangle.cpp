#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int n,arr[100009];

ll ttl;

bool b_search(int q){

   int low=q,high=n-1,mid;

   while(low<high){

       mid=(low+high)/2;

       if(arr[mid]<ttl) return true;

       else high=mid-1;

   }

   if(low==high)

       if(arr[low]<ttl)

           return true;

   return false;

}

int main()

{

   bool g=false;

   scanf("%d",&n);

   for(int i=0;i<n;i++)

       scanf("%d",&arr[i]);

   sort(arr,arr+n);

   for(int i=0;i<=n-3;i++){

       for(int j=i+1;j<=n-2;j++){

           ttl=arr[i]+arr[j];

           g=b_search(j+1);

           if(g==true) break;

       }

       if(g==true) break;

   }

   if(g==true) printf("YES\n");

   else printf("NO\n");

   return 0;

}