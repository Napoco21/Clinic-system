#include <iostream>
#include "Patient.h"
#include "List.h"
#include <string>


using namespace std;

int main()
{   
    List l1;
  
	int flag=1;
	//while works if flag=1;
	int flag1=5;
	int switch_value;
	do
    {
      //main menu
    	cout<<"Press 1 to insert a new patient"<<endl<<"Press 2 to remove a patient"<<endl<<"Press 3 to search a patient"<<endl<<"Press 4 to modify"<<endl<<"Press 5 to print all patients"<<endl;
    	cin>>switch_value;
    	switch(switch_value)
    	{
    		case 1:
    		{
          //insert patient
    		cout<<"Enter carecard number please"<<endl;
    		string receive_carecardnumber;
    		cin>>receive_carecardnumber;
    		Patient p1(receive_carecardnumber);
            
            cout<<"Enter name please"<<endl;
            string receive_name;
            cin>>receive_name;
            p1.setName(receive_name);    		
    		
            cout<<"Enter address please"<<endl;
            string receive_address;
            cin>>receive_address;
            p1.setAddress(receive_address);   

            cout<<"Enter phone number please"<<endl;
            string receive_phone;
            cin>>receive_phone;
            p1.setPhone(receive_phone);   

            cout<<"Enter email please"<<endl;
            string receive_email;
            cin>>receive_email;
            p1.setEmail(receive_email);               

    		
            l1.insert(p1);

    		break;
}

          case 2:
   {       
          //remove patient
          cout<<"lets remove a patient"<<endl;
          cout<<"enter carecard number of the patient u wanna delete"<<endl;
          string carecardno;
          cin>>carecardno;
          Patient temporary_patient(carecardno);
          l1.remove(temporary_patient);
            


          break;
    	}
    
         case 3:
        { 
          //search patient
          cout<<"lets search for a patient"<<endl;
          cout<<"enter carecard number of the patient u wanna search"<<endl;
          string carecardno;
          cin>>carecardno;
          Patient temporary_patient(carecardno);
          Patient *store1;
          store1=l1.search(temporary_patient);
          store1->printPatient();
          break;
}


 case 4:
         
       { 
          //modify patient details
          int get;	
          cout<<"lets modify patient details"<<endl;
          cout<<"enter carecard number of the patient u wanna modify"<<endl;
          string carecardno;
          cin>>carecardno;
          Patient temporary_patient(carecardno);
          Patient *rp=l1.search(temporary_patient);
         
            while(flag1==5)
            {
          	cout<<"Press 1 to modify name, 2 to modify address, 3 to modify phone no, 4 to modify email "<<endl;
          	cin>>get;
          	switch(get)
          	{

          		case 1:
          		{   cout<<"enter name plz"<<endl;
          			string namem;
          			cin>>namem;
          			rp->setName(namem);

          		}break;
          		case 2:
          		   {cout<<"enter addressplz"<<endl;
          			string addressm;
          			cin>>addressm;
          			rp->setAddress(addressm);

          		}break;
          		
          		case 3:
          		   {cout<<"enter phone no plz"<<endl;
          			string phoneno;
          			cin>>phoneno;
          			rp->setPhone(phoneno);

          		}break;
          		case 4:
          		   {cout<<"enter email plz"<<endl;
          			string emailm;
          			cin>>emailm;
          			rp->setEmail(emailm);

          		}break;	

          		
          		default:

          		cout<<"deafult case"<<endl;
                break;
          	}
          
            
            	cout<<"If u still wanna continue press 5 else press 10";
            	cin>>flag1;
          
          }
      }break;
           

          case 5:
 {        cout<<"lets print all patients"<<endl;
          l1.printList();
          break;

}

{
          default :
          cout<<"not in range";  
          break;
}
    }

    cout<<"If you still wanna continue press 1 and if you dont want to do anymore press 2."<<endl;
    cin>>flag;
    
    

}   while(flag==1);

}
