//Dynamic Memmory Allocation:
//    dynamically or certain  memory is pre allocated -memory
// memory is pre cnserve for the future use 
//
//    new and delete are -operators of the dynamic memory
//
//
//new syntax :
//int *p;
//p=new int;        -2byte  storage 
//
//p= new int[5];
//

//array is also dynamically allocated memory
//int a[100]       stack 
//
//#include<iostream>
//using namespace std;
//int main(){
//    int *p;
//    *p =500;
//    p= new  int[2];
//    cout<<"total memory aloocated \n"<<sizeof p<<endl;
//    cout<<"value in the address  \n "<<*p<<endl;
//    delete p;
//    cout<<"total memory allocated at the present \n "<<sizeof p<<endl;
//    cout<<"valye in the address \n "<<*p<<endl;
//}



//static memory allocation :
//        not the memory are conserve for the operaton as memory are free after the executuin of the program or the function 

//int a[5];
//a[0]={2};
//cout<<"array[0]"<<a[0]<<endl;
//delete []a;
//cout<<"array[0]"<<a[0]<<endl;}





//#include<iostream>
//using namespace std ;
//int *create_array (size_t size ,int int_value=0){
//    int *new_storage{NULL};
//    new_storage=new int[size];
//    for(size_t i{0};i<size;++i){
//        *(new_storage+i)=int_value;
//        
//    }
//    return new_storage;
//}
//
//void display(const int *const array ,size_t size){
//    for(size_t i{0};i<size ; i++){
//        cout<<array[i]<<""<<endl;
//    }
//}
//
//
//int main(){
//    int *my_array{NULL}
//    ;size_t size ;
//    int int_value{};
//    cout<<"\n how many integer would you like to allocate ?";
//    cin>>size;
//    cout<<"what value would you like them initialozed to ";
//    my_array=create_array( size , int_value);
//    display(my_array , size );
//    delete []my_array;
//    return 0;
//}