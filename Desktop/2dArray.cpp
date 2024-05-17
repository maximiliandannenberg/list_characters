#include <iostream>

int main(){
    int rows, cols;
    std::cout << "enter the amount of rows and columns you want: " << "\n";
    std::cin >> rows >> cols;


    int** mytable = new int*[rows]; // you make a pointer which creates an array of pointers

// std::cout << mytable[1];

    for(int i = 0; i < rows; i++ ){
        mytable[i] = new int[cols]; 
        //at each memory address, which is a pointer to an array, you assign the length of the array.
    }

for (int i = 0; i < rows; i++){
    for (int j = 0; j < cols; j++){
        int number;
        std::cout << "For Row " << i+1 << " Pick what number goes into column " << j+1 << "\n";
        std::cin>> number;
        mytable[i][j] = number;
    }
}

int findrow, findcol;
std::cout << "select what number you want to get, insert first the row, then the column." << "\n";

std::cin >> findrow >> findcol;
findrow--;
findcol--;
std::cout << mytable[findrow][findcol];



for(int i = 0; i < rows; i++ ){
        delete[] mytable[i];
    }

delete[] mytable;
mytable = NULL;

    return 0;
}