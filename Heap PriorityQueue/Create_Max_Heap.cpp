#include<iostream>
#include<vector>
using namespace std;

// time complx is O(nlong(n));
// space complx is O(1);

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

    for(int i=0; i<maxHeap.size(); i++){
        cout<<maxHeap[i]<<" ";
    } 

    return 0;
}