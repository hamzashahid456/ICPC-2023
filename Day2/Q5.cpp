#include<stdio.h>
#include<bits/stdc++.h>
#include <algorithm>
#include<iostream>

using namespace std;

int main(){
    int sizee;
    cin >> sizee;

    int arr[sizee];

    for(int i=0; i<sizee; i++){
        cin >> arr[i];
    }

    vector<int> res;   
    int index = 0;
    int size = sizee;

    while(index < size - 1){
        int left = index;
        int i = index;
        while( i < (size-1) && arr[i] < arr[i+1] ){
            left = left + 1;
            i = i+1;
            break;
        }

        int maxm = left + 1;
        int right = maxm;

        while(maxm < size){
            if(arr[maxm] > arr[right]){
                right = maxm;
            }
            maxm = maxm + 1;
        }
        
        index = right;

        int sum = 0;

        int sub  = min(arr[left], arr[right]);

        for(int j = left + 1; j < right; j++){
            sum = sum + (sub - arr[j]);
            
        }

        if(sum < 0){
            sum = 0;
        }

        res.push_back(sum);

    }

    cout << *max_element(res.begin(), res.end() ) << endl;


    return 0;
}