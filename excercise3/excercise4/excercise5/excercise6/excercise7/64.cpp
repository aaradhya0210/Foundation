//#include <iostream> 
//'using namespace std ;
//int main () 
//{
  //  int num = 20;
  //  int exp = num % 2;
  //  switch (exp) {
  //      case 1 :
    //    cout << "Odd"<<endl;
    //    case 0:
    //    cout << "Even"<<endl;
   //     break;
   //     default:
    //    cout << "Invalid" <<endl;
   //     break;
  //      return 0;
  //  }
//}

#include <iostream> 
using namespace std ;
int main () 
{
    
    int exp = num % 2 == 0;
    switch (exp) {
        case 1 :
        cout << "Odd"<<endl;
        case 0:
        cout << "Even"<<endl;
        break;
        default:
        cout << "Invalid" <<endl;
        break;
        return 0;
    }
}