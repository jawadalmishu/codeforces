#include<cstdio>
#include<vector>
using namespace std;
int main()
{
    int t, k, n, m, tt, a[101], b[101], as, bs;
    vector<int>vc;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d", &k, &n, &m);
        for(int j=0;j<n;j++){
            scanf("%d", &a[j]);
        }
        for(int j=0;j<m;j++){
            scanf("%d", &b[j]);
        }
        as=0;
        bs=0;
        while(1){
                tt=0;
            for(int j=as;j<n;j++){
                if(a[j]==0){
                    vc.push_back(0);
                    as++;
                    k++;
                    tt=0;
                }
                else{
                    if(a[j]>k){
                        tt++;
                        break;
                    }
                    else{
                        as++;
                        vc.push_back(a[j]);
                    }
                }
            }

            if(bs==m){
                break;
            }

            for(int l=bs;l<m;l++){
                if(b[l]==0){
                    vc.push_back(0);
                    bs++;
                    k++;
                    tt=0;
                }
                else{
                    if(b[l]>k){
                        tt++;
                        break;
                    }
                    else{
                        bs++;
                        vc.push_back(b[l]);
                    }
                }
            }

            if(as==n){
                break;
            }

            if(tt==2 || vc.size()==n+m){
                break;
            }
        }
        if(tt==2 || vc.size()<n+m)
            printf("-1");
        else{
            for(int j=0;j<vc.size();j++)
                printf("%d ", vc[j]);
        }
        printf("\n");
        vc.clear();
    }
    return 0;
}
