//
// Created by shaik_shajahan on 14-11-2023.
//
#include "PermutationsOfString.h"
#include "RatInAMaze.h"
#include <bits/stdc++.h>
using namespace std;
int main(){
    PermutationsOfString *permutationsOfString = new PermutationsOfString();
    RatInAMaze *aMaze = new RatInAMaze();
    string str = "abcd";
  //  permutationsOfString->permutationsOfString(str, 0);

    //Rat in Maze

    int maze[4][4] = { {1,0,0,0},
                       {1,1,0, 1},
                       {1,1,0,0},
                       {0,1,1,1}};

    //Base Case

    if(maze[0][0] == 0){
        cout<<"No Path Exists"<<endl;
    }

    int row = 4;
    int col = 4;

    vector<vector<bool> > visited(row, vector<bool>(col, false));

    visited[0][0] = true;

    vector<string> path;
    string output = "";

    aMaze->SolveMaze(maze, row, col, 0,0, visited, path, output);

    for(auto i : path){
        cout<<i<<" ";
    }

}