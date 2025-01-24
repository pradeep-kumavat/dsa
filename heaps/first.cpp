#include<iostream>
#include<queue>
using namespace std;

class heap{
    public:
    int arr[100];
    int size=0;

    void insert(int x){
        size++;
        int index=size;
        arr[index]=x;
        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void deleteFromHeap(){
        if(size==0){
            cout<<"Heap is empty"<<endl;
            cout<<"Nothing to delete"<<endl;
            return;
        }

        arr[1]=arr[size];
        size--;

        int i=1;
        while(i<size){
            int leftChildIndex = 2*i;
            int rightChildIndex = 2*i+1;
            
            if(leftChildIndex<size && arr[i]<arr[leftChildIndex]){
                swap(arr[i],arr[leftChildIndex]);
                i = leftChildIndex;
            }
            else if(rightChildIndex<size && arr[i]<arr[rightChildIndex]){
                swap(arr[i],arr[rightChildIndex]);
                i=rightChildIndex;
            }
            else{
                return;
            }
        }
    }

    void heapify(int arr[],int n,int i){
        int largest = i;
        int left = 2*i;
        int right = 2*i+1;

        if(left<=n && arr[left]>arr[largest]){
            largest = left;
        }
        if(right<=n && arr[right]>arr[largest]){
            largest = right;
        }

        if(largest!=i){
            swap(arr[i],arr[largest]);
            heapify(arr,n,largest);
        }
    }

    void heapSort(int arr[],int n){
        int size = n;
        while(size>1){
            swap(arr[1],arr[size]);
            size--;
            heapify(arr,size,1);
        }
    }
};


int main() {
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    cout<<"Heap se delete ho rha hai"<<endl;
    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    cout<<"max heap bana rhe hai"<<endl;
    for(int i=n/2;i>0;i--){
        h.heapify(arr,n,i);
    }
    cout<<"Heap print ho rha hai"<<endl;
    for(int i=1;i<=n;i++){ 
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Heap sort hoke print ho rha hai sorted array"<<endl;
    h.heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }

    //max heap hai ye 
    cout<<"using priority queue"<<endl;
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout<<"element at top is "<<pq.top()<<endl;
    pq.pop();
    cout<<"element at top is "<<pq.top()<<endl;

    //min heap hai ye
    priority_queue<int,vector<int>,greater<int>> minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(5);
    minheap.push(3);
    cout<<"element at top is "<<minheap.top()<<endl;
    minheap.pop();
    cout<<"element at top is "<<minheap.top()<<endl;




   

    return 0;
}