#include<iostream>
#include<cstring>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
struct edge{
    int u,v;

};
int main()
{
    int t, a_pos, diff_1, check_var;
    char ch[]={
              'a','b', 'c', 'd', 'e', 'f',
               'g', 'h', 'i', 'j', 'k', 'l',
               'm', 'n', 'o', 'p', 'q', 'r',
               's', 't', 'u', 'v', 'w', 'x',
               'y', 'z'
               };
    char str[28];
    vector<char>vc;
    map<char, int>mp;
    map<char, int>pos;
    scanf("%d", &t);
    for(int i=0;i<t;i++){
        check_var=0;
        scanf("%s", &str);
        for(int j=0;j<strlen(str);j++){
            mp[str[j]]++;
            if(mp[str[j]]>1){
                printf("NO\n");
                check_var=-1;
                break;
            }
            if(j>0 && j<strlen(str)-1){
                int q1=str[j-1];
                int q2=str[j+1];
                int q3=str[j];
                if(q3>q1 && q3>q2){
                    printf("NO\n");
                    check_var=-1;
                    break;
                }
            }
            /*pos[str[j]]=j;
            if(str[j]=='a')
                a_pos=j;*/
            vc.push_back(str[j]);
        }
        if(check_var==-1){
            vc.clear();
            mp.clear();
            pos.clear();
            continue;
        }
        sort(vc.begin(), vc.end());
        for(int j=0;j<vc.size();j++){
            /*if(j==0 && vc[j]=='a'){
                continue;
            }
            diff_1=abs(a_pos-pos[vc[j]]);
            cout<<"diff="<<diff_1<<endl;
            cout<<"a_pos="<<a_pos<<endl;
            cout<<"pos_vc="<<pos[vc[j]]<<endl;*/
            if(vc[j]!=ch[j]){
                printf("NO\n");
                check_var=-1;
                break;
            }
        }
        if(check_var==-1){
            vc.clear();
            mp.clear();
            pos.clear();
            continue;
        }
        printf("YES\n");
        vc.clear();
        mp.clear();
        pos.clear();
    }
}
