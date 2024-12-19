#include<iostream>
#include<string.h>
using namespace std;

int main() {    
    bool isAuth = true;
    string username = "two";
    string password = "one@123";

    try {   
        if(!isAuth)
         throw isAuth;

        if(username != "one")
         throw username;

        if(password != "one@123")
         throw password;

    } catch(bool e) {
        cout<< "Something want to wrong... " << e;
    } catch(string e) {
        cout << "Invalid Username or Password " << e;
    }
    
    return 0;
}