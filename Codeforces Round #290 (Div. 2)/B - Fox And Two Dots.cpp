#include<bits/stdc++.h>

using namespace std;

char ch[51][51],l;

int n,m,vis[51][51],c=0,kk,ll;

bool g=false;

void dfs_visit(int u,int v,int k){

   if(u<0 || u>=n || v<0 || v>=m) return;

   if(vis[u][v]==c){

       if(g==false && k>=4 && u==kk && v==ll)

           g=true;

       return;

   }

   if(ch[u][v]==l && g==false){

         vis[u][v]=c;

         dfs_visit(u+1,v,k+1);

         dfs_visit(u-1,v,k+1);

         dfs_visit(u,v+1,k+1);

         dfs_visit(u,v-1,k+1);

   }

}

void dfs(){

   for(int i=0;i<n;i++){

       for(int j=0;j<m;j++){

           c--;

           l=ch[i][j];

           kk=i;

           ll=j;

           dfs_visit(i,j,0);

       }

       if(g==true) break;

   }

}

int main()

{

   scanf("%d %d",&n,&m);

   for(int i=0;i<n;i++){

       for(int j=0;j<m;j++){

           scanf("%c",&ch[i][j]);

           if(ch[i][j]==' ' || ch[i][j]=='\n'){

               j--;

               continue;

           }

       }

   }

   dfs();

   if(g==true) printf("Yes\n");

   else printf("No\n");

   return 0;

}