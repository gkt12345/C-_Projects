#include<iostream>
#include<vector>
using namespace std;

void insertHeap(vector<int>&maxHeap){
       int index = maxHeap.size() - 1; 
       int parent;
       while (index > 0)
       {
            parent = (index-1)/2;
            // parent is samll
            if(maxHeap[parent] < maxHeap[index]){
                swap(maxHeap[parent], maxHeap[index]);
                index = parent;
            }
            // parent is big
            else
                break;
       }
       return; 
}

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

void deleteHeap(vector<int>&maxHeap){
    // replace first element by last element
    maxHeap[0] = maxHeap[maxHeap.size()-1];
    // delete last element
    maxHeap.pop_back();
    // set that first element on it's correct position
    heapify(maxHeap, 0);

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
        insertHeap(maxHeap);
    }

    deleteHeap(maxHeap);
    deleteHeap(maxHeap);

    for(int i=0; i<maxHeap.size(); i++){
        cout<<maxHeap[i]<<" ";
    } 

    return 0;
    
}