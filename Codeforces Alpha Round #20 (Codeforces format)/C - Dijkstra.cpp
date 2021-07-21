#include<bits\stdc++.h>

using namespace std;

#define inf 100000000000000

struct node{

   long long x,y;

   node(long long a,long long b) { x=a; y=b; }

   bool operator < (const node & p) const{

       return y > p.y;

   }

};

vector<long long>vc[100008],cost[100008];

long long d[100006],par[100006];

long long dijkstra(long long n){

   long long kk=-1;

   for(long long i=0;i<=100006;i++){

       d[i]=inf;

       par[i]=kk;

   }

   priority_queue<node>q;

   q.push(node(1,0));

   d[1]=0;

   while(!q.empty()){

       node f=q.top(); q.pop();

       long long l=f.x;

       if(l==n) return d[l];

       for(long long i=0;i<vc[l].size();i++){

           long long g=vc[l][i];

           if(d[l]+cost[l][i]<d[g]){

               d[g]=d[l]+cost[l][i];

               par[g]=l;

               q.push(node(g,d[g]));

           }

       }

   }

    return -1;

}

int main()

{

   vector<long long>out;

   long long vertex,edge,u,v,w;

   scanf("%I64d %I64d",&vertex,&edge);

   for(long long i=0;i<edge;i++){

       scanf("%I64d %I64d %I64d",&u,&v,&w);

           vc[u].push_back(v);

           vc[v].push_back(u);

           cost[u].push_back(w);

           cost[v].push_back(w);

   }

   long long ret=dijkstra(vertex);

   if(ret==-1){

       printf("-1\n");

       return 0;

   }

   while(vertex!=-1){

       out.push_back(vertex);

       vertex=par[vertex];

   }

   reverse(out.begin(),out.end());

   for(long long i=0;i<(int)out.size();i++)

       printf("%I64d ",out[i]);

   printf("\n");

   return 0;

}