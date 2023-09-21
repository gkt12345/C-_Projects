#include<iostream>
#include<vector>
using namespace std;

// time complx is O(n);
// space complx is O(1);

void heapify(vector<int>&maxHeap, int index){
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;
    int size = maxHeap.size();
    // first check for left side
    if( left<size && maxHeap[largest] < maxHeap[left]){
        largest = left;
    }
    // check for right side
    if( right<size && maxHeap[largest] < maxHeap[right]){
        largest = right;
    }    
    // if index is not largest than swap
    if(largest != index){
        swap(maxHeap[largest], maxHeap[index]);
        heapify(maxHeap, largest);    
    }
    return;
}

int main()
{
    vector<int>maxHeap;
    int n, element;

    // size of Heap
    cin>>n; 
    for(int i=0; i<n; i++){
        cin>>element;
        maxHeap.push_back(element);
    }

    for(int i=n/2-1; i>=0; i--){
        heapify(maxHeap, i);
    } 

    for (int i=0; i < maxHeap.size(); i++)
    {
        cout<<maxHeap[i]<<" ";
    }
    

    return 0;
    
}