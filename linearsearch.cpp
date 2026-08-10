#include<iostream>
using namespace std;

int linear_search(int a[], int n, int x) {
    for(int i=0; i<n ; i++) {
        if (a[i]==x) {
            return i;  
        }
    }
    return -1; 
}

int main() {
    int n;
    int a[20];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << "Enter " << n << " integers: ";
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    int x;
    cout << "Enter the targeted element to search for: ";
    cin >> x;

    int result = linear_search(a, n, x);

    if(result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;

}

/*             
> cd "d:\tejasdamale\" ; if ($?) { g++ temp.cpp -o temp } ; if ($?) { .\temp }
Enter the size of the array: 5
Enter 5 integers: 50
47
74
45
42
Enter the targeted element to search for: 45
Element found at index: 3
PS D:\tejasdamale> 
*/