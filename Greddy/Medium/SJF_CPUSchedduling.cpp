#include<bits/stdc++.h>
using namespace std;

int shortestjob(vector<int>bt){
    int n=bt.size();
    int time=0;
    sort(bt.begin(),bt.end());
    for(int i=0;i<n;i++){
        time+=bt[i];
    }
    return time/n;
;}