#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define N 4
#define SIZE 5

int main() {
    long int number = 0;
    int counter = 0;
    long int arrNums[SIZE];
    long int sum = 0;
    long int max = 0;
    long int min = 0;

    while(cin >> number){
        arrNums[counter] = number;
        counter++;
    }

    min = arrNums[0]+arrNums[1]+arrNums[2]+arrNums[3]+arrNums[4];

    for(int i = 0; i < SIZE; i++){

        switch(i){
            case 0: sum = arrNums[1]+arrNums[2]+arrNums[3]+arrNums[4];
                break;
            case 1: sum = arrNums[0]+arrNums[2]+arrNums[3]+arrNums[4];
                break;
            case 2: sum = arrNums[0]+arrNums[1]+arrNums[3]+arrNums[4];
                break;
            case 3: sum = arrNums[0]+arrNums[1]+arrNums[2]+arrNums[4];
                break;
            case 4: sum = arrNums[0]+arrNums[1]+arrNums[2]+arrNums[3];
                break;
        }

        if(sum > max){
            max = sum;
        }

        if(sum < min){
            min = sum;
        }
    }

    cout << min << " " << max << endl;

    return 0;
}
