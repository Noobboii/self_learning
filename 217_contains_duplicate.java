class Solution {
    public boolean containsDuplicate(int[] arr) {
        int i;
        Arrays.sort(arr);
        for(i=0;i<arr.length-1;i++)
        {
            if(arr[i]==arr[i+1])
            return true;
        }
        return false;
    }
}