#include "coutLog.h"
#include <iostream>
using namespace std;



int input(string question, string answer, string reaction){
    string ans;
    log(question);
    cin >> ans;
    if(ans == answer){
        log(reaction);
    } else{
        log("Wrong Answer.");
    }
    return 0;
}

int main(){
    input("yes or no", "yes", "WOWOW");
}
