#include <iostream>
using namespace std;

int main(){   
    int a,b;
    while(cin>>a>>b){//データセットを入力するループ  

        for(int j=0;j<a;j++){ //縦方向へのループ
            if(j%2==0){//上端と加担
                for (int i=0;i<b;i++){
                    if(i%2==0)cout <<"#";   
                    else cout <<".";           
                }   
                cout <<endl;
            }else{                  //上下以外
                for (int i=0;i<b;i++){
                    if(i%2==0) cout <<".";
                    else cout <<"#";   
                    
                }
                cout <<endl;
            }           
        }
        cout <<endl;
         if(a==0&&b==0){
                break;
            }    
            
    }
        

}



       
