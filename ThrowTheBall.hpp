#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h> 

using namespace std;

class ThrowTheBall{

    public:
        int timesThrown (int N, int M, int L){
            // if (N < 3 || N > 50){
            //     cout << "Invalid N input" << endl;
            //     exit(1);
            // }
            // if (M < 1 || M > 50){
            //     cout << "Invalid M input" << endl;
            //     exit(1);
            // }
            // if (L < 1 || L > N-1){
            //     cout << "Invalid L input" << endl;
            //     exit(1);
            // }
            int totalCounter = 0;
            vector<int> individualCounter (N, 0);
            int holdingTheBall = 0;

            individualCounter[holdingTheBall] = 1;

            while(true){
                if (individualCounter[holdingTheBall] == M){
                    return totalCounter;
                    break;
                }
                if (individualCounter[holdingTheBall] % 2 == 0){
                    holdingTheBall = holdingTheBall - L;
                    if (holdingTheBall < 0){
                        holdingTheBall = holdingTheBall + N;
                    }
                }else{
                    holdingTheBall = holdingTheBall + L;
                    if (holdingTheBall >= N){
                        holdingTheBall = holdingTheBall - N;
                    }
                }

                individualCounter[holdingTheBall]++;
                totalCounter++;

            }
            return totalCounter;
            
        }
};