#include <iostream>
#include <cstdlib>
#include <cstring>
#include <chrono>
#include <thread>
#include <string>
using namespace std;

void make_password();

int main() {
    char confirm ;
    
    cout << "====== PROGRAM MAKE PASSWORD! =====\n";
    cout << ".\n";
    cout << "Do you Confirm to MAKE Password? (y/n) => ";
    cin >> confirm;
    cout << ".\n";
    switch (confirm) {
    case 'Y' :case 'y' :
        make_password();
        break;
    case 'N' :case 'n' :
        cout << cout << "====== END! =====\n";
    default:
        cout << "ERROR!";
        cout << cout << "====== END! =====\n";
        break;
    }
    return 0;

}

void make_password() {
    cout << "====== MAKE PASSWORD! =====\n";
    char pass1[4];
    int pass2[4];
    int S = 0;
    cout << "Status : MakePassword 0%" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    cout << ".\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    cout << "..\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    cout << "...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    cout << "Status : MakePassword 50%" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    cout << "....\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    cout << ".....\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    cout << "......\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    S = 0;

    for (int count = 1; count <= 8; count++ , S++) {
        int ran = rand() % 16;
        pass2[S] = ran;
        ran = 0;
    }
    cout << "Status : MakePassword 100%" << endl;

    //result
    cout << "===== RESULT =====\n";
    cout << ".\n";
    cout << "Password => " << pass2 << endl;
    cout << ".\n";
    cout << "===== END PROGRAM =====\n";

    //setdef
    
    
 
}