#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10); // random number between 1 and 10
	// declare variable to store guess of user and set to 0
	// declare variable as counter for number of guesses
    int guess = 0;
    int count = 0	;
	for(;;)
	{
		// increment guess counter
        count = count + 1;
       // cout << count << endl;
        
        
        
        
        
		// read input from user
		//
		
		cin >> guess;
		
		// compare input from user to random number
		// print out winner, too high or too low message
		//

        if (guess > random_number)
        {  cout << "Too High\n";
   	
        }else if (guess < random_number)
        {  cout << "Too Low\n";
        
        }else
        {  cout << "Winner!, Just Right\n";
        	break;
        }
        // print message with number of guesses
	//
	
	}
	return 0;

}
