#include <iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter size:";
    cin >> n ;
    int arr[n];
    cout << "Enter elements:\n";
    for (int i=0;i<n; i++){
        cin >> arr[i];
    }
    int maxcount = 0,element;
    for(int i=0;i<n;i++){
        int count = 0;
        for (int j=0; j<n; j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count>maxcount){
            maxcount =count;
            element = arr[i];
        }
    }
    cout<< "max frequeny element ="<< element;
    return 0;
}