// Task # 8: In the following program, explain why the value "6" is printed twice in a row:
#include<iostream>
using namespace std;
int main()
{
      int i = 3;
      i++;
	  // value was 3 then by post increament it increased by 1 i.e. 3+1=4
      cout << i<<endl;    
	    // "4" value was printed
        ++i;
		//value of i was 4 but it is increased by 1 i.e 4+1=5                    
        cout<<i <<endl;   
		// "5" value of i was printed
        cout<<++i<<endl;  
		// "6" value of i was first incresed then it was printed i.e 5+1=6
        cout<<i++<<endl;
		// "6" value of i was first printed i.e 6 and then it was increased by 1 and stored in memory i.e 7
        cout<<i;    
		// "7" stored value of i was printed  
        return 0; 
 } 


