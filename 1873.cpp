#include <iostream>

using namespace std;

int main ()
{
	int a;
	string max,max1,lala;
	cin >> a;
	
	while (a--){
		cin >>max1 >>max;
		if (max == "tesoura"){
            if (max1 == "papel")
                lala = "sheldon";                 
            if (max1 == "spock")
                lala = "rajesh";               
            if (max1 == "lagarto")
                lala = "sheldon";               
            if (max1 == "pedra")
                lala = "rajesh";               
            if (max1 == "tesoura")
                lala = "empate";     
        }
   		if (max == "papel"){  
            if (max1 == "pedra")
                lala = "sheldon";             
            if(max1 == "tesoura")
                lala = "rajesh";            
            if (max1 == "lagarto")
                lala = "rajesh"; 
            if (max1 == "spock")
                lala = "sheldon";
            if (max1 == "papel")
                lala = "empate";              
        }
	    if (max== "pedra"){
			if (max1 == "papel")
            	lala = "rajesh";
            
        	if (max1 == "lagarto")
            	lala = "sheldon";
			if (max1 == "spock")
            	lala = "rajesh"; 
        	if (max1 == "tesoura")
           		lala = "sheldon";        
        	if (max1 == "pedra")
            	lala = "empate";
               
        }
		if (max == "lagarto"){
			if (max1 == "pedra")
            	lala = "rajesh";            
        	if (max1 == "spock")
            	lala = "sheldon";           
        	if (max1 == "tesoura")
           		lala = "rajesh";          
       		if (max1 == "papel")
          		lala = "sheldon";     
        	if (max1 == "lagarto") 
            	lala = "empate";          
        }
   		if (max == "spock"){
			if (max1 == "lagarto")
            	lala = "rajesh";          
        	if (max1 == "tesoura")
           		lala = "sheldon";
            if (max1 == "papel")
            	lala = "rajesh";
        	if (max1 == "pedra")
	           	lala = "sheldon";	            
       		if (max1 == "spock")
            	lala = "empate";       
            }  
   		cout << lala <<"\n";
	}
}
