#include<cstdio>

#include<iostream>

#include<cstring>

#include<algorithm>

#include<vector>

using namespace std;

struct node{

    int sum;

    int seq;

    int ith;

    bool operator < (const node & p) const{

        if(sum == p.sum){

            return seq < p.seq;

        }

        else{

            return sum < p.sum;

        }

    }

};

int main()

{

    int k,n,a,arr;

    vector<node>vc;

    vector<int>g;

    scanf("%d",&k);

    for(int i=0;i<k;i++){

        scanf("%d",&n);

        arr=0;

        for(int j=0;j<n;j++){

            scanf("%d",&a);

            g.push_back(a);

            arr+=a;

        }

        for(int j=0;j<g.size();j++){

            node e;

            e.sum=arr-g[j];

            e.seq=i;

            e.ith=j;

            vc.push_back(e);

        }

        g.clear();

    }

    sort(vc.begin(),vc.end());

    for(int i=0;i<vc.size();i++){

        for(int j=i+1;j<vc.size();j++){

            if(vc[i].sum<vc[j].sum) break;

            if(vc[i].sum==vc[j].sum && vc[i].seq==vc[j].seq){

                i=j;

                continue;

            }

            if(vc[i].sum==vc[j].sum){

                printf("YES\n");

                printf("%d %d\n",vc[i].seq+1,vc[i].ith+1);

                printf("%d %d\n",vc[j].seq+1,vc[j].ith+1);

                return 0;

            }

        }

    }

    printf("NO\n");

    return 0;

}