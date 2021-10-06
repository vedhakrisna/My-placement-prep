int sec_max_element(int arr[], int n){
    int max = 0;
    int sec_max = 0;
    for(int i=1;i<n;i++){
        if(arr[i] > arr[max]){
            sec_max = max;
            max = i;   
        }
    }
    return sec_max;
}
