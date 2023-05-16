#include <bits/stdc++.h>

void solution(int values[], int size) {
    // Solution goes here
    
    // variables
    int sum = 0; // sum of values in index 0 to i
    std::vector<int> newArray; // new array to store the running sum

    for(int i = 0; i < size; ++i) {
        newArray.push_back(sum + values[i]);
        sum += values[i];
        std::cout << newArray[i] << " ";
    }
}

int main() {
    // Number of values
    int n;
    std::cin >> n;
    int arr[n];
    
    // Input values
    for(int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Call solution function
    solution(arr, n);

    return 0;
}