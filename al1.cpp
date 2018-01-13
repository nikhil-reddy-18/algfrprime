#include<iostream>
#include<stdlib.h>
#include <ctime>   //to calc. execution time
#include<math.h> // to include sqrt()

using namespace std;

bool primetest(int n,int upto)
{     
      int j;
      if(n == 2 || n == 3) return true;

       for(j=2;j<=upto;j++)
        {
          if(n%j == 0)  return 0;
            
           else { j++; }
        }
   
       if(j > upto ) return 1;
     
 } 
 
       
int main()
{     
    int x=0;
    
   while(x<100)  
   {
        int n,upto;
   
        for(n=2;n<100000;n++)
        {
     
             cout<<n<<",";
       
           for(int i=1;i<4;i++)
          {      
                switch(i)
              { 
                     case 1 : upto = n-1;
                                 break;
                  
                    case 2 : upto = int(n/2);
                                break;
                    
                    case 3 : upto = int(sqrt(n));
                                  break;                 
              }
              
              float start_s = clock();
              
              primetest(n,upto);
              
                float stop_s = clock();
            if(i == 1 || i == 2)
            {
   cout  << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << ",";    // will be getting time in milli sec
            }
            else
            {
             cout  << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000;
            }
          } 
          cout<<endl;   
       }
      x++;
   }  
  return 0;
  
}
    
  
   
