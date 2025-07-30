#include <iostream> 

using namespace std;

class Inchworm{
    public:
        int lunchtime(int branch, int rest, int leaf){
            if (branch < 1 || branch > 1000000){
                cout << "Invalid branch input" << endl;
                exit(1); // Break function
            }
            if (rest < 1 || rest > 1000){
                cout << "Invalid rest input" << endl;
                exit(1);
            }
            if (leaf < 1 || leaf > 1000){
                cout << "Invalid leaf input" << endl;
                exit(1);
            }
            int counter = 0; 
            for (int i = 0; i <= branch; i+= rest){ // Incrementing by rest interval 
                if (i % leaf == 0){ // If current position (incremented by rest interval) % leaf position == 0, 
                    counter++; // then counter incremented 
                }
            }
            return counter; // return the counter 
        }
};