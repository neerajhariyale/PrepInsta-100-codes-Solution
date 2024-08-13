// Check String Pallindrom :

#include<iostream>
#include<string.h>
using namespace std;

//METHOD 2 - > 
void lowerCase(string name){
    int i = 0;
    while(i != '\0'){
        if(name[i] > 64 && name[i] < 91){
            name[i] += 32;
        }
        i++;
    }
}
int main(){

    string name = "";
    bool flag = false;

    cout << "Enter your Name :";
    cin >> name;

    lowerCase(name);
       
    int n = name.size();

    for(int i = 0 ; i < n  ; i++){
        if (name[i] != name[n - i - 1]) {
            flag = true;
            break;
        }
    }

    if(flag){
        cout << "Not a pallindrom";
    }
    else{
        cout << "Pallindrom";
    }

    return 0;
}
