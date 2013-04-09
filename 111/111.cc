#include<iostream>
#include<string>

using namespace std; 

void work()
{
    int n ; 
    cin >> n ; 
    int pos[n+1] ;
    for(int i = 1; i <= n ; i ++)
    {
        cin >> pos[i] ; 
    }
    
    int N ; 
    while(cin >> N)
    {
        int nums[n+1] ; 
        int length[n+1] ; 
        int max = 1; 
        nums[N] = 1; 
        length[1] = -1 ; 

        for(int  i = 2; i <= n ; i ++)
        {
            cin >> N ; 
            nums[N] = i ; 
            length[i] = -1 ; 
        }

        length[1] = 1; 
        for(int i = 1; i < n ; i ++)
        {
            for(int j = i + 1 ; j <= n ; j++)
            {
                if(pos[nums[j]] > pos[nums[i]] && length[j] < (length[i] + 1) )
                {
                    length[j] = length[i] + 1; 
                    if(length[j] > max) 
                        max = length[j]; 
                }
                else if(length[j] == -1)
                        length[j] = 1; 
            }
        }

        cout << max << endl; 
    }
}


int main()
{
    work();
}
