#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string mainString;
    cout<<"Введите строку: ";
    cin>>mainString;
//    mainString = "abbcdddeeffffghh";
    int i,score;
    score = 1;
    i = mainString.length();
    while (i!=0){
        if (mainString[0]==mainString[1] and mainString[0]==mainString[2]){
            while(mainString[0]==mainString[1]){
                score++;
                mainString.erase(0,1);
            }
            cout<<"("<<score<<")"<<mainString[0];
            mainString.erase(0,1);
            i = i-score;
            score = 1;
        }
        else{
            cout<<mainString[0];
            mainString.erase(0,1);
            i = i-1;
        }
    }

    return 0;
}
