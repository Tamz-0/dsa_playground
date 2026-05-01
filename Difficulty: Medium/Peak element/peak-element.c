//  Function to find the peak element
int peakElement(int *arr, int n) {
    // code here
    int max_element=arr[0];
    int max_index=0;
    for(int i=1;i<n;i++){
        if(max_element<arr[i]){
            max_element=arr[i];
            max_index=i;
        }
    }
    return max_index;
}