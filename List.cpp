#include<iostream>
#include<string>
#include "List.h"
#include "Patient.h"


	List::List()               // Current element count in element array	

		{
    		elementCount=0;
    		capacity=0;
		}

	int List::getElementCount() const
		{
    		return elementCount;
		}

	// Description: Insert an element.
	// Precondition: newElement must not already be in data collection.
	// Postcondition: newElement inserted and elementCount has been incremented.
	bool List::insert(const Patient& newElement)
    {
		 {   
    
        	bool condition =elementCount<MAX_ELEMENTS;



          		if(condition&&(elementCount==0))
                		{
                    		elements[0]=newElement;
                    		elementCount++;
                    		return true;

                		}



            		else
            		{
               			for(int pos=elementCount-1;pos>=0;pos--)
                           {
                           	if(elements[pos].getCareCard()!=newElement.getCareCard())
                    	   	{

                    	   elements[elementCount]=newElement;
                    	   elementCount++;
                    	   return true;
                    	   	}
                            	  
            		}
            		}
            	 
            	}
            }

                	

							



	




// Description: Remove an element.
	// Postcondition: toBeRemoved is removed and elementCount has been decremented.
	bool List::remove( const Patient& toBeRemoved ){
        int i,pos,j;
        pos=0;
        bool success=false;
        



        for( i=0;i<elementCount;i++)
        {

        if(elements[i].getCareCard()==toBeRemoved.getCareCard())

                {
                    success=true;
                    pos=i;
                    


                }
        }
        
        if(success)
        {
        	
        if(pos==elementCount-1)
     	{              
        	elementCount--;
        	return success;
     	}
     
     
         for(j=pos;j<elementCount-1;j++)
     
        {

          elements[j]=elements[j+1];
         

         


        }
        elementCount--;
        
	}
    return success;
}
	

    void List:: removeAll()
	
	{

    elementCount=0;
    
	}
// Description: Search for target element.
	//              Returns a pointer to the element if found,
	//              otherwise, returns NULL.
	Patient* List::search(const Patient& target)
	{

		for(int i=0;i<elementCount;i++)
    	 {
        	if(elements[i].getCareCard()==target.getCareCard())
        		{
            		return &elements[i];
        		}

		}
        return NULL;

	}
// Description: Prints all elements stored in List.
void List::printList()
	{
    
       Patient temp;
	for(int i=0;i<elementCount-1;i++)
    {
         int min=i;

     for(int j=i+1;j<elementCount;j++)
    {
       
       if(elements[min]>elements[j])
      { 
        min=j;
        

      }

      temp=elements[i];
      elements[i]=elements[min];
      elements[min]=temp;

    }
     


    }
    for(int j=0;j<elementCount;j++)
    {

     
     
     elements[j].printPatient();


    }
    }

	





