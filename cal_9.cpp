#include <iostream>
using namespace std;


int main(){
    int j = 0;
    for (int i = 1; i <= 2019; i++){
        if ((i / 100 % 10 == 9) || (i / 10 % 10 == 9) || (i % 10 == 9) ){
            j = j + 1;
        }
    }
    cout << j << endl;
}