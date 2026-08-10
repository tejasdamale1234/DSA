#include<iostream>
using namespace std;

int binary_search(int a[], int n, int x) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (a[mid] == x) {
            return mid;
        }
        else if (a[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1; 
}

int main() {
    int n;
    int a[20];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " integers (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cout << "Enter the targeted element to search for: ";
    cin >> x;

    int result = binary_search(a, n, x);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}


/*
PS D:\tejasdamale> cd "d:\tejasdamale\" ; if ($?) { g++ binarysearch.cpp -o binarysearch } ; if ($?) { .\binarysearch }
Enter the size of the array: 5
Enter 5 integers (sorted): 11
12
13
14
15
Enter the targeted element to search for: 13
Element found at index: 2
PS D:\tejasdamale> 

*/