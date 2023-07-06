/ C implementation of the approach
#include <stdbool.h>
#include <stdio.h>
 
// Function to return the first missing positive number from
// the given unsorted array
int firstMissingPos(int A[], int n)
{
 
    // To mark the occurrence of elements
    bool present[n + 1];
    for (int i = 0; i < n; i++)
        present[i] = false;
 
    // Mark the occurrences
    for (int i = 0; i < n; i++) {
 
        // Only mark the required elements
        // All non-positive elements and the elements
        // greater n + 1 will never be the answer
        // For example, the array will be {1, 2, 3} in the
        // worst case and the result will be 4 which is n +
        // 1
        if (A[i] > 0 && A[i] <= n)
            present[A[i]] = true;
    }
 
    // Find the first element which didn't appear in the
    // original array
    for (int i = 1; i <= n; i++)
        if (!present[i])
            return i;
 
    // If the original array was of the type {1, 2, 3} in
    // its sorted form
    return n + 1;
}
 
// Driver code
int main()
{
 
    int arr[] = { 0, 10, 2, -10, -20 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%d", firstMissingPos(arr, size));
}
 
// This code is contributed by Aditya Kumar (adityakumar129)