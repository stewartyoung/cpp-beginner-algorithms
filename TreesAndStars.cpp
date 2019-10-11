#include <iostream>
using namespace std;
int main(){
    for(int i=1; i<= 6; i++){
        if (i == 1){
            cout << "     *     \n";
        };
        if ((i>1) && (i<6)){
            // print 6 - i spaces at the beginning of each new line
            string spaceString = " ";
            std:string leftSpaces(i-1, spaceString);
            cout << "/";
            // print i - 2 spaces after left side of tree
            std::string MiddleLeftSpaces(i - 2, " ");
            cout << "|";
            // print i -2 spaces after middle of tree
            std::string MiddleRightSpaces(i - 2, " ");
            // print the right hand side of the tree
            cout << "\\";
            // end the line
            cout << "\n";
        };
    };
}