
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    const int SIZE = 20;
    const int MAX_RAND_VALUE = 1000;
    short mas[SIZE] = {};
    int i;
    int min = MAX_RAND_VALUE + 1;
    int max = 0;
    int srednee = 0;
    int n = 0;
    
    for (i = 0; i < SIZE; i++) {
        mas[i] = rand() % MAX_RAND_VALUE;
        if (mas[i] <  min) {
            min = mas[i];
        }
        if (mas[i] > max) {
            max = mas[i];
        }
        
    }
    srednee = n / SIZE;
    cout << "Среднее - " << srednee << endl;
    cout << "MIN - " << min << endl;
    cout << "MAX - " << max << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        n += mas[i];
        if (mas[i] % 2 != 0) {
            mas[i] = 0;     
        }cout << mas[i] << " ";
    }



}

