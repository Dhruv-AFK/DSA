 #include<iostream>
 using namespace std;

 class hero{

    public:
    int health ;
    char level;
    

    hero(){

        cout<<"consrtuctor is made"<<endl;
    }

    private:
    


 };


 int main()
{

    hero dhruv;

    dhruv.health = 56;
    dhruv.level = 'a';



    cout<<"health is:"<<dhruv.health<<endl;
    cout<<"level is :"<<dhruv.level<<endl;

    

}
