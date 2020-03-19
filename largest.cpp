 #include<iostream>
using namespace std;
 int main() {
        int num, large = 0, rem;

        
        cout<<"Enter your input value:";
        cin>>num;

        
        while (num > 0) {
                rem = num % 10;

                if (rem > large) {
                        large = rem;
                }

                num = num / 10;
        }
        cout<<large;
        return 0;
        }
