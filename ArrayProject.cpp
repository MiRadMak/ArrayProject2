
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    short mas[10] = {};
    for (int i = 0; i <= 9; i++) {
        mas[i] = i+1;
        cout << mas[i] << endl;
    }

}

