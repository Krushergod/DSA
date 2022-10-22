package com.saurav;

// FOR VALUES RANGING FROM 1 to N
public class median2Arrays {
    public static void main(String[] args) {
        int[] a = {2,2,4,4}, b={2,2,4,4};
        System.out.println(findMedianSortedArrays(a,b));
    }

    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] newArr = new int[nums1.length + nums2.length];

        System.arraycopy(nums1, 0, newArr, 0,  nums1.length);
        System.arraycopy(nums2, 0, newArr, nums1.length, nums2.length);

        bSort(newArr);

        int start=0,end= newArr.length-1;
        while(start<=end){
            if(newArr.length % 2 != 0 ){
                if(newArr[start]==newArr[end]){
                    return newArr[start];
                }
            }
            start++;
            end--;
        }
        return (double) (newArr[start]+newArr[end])/2;
    }
//    public static double findMedianSortedArrays(int[] nums1, int[] nums2) {
//
//        int c1 = nums1.length + nums2.length;
//        int[] newArr = new int[c1];
//
//        System.arraycopy(nums1, 0, newArr, 0,  nums1.length);
//        System.arraycopy(nums2, 0, newArr, nums1.length, nums2.length);
//
//        bSort(newArr);
//
//        if(newArr.length % 2 == 0){
//            double median = (double) ( newArr[(newArr.length-1)/2] + newArr[(newArr.length-1)/2 +1] ) / 2;
//            return median;
//        }else{
//            return newArr[(newArr.length-1)/2];
//        }
//
//    }
    public static void bSort(int[] newArr){
        for(int i=0; i<newArr.length;i++){

            for(int j=1; j< newArr.length-i;j++){
                if(newArr[j]<newArr[j-1]){
                    int temp=newArr[j-1];
                    newArr[j-1]=newArr[j];
                    newArr[j]=temp;
                }
            }
        }
    }

}
