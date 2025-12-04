#include <iostream>
using namespace std;
int main(){  
    
    
    
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    
    
    

    switch (num1,num2,num3)
    {
    case 1:
        
        if (num1<num2<num3){
        cout << num1 << " " << num2 << " " <<  num3;
    }
        break;
    case 2:
    if(num2<num3<num1){
        cout << num2 << " " << num3 << " " <<  num1;
    }
    break;
    case 3:
    if(num3<num1<num2) {
        cout << num3 << " " << num1 << " " <<  num2;
    }
    break;
    default:
        break;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
