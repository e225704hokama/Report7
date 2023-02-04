#include <stdio.h>

void sortScores(int scores[], int size);

void sortScores(int scores[], int size){
    int number = 0;
    int index ;
    while(size - (number+1)){
        int max = scores[number];
        for(int i=0; i < size-1; i++){
            if(max <= scores[i + number]){
                max = scores[i + number];
                index = i + number;
            }
        }
        scores[index] = scores[number];
        scores[number] = max;
        number += 1;
    }
    

    
}

int main(){
    const int SIZE = 5; //定数として配列のサイズを宣言                          
    int scores[SIZE] = {0, 60, 70, 100, 90};
    //処理コード
    
    printf("scores = %d %d %d %d %d\n", scores[0], scores[1], scores[2], scores[3], scores[4]);

    sortScores(scores, SIZE);
    printf("results = %d %d %d %d %d\n", scores[0], scores[1], scores[2], scores[3], scores[4]);

    return 0;
}