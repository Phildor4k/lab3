#include <iostream>
using namespace  std;

//Problem 1
//int main(){
//    for( int i=1;i<11;i++){
//        cout<<i<<" ";
//    }
//}


//Problem 2
//int main(){
//    int sum=0;
//    for( int i=1;i<11;i++){
//        cout<<i<<" ";
//        sum+=i;
//    }
//    cout<<sum;
//}

//Problem 3
//int main(){
//    for (int i=1;i<=100;i++){
//        if (i%5==0){
//            continue;
//        }else{
//            cout<<i<<endl;
//        }
//    }
//}

//Problem 4
//int main(){
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//        if(i%10==0){
//            cout<<i<<endl;
//        }
//    }
//}

//Problem 5

//int main(){
//    int count = 0;
//    for(int i=65;i<=90;i++){
//        count++;
//        if(count%5==0){
//            cout<<(char)i<<endl;
//        }else{
//            cout<<(char)i<<" ";
//        }
//    }
//}

//Problem 6

//int main(){
//    int classes;
//    int credits;
//    double gpa;
//    double total_gpa=0;
//    cout<<"Enter the number of classes you have: \n>>>";
//    cin>>classes;
//    for(int i=1;i<=classes;i++){
//        cout<<"Enter the number of credits you have: \n>>>";
//        cin>>credits;
//        cout<<"Enter the gpa you have in the class: \n>>>";
//        cin>>gpa;
//        total_gpa+=(credits*gpa)/classes;
//    }
//    cout<<total_gpa;
//}

//Problem 7

//int main(){
//    int prime;
//    cin>>prime;
//    bool is_prime = true;
//    for(int i=2;i<= sqrt(prime);i++) {
//        if (prime % i == 0) {
//            is_prime = false;
//            break;
//        }
//    }
//    if (is_prime){
//        cout<<"This number is prime.";
//    }else{
//        cout<<"This number is not prime.";
//    }
//}

//Problem 8

//int main(){
//    int sum=0;
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//        cout<<i<<" * "<<i<<" = "<<i*i<<endl;
//        sum +=i*i;
//    }
//    cout<<"Sum of the squares is "<<sum;
//}

//Problem 9

//int main(){
//    int checker = 0;
//    int num;
//    int biggest_num=0;
//    while(checker==0){
//        cout<<"Enter the number(use 0 to quit):\n>>>";
//        cin>>num;
//        if(num==0){
//            checker=1;
//        }else{
//            if(num>biggest_num){
//                biggest_num=num;
//            }
//            continue;
//        }
//    }
//    cout<<"Biggest number is "<<biggest_num;
//
//}

//Problem 10

//int main(){
//    int checker = 0;
//    float num;
//    float negative = 0;
//    float positive = 0;
//    float sum=0;
//    while(checker==0){
//        cout<<"Enter the number(use 0 to quit):\n>>>";
//        cin>>num;
//        sum+=num;
//        if(num==0){
//            checker=1;
//        }else{
//            if(num>0){
//                positive ++;
//            }else if(num<0){
//                negative++;
//            }
//            continue;
//        }
//    }
//    cout<<"The number of positive numbers is: "<<positive<<endl;
//    cout<<"The number of negative numbers is: "<<negative<<endl;
//    cout<<"Average of the inputted numbers is: "<<sum/(positive+negative);
//}