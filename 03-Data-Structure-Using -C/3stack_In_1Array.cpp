#include<iostream> 

using namespace std; 
  
class Stacks 
{ 
    int *arr;   
    int *top;   
    int *next;  
    
    int n, k; 
    int free; 
	 
	public: 
    
    Stacks(int k, int n); 
    bool isFull()  
	 {  return (free == -1);  } 
	 
    void push(int item, int sn);  
    int pop(int sn);
	 
    bool isEmpty(int sn) 
	 {  return (top[sn] == -1); } 
}; 
  

Stacks::Stacks(int k1, int n1) 
{ 
    // Initialize n and k, and allocate memory for all arrays 
    k = k1, n = n1; 
    arr = new int[n]; 
    top = new int[k]; 
    next = new int[n]; 
  
    // Initialize all stacks as empty 
    for (int i = 0; i < k; i++) 
        top[i] = -1; 
  
    // Initialize all spaces as free 
    free = 0; 
    for (int i=0; i<n-1; i++) 
        next[i] = i+1; 
    next[n-1] = -1; 
} 
   
void Stacks::push(int item, int sn) 
{ 
    
    if (isFull()) 
    { 
        cout << "\nStack Overflow\n"; 
        return; 
    } 
  
    int i = free;     
   
    free = next[i]; 
   
    next[i] = top[sn]; 
    top[sn] = i; 
  
   
    arr[i] = item; 
} 
  
int Stacks::pop(int sn) 
{ 
  
    if (isEmpty(sn)) 
    { 
         cout << "\nStack Underflow\n"; 
         return INT_MAX; 
    } 
  
   
    int i = top[sn]; 
  
    top[sn] = next[i];  
  
    next[i] = free; 
    free = i; 
  
    return arr[i]; 
} 
  
int main() 
{ 
    int k = 3, n = 10; 
    Stacks obj(k, n); 
  
    // Let us put some items in stack number 2 
    obj.push(15, 2); 
    obj.push(45, 2); 
  
    // Let us put some items in stack number 1 
	obj.push(17, 1); 
    obj.push(49, 1); 
    obj.push(39, 1); 
  
    // Let us put some items in stack number 0 
    obj.push(11, 0); 
    obj.push(9, 0); 
    obj.push(7, 0); 
  
    cout << "Popped element from stack 2 is " << obj.pop(2) << endl; 
    cout << "Popped element from stack 1 is " << obj.pop(1) << endl; 
    cout << "Popped element from stack 0 is " << obj.pop(0) << endl; 
    
     
    return 0; 
} 
