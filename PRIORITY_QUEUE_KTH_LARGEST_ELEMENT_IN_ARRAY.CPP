https://leetcode.com/problems/kth-largest-element-in-an-array/description/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //USING MAX HEAP
        // priority_queue<int>max_heap;
        // for(int i=0;i<nums.size();i++){
        //     max_heap.push(nums[i]);
        // }
        // for(int i=0;i<k-1;i++){
        //     max_heap.pop();
        // }
        // return max_heap.top();
        //-------------------------------------------
        //USING MIN HEAP
        priority_queue<int,vector<int>,greater<int>>min_heap;
        for(int num:nums){
            min_heap.push(num);
            if(min_heap.size()>k){
                min_heap.pop();
            }
        }
        return min_heap.top();
    }
};
/*
We can use a heap data structure to efficiently find the kth largest element in the array. There are two types of heaps we can use for this problem: a min heap and a max heap.
Min Heap:
We can use a min heap to keep track of the k largest elements seen so far. We iterate over the array, and for each element, we insert it into the heap. If the size of the heap becomes larger than k, we remove the minimum element from the heap. At the end, the top element of the heap will be the kth largest element in the array.
Max Heap:
We can also use a max heap to keep track of the k largest elements seen so far. We initialize the heap with all the elements in the array. We then pop the top element from the heap k-1 times to get the kth largest element in the array.
*/
