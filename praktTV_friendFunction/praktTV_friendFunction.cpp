#include "TV.h"
#include "Remote.h"
#include<iostream>
using namespace std;

int main() {
    TV tv1(20, 30); 
    cout << "=============== Information TV1 =============" << endl;
    tv1.printInfo(); 

    Remote remote(&tv1); 
    cout << "\t\tAfter turning on the TV" << endl;
    remote.power();  
    +remote;        
    ++remote;        
    tv1.printInfo(); 

    TV tv2(5, 10);  
    cout << "=============== Information TV2 =============" << endl;
    tv2.printInfo();
    remote.chooseTV(&tv2); 
    cout << "\t\tAfter turning on the TV" << endl;
    remote.power();  
    +remote;         
    tv2.printInfo(); 

    
}
