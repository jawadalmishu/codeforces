#include<cstdio>

#include<iostream>

#include<vector>

#include<map>

#include<cstring>

using namespace std;

vector<int>graph[4005];

int mn=100000000;

int main()

{

   int n,m,x,y;

   map<int, map<int,int> >mp;

   scanf("%d %d",&n,&m);

   for(int i=0;i<m;i++){

       scanf("%d %d",&x,&y);

       graph[x].push_back(y);

       graph[y].push_back(x);

       mp[x][y]=1;

       mp[y][x]=1;

   }

   for(int i=1;i<=n;i++){

       if(graph[i].size()>=2){

           for(int j=0;j<graph[i].size()-1;j++){

               for(int k=j+1;k<graph[i].size();k++){

                   if(mp[graph[i][j]][graph[i][k]]==1){

                       if(graph[i].size()+graph[graph[i][j]].size()+graph[graph[i][k]].size()<mn)

                           mn=graph[i].size()+graph[graph[i][j]].size()+graph[graph[i][k]].size();

                   }

               }

           }

       }

   }

   if(mn!=100000000) printf("%d\n",mn-6);

   else printf("-1\n");

   return 0;

}