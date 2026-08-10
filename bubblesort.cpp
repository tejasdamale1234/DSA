#include<iostream>
using namespace std ;

void bubblesort(int a[], int n ){
    int temp;
    for (int i=0 ; i<n-1; i++){
        for (int j=0; j<n-1 ; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp ;
            }
        }
    }
}

int main(){
    int a[20] , n ;
    cout<<"enter size of array "<<endl;
    cin>>n;
    
    cout<<"enter unsorted  elements "<<endl;
    for (int i =  0 ; i < n ; i++ ){
        cin>>a[i];
    }

    bubblesort(a, n );
    cout<<"sorted list is "<<endl ;
    for (int i = 0 ; i<n ; i++){
        cout<<a[i]<<endl; 
    }
return(0);


}

/*PS D:\tejasdamale> cd "d:\tejasdamale\" ; if ($?) { g++ bubblesort.cpp -o bubblesort } ; if ($?) { .\bubblesort }
enter size of array 
5
enter unsorted  elements 
60
30
70
20
50
sorted list is 
20
30
50
60
70
1975028499
PS D:\tejasdamale> */