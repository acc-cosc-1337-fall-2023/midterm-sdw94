#include"question3.h"

using namespace std;
int main()
 {
    string input; 
    srand(time(0));     
    while(1) 
    {   
        cout<<"Enter Y to roll the die, type something other to stop: ";
        cin>>input;     
        if(input=="Y") 
        {  
            cout<<"Result = "<<roll_die()<<"\n";  
        }
        else 
        {
            exit(0); 
        }
    }
    return 0;
}