#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int rounds;
    cin >> rounds;

    int arr[2];
    for (int i=0; i<rounds; i++){

        for(int i=0; i<2; i++){
            cin >> arr[i];
        }
        int tmp = arr[0];
        char tiles[tmp][tmp];

        // for getting tiles input
        // for rows
        for(int i=0; i< tmp; i++){
            // for columns
            for(int j = 0; j<tmp; j++){
                cin >> tiles[i][j];
            }
            
        }

        // for getting index
        for(int i=0; i<arr[1]; i++){
            int tmpp[2];
            for(int j=0; j<2; j++){
                cin >> tmpp[j];
            }

            int r = tmpp[0];
            int c = tmpp[1];

            char color = tiles[r][c];

            int sum = 1;
            while(true){
                // for up
                if(tiles[r-1][c] == color){
                    sum++;
                    continue;
                }
                // for left
                else if(tiles[r][c-1] == color){
                    sum++;
                    continue;
                }
                // for right
                else if(tiles[r][c+1] == color){
                    sum++;
                    continue;
                }
                // for downwards
                else if(tiles[r+1][c] == color){
                    sum++;
                    continue;
                }
                break;
            }

            cout << sum;
            
        }

    }

    return 0;
}