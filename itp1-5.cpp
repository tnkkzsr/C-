#include <iostream>
using namespace std;




int main(){

    int n;
    cin >>n;
    
    for (int i=i;i<=n;i++){
            int x=i;
            if(x%3==0){
                cout <<i<<" ";
                continue;
            }else {
                while(x){
                    if(x%10==3){
                        cout <<i<<" ";
                        break;
                    }
                    x /=10;
                }
            }
        }

    return 0;

}