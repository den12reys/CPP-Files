
#include<iostream>
using namespace std; 

double e(int x, int n) 
{ 
    static double p = 1, f = 1; 
    double r; 
  
    if (n ==1) 
        return 1; 
  
    
    r = e(x, n - 1); 
  
    
    p = p * x; 
  
    
    f = f * n; 
  
    return (r + p / f);
} 
  

int main() 
{ 
    int x , n = 15;
    cin>>x; 
    cout<<endl<<e(x, n); 
  
    return 0; 
} 