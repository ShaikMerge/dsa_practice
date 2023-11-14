//
// Created by shaik_shajahan on 14-11-2023.
//

#ifndef DSA_PRACTICE_PERMUTATIONSOFSTRING_H
#define DSA_PRACTICE_PERMUTATIONSOFSTRING_H

#include<iostream>
using namespace std;
class PermutationsOfString {
public: PermutationsOfString(){

}

        void permutationsOfString(string &str, int i){
            if(i >= str.size()){
                cout<<str<<" ";
            }

            for(int j = i;j<str.size();j++){
                swap(str[i], str[j]);   //Bigger Problem Solution
                permutationsOfString(str, i + 1);   // Smaller Problem Solution
                swap(str[i], str[j]);   //BackTracking return to previous State
            }
}
};


#endif //DSA_PRACTICE_PERMUTATIONSOFSTRING_H
