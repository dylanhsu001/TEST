#include <iostream>
using namespace std;

int main() {
    int bubbleSort[1000] = {0};
    int buffer = 0;
    int amount = 0;

    cin >> amount;

    for (int i = 0; i < amount; i++){
        cin >> bubbleSort[i];

    }
    /*for (int i = 0; i < amount; i++){
        for (int j = 0; j < amount - 1; j++)
            if (bubbleSort[j + 1] > bubbleSort[j]){
                buffer = bubbleSort[j];
                bubbleSort[j] = bubbleSort[j + 1];
                bubbleSort[j + 1] = buffer;
            }else {
                continue;
            }
    
        
    }
    for (int i = 0; i < amount; i++){
        cout << bubbleSort[i];
    } */
    for (int i = 0; i < amount - 2 ; i++){
        for (int j = i + 1; j < amount; j++){
            if(bubbleSort[i] < bubbleSort[j]){
                buffer = bubbleSort[j];
                bubbleSort[j] = bubbleSort[i];
                bubbleSort[i] = buffer;
                
            }else {
                continue;
            }
        }
    }
    for (int i = 0; i < amount; i++){
        cout << bubbleSort[i];
    }
}
