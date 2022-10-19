void sort012(int *arr, int n)
{    //As the targe is to bring all 0s at left then all 1s and then all     // 2's.
    int s = 0; int e = n - 1; int m = 1;
    
    for(int i = 0; i < n; i++){
        if(arr[s] != 0){
            if(arr[m] == 0){swap(arr[s],arr[m]);}
            else if(arr[e] == 0){swap(arr[s],arr[e]);}
        }
        if(arr[m] != 1){
            if(arr[s] == 1){swap(arr[s],arr[m]);}
            else if(arr[e] == 1){swap(arr[m],arr[e]);}
        }
        if(arr[e] != 2){
            if(arr[s] == 2){swap(arr[s],arr[e]);}
            else if(arr[m] == 2){swap(arr[m],arr[e]);}
        }
        if(arr[s] == 0){s++;}
        if(arr[m] == 1 || s == m){m++;}
        if(arr[e] == 2){e--;}
        if(m > e){
            if(arr[0] == 2){swap(arr[s],arr[e]);}
            break;
        }
    }
        
    
}
