#include <iostream>
using namespace std;
int main()
{
  cout<<"s1102021"<<endl;
  cout<<"戴新祐"<<endl;
  //-----------------------
  cout<<"demo"<<endl;
  return 1;
   int a, b;
    //inputANS();
    guess();
    cout << endl;
    cin >> a;
    cout << "A" << endl;
    cin >> b;
    cout << "B" << endl;
    while (a != 4)
    {     
            for (i = 0; i < 1; i++)
            {
                guess();

            }
        
            break;
    }
      
    
}
int i;
void number(int n, int arr[])
{
    arr[0] = n / 1000;
    arr[1] = (n / 100) % 10;
    arr[2] = (n / 10) % 10;
    arr[3] = n % 10;
}

bool zero(int n)
{
    int arr[4];
    number(n,arr);
    if ((arr[0] == arr[1] || arr[0] == arr[2] || arr[0] == arr[3] || arr[1] == arr[2] || arr[1] == arr[3] || arr[2] == arr[3]))
        return true;
    else
        return false;
}

bool repeatzero()
{
    int b[4];
    if (b[0] * b[1] * b[2] * b[3] != 0)
    {
        // cout << b[0] << b[1] << b[2] << b[3];
        return true;
    }

    if (b[0] == b[1] || b[0] == b[2] || b[0] == b[3] || b[1] == b[2] || b[1] == b[3] || b[2] == b[3])
    {
        return false;
    }
    if (b[0] * b[1] * b[2] * b[3] == 0)
    {
        return false;
    }
}

void inputANS()
{
    int arr[4];
    int n;
    cin >> n;  //輸入答案
    number(n, arr);
    cout << arr[0] << arr[1] << arr[2] << arr[3] << endl;
}


void guess()
{
   srand(time(0));
   int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
   int b[4] = {  };
  
   for (i = 0 ; i < 4; i++)
   {
       int k;
       k = rand();
       int h;
       h = k % 9 + 1;
       b[i] = a[h];
   }
  if (repeatzero())
   {
       cout << b[0] << b[1] << b[2] << b[3];
   }
      
  
}
