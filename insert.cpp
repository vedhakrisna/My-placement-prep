void insert(int arr[], int n, int pos, int data){
    int i;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<< " ";
    }
    cout << endl;
    for(i=n-1 ; i>pos ; i--){
        arr[i] = arr[i-1];
    }
    arr[i-1] = data;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
