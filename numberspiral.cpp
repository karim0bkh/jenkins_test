#include<iostream>

using namespace std ; 

int main(int argc, char const *argv[])
{
    int t ; 
    cin >> t ; 
    while (t -- )
    {
         long long x , y ; 
         cin >> y >> x ; 
         long long z = max(x ,y);
         long long z2 = (z-1)*(z-1) , ans ; 
         if (z%2)
         {
            if (y == z)
            {
                ans = z2 + x;
            }else
            {
                ans = z2 + 2 * z-y ; 
            }
         }else
         {
            if (x == z)
            {
                ans = z2 + y ; 
            }else
            {
                ans = z2+2 *z-x;
            }
            
            
         }
         
         

        cout<<ans<<"\n";
    }
    
    
    return 0;
}
