#include<bits/stdc++.h>

using namespace std;

struct node{

   int u;

   int v;

};

int main()

{

   vector<node>vc;

   int vis[1050]={0};

   int n,x1,y1,x2,y2,a,b,coun,c;

   node e;

   scanf("%d %d %d",&n,&x1,&y1);

   for(int i=0;i<n;i++){

       scanf("%d %d",&x2,&y2);

       e.u=x2; e.v=y2;

       vc.push_back(e);

   }

   coun=0;

   for(int j=0;j<n;j++){

       if(vis[j]==1) continue;

       vis[j]=1;

       coun++;

       a=y1-vc[j].v;

       b=vc[j].u-x1;

       c=(x1*vc[j].v-vc[j].u*y1);

       for(int k=j+1;k<n;k++){

           if((a*vc[k].u+b*vc[k].v+c)==0) vis[k]=1;

       }

   }

   printf("%d\n",coun);

   return 0;

}