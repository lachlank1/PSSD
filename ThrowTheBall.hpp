#include <iostream>
#include <vector>

using namespace std;

class ThrowTheBall{
    public:
        int timesThrown (int N, int M, int L){
            if (N < 3 || N > 50){
                cout << "Invalid N input" << endl;
                exit(1);
            }
            if (M < 1 || M > 50){
                cout << "Invalid M input" << endl;
                exit(1);
            }
            if (L < 1 || L > N-1){
                cout << "Invalid L input" << endl;
                exit(1);
            }
            int totalCounter = 0;
            vector<int> individualCounter (N, 0);
            
            int i = 0;

            while (i <= N){
                if (individualCounter[i] == M){
                    return totalCounter;
                    break;
                }

                if (individualCounter[i] % 2 == 0){
                    individualCounter[i]++;
                    totalCounter++;
                    i -= L; 
                }else{
                    individualCounter[i]++;
                    totalCounter++;
                    i += L;     
                }
            }

            return totalCounter;
            
        }
};