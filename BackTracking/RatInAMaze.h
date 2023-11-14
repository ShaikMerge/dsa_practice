//
// Created by shaik_shajahan on 14-11-2023.
//

#ifndef DSA_PRACTICE_RATINAMAZE_H
#define DSA_PRACTICE_RATINAMAZE_H

#include <bits/stdc++.h>
using namespace  std;
class RatInAMaze {
public:RatInAMaze(){

}

        bool isSafe(int i, int j, int row, int col, vector<vector<bool>> &visited, int arr[][4]){
            if((i>=0 && i < row)  && (j>=0 && j< col) && (arr[i][j] == 1) &&(visited[i][j] == false)){
                return true;
            }
            else{
                return false;
            }
}

        void SolveMaze(int arr[][4], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output){

                if(i == row -1 && j == col - 1){
                    path.push_back(output);
                    return;
                }

                //Down -> i + 1, j

                if(isSafe(i+1, j, row, col, visited, arr)){
                        visited[i + 1][j] = true;
                    SolveMaze(arr, row, col, i +1, j, visited, path, output + 'D');
                    //BackTracking
                    visited[i + 1][j] = false;
                        }

                //Up i - 1, j

                if(isSafe(i - 1, j, row, col, visited, arr)){
                    visited[i - 1][j] = true;
                    SolveMaze(arr, row, col, i -1 , j, visited, path, output + 'U');
                    visited[i - 1][j] = false;
                }

                //Left i, j -1
            if(isSafe(i, j -1, row, col, visited, arr)){
                visited[i][j -1] = true;
                SolveMaze(arr, row, col, i , j - 1, visited, path, output + 'L');
                visited[i][j - 1] = false;
            }

            //Right i, j + 1
            if(isSafe(i, j + 1, row, col, visited, arr)){
                visited[i][j + 1] = true;
                SolveMaze(arr, row, col, i , j + 1, visited, path, output + 'R');
                visited[i][j + 1] = false;
            }


}

};


#endif //DSA_PRACTICE_RATINAMAZE_H
