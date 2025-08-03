#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class StreetParking{
    public:
        int freeParks(string street){

            int counter = 0;

            for (int i = 0; i < street.length(); i++){
                // if (street[i] == 'B' && street[i-3]  == '-' && street[i-2] == '-' && street[i-1] == '-' && street[i+1] == '-'){
                //     counter++;

                // } else if (street[i] == 'S' && street[i+1] == '-' && street[i+2] == '-' && street[i-1] == '-' && street[i-2] == '-'){
                //     counter++;
                // } else if (street[i] == 'D' && street[i+1] == '-' && street[i-1] == '-' ){
                //     counter++;
                // }

                if (street[i] != '-'){
                    continue;
                }

                if (i + 1 < street.length() && (street[i+1] == 'D' || street[i+1] == 'S' || street[i+1] == 'B')){
                    continue;
                }

                if (i +  < street.length() && (street[i+2] == 'B')){
                    continue;
                }

                if (i - 1 >= 0 && (street[i-1] == 'D' || street[i-1] == 'S' || street[i-1] == 'B')){
                    continue;
                }


                if (i - 2 >= 0 && (street[i-2] == 'B' || street[i-2] == 'S')){
                    continue;
                }

                if (i - 3 >= 0 && (street[i-3] == 'B')){
                    continue;
                }

                counter++;

            }
            return counter;

        }
};



