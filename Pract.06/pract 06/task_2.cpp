#include <iostream>
using namespace std;

int main() {



    // task 2

    const int N = 5;
    int arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }


    for (int i = 0; i < N; i++) {
            if (arr[i] % 2 == 0)
            
                cout<< arr[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < N; j++) {
            if (arr[j] % 2 != 0)
           
            cout << arr[j] << " ";
    }
    cout << endl;
    return 0;
}
