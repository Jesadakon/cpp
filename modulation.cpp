#include <iostream>
using namespace std;//
int main() {
    cout << "calculator" << endl;
    cout << "--------------------------" << endl;
    int op,num1,num2;
    cin >> op;
    if(op==1){
        cout << "Adder funtion"<< endl;
        // num1
        cout << "Enter num1 : ";
        cin >> num1 ;
        cout << endl;
        // num2
        cout << "Enter num2 : ";
        cin >> num2 ;
        cout << endl;
        cout << "------------------------" << endl;
        cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
    }else if(op==2){
        cout << "Delete function"<< endl;
        // num1
        cout << "Enter num1 : ";
        cin >> num1 ;
        cout << endl;
        // num2
        cout << "Enter num2 : ";
        cin >> num2 ;
        cout << endl;
        cout << "------------------------" << endl;
        cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
    }else if(op==3){
        cout << "Multiplication function"<< endl;
        // num1
        cout << "Enter num1 : ";
        cin >> num1 ;
        cout << endl;
        // num2
        cout << "Enter num2 : ";
        cin >> num2 ;
        cout << endl;
        cout << "------------------------" << endl;
        cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
    }else if(op==4){
        cout << "Division function"<< endl;
        // num1
        cout << "Enter num1 : ";
        cin >> num1 ;
        cout << endl;
        // num2
        cout << "Enter num2 : ";
        cin >> num2 ;
        cout << endl;
        cout << "------------------------" << endl;
        cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
    }else if(op==5){
        cout << "modulation"<< endl;
        // num1
        cout << "Enter num1 : ";
        cin >> num1 ;
        cout << endl;
        // num2
        cout << "Enter num2 : ";
        cin >> num2 ;
        cout << endl;
        cout << "------------------------" << endl;
        cout << num1 << " / " << num2 << " = " << num1%num2 << endl;
        cout << "Subreact function" << endl;
    }else{
        cout << "Incalid data" << endl;
    }
    
    return 0;
}
