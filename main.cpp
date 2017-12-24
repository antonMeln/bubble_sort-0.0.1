#include <iostream>
#include <sstream>
using namespace std;

bool read (int & n , int *mas )
  {
    string str;
    getline(cin,str);
    istringstream stream(str);
    bool f =true;
      
     for (int i= 0; i<n;i++){
        if (!(stream >> mas[i])){
          f = false; 
          break;
          
        }
     }
    return f;
    
    
  }
  
  int main ()
  {
    int *mas = new int;
    int i,n,j;
    
    string str;
    getline(cin,str);
    istringstream stream(str);
     
     if (stream >> n) {
       if (read(n,mas)) {
          for (j = 0;j<n;j++){
            for (i = 1;i < n;i++){  
       
                  if (mas[i]<mas[i-1]) 
                    swap(mas[i-1],mas[i]);
 
            }
            
          }
         
         for (int i =0;i<n;i++)
            cout << mas[i] << " ";
       
        }
        else cout << " An error has occured while reading input data.";
     }
    return 0;
      
  }
