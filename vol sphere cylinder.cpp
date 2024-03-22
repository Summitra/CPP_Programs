 #include<iostream>
 using namespace std;
 float vol(int r,int h)
{
     return(3.14*r*r*h);
 }
  float vol(float r1)
    {
        return((4*3.14*r1*r1*r1)/3);
    }
 
int main()
{
        int choice,r,h,a,ar;
        float r1;
        cout<<"1. Volume of Cylinder";
        cout<<"\n 2. Volume of Sphere";
        cout<<"\n 3. Exit";
        cout<<"\n Enter your choice:";
        cin>>choice;
        switch(choice)
        do
        {
        	case 1: cout<<"\n Enter radius and height:";
        	        cin>>r>>h;
        	        a = vol(r,h);
        	        cout<<"\n Volume of Cylinder = "<<a;
        	        break;
        	case 2: cout<<"\n Enter radius of sphere:";
        	        cin>>r1;
        	        ar = vol(r1);
        	        cout<<"\n Volume of Sphere = "<<ar;
        	        break;
            case 3: break;
    }
    while(choice!=3);
    return 0;
}