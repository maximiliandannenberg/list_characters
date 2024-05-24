#include <iostream>
#include <vector>

// Function to create a 2D array
std::vector<std::vector<int>> create2DArray(int rows, int cols) {
    // Create a vector of vectors and initialize with values
    return std::vector<std::vector<int>>(rows, std::vector<int>(cols, 0));
}

int main() {
    // Example usage
    int rows = 3;
    int cols = 4;

    // Create a 2D array
    std::vector<std::vector<int>> my2DArray = create2DArray(rows, cols);

    // Access and modify elements in the array
    my2DArray[0][1] = 42;

    // Print the array (optional)
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << my2DArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // No need to free memory, as vectors manage memory automatically

    return 0;
}
