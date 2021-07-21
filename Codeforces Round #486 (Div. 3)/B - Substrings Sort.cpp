#include<cstdio>

#include<iostream>

#include<algorithm>

using namespace std;

bool cmp(string a,string b){

    return a.length() < b.length();

}

int main()

{

    string s[109];

    int n;

    scanf("%d",&n);

    for(int i=0;i<n;i++)

        cin>>s[i];

    sort(s,s+n,cmp);

    for(int i=1;i<n;i++){

        if(s[i].find(s[i-1])==-1){

            printf("NO\n");

            return 0;

        }

    }

    printf("YES\n");

    for(int i=0;i<n;i++){

        cout<<s[i]<<endl;

    }

    return 0;

}