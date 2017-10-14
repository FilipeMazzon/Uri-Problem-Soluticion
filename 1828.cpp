#include <iostream>
#include <iomanip>
#include <cmath>
    
using namespace std;
    
int main () 
{
	int number;
	unsigned int lol;
	
	cin >> lol;
	string lala;
	int n=1;
 
	for(int b =1; b <= lol;b++){
	    string max;
	    string max1;
	      
	    cin >> max >> max1;
	      
	    if (max == "tesoura"){
			if (max1 == "papel")
	            lala = "Bazinga!";   
	        if (max1 == "Spock")
	            lala = "Raj trapaceou!";
	        if (max1 == "lagarto")
	        	lala = "Bazinga!";
	        if (max1 == "pedra")
	            lala = "Raj trapaceou!";
	        if (max1 == "tesoura")
	            lala = "De novo!";   
	    }
	    if (max == "papel"){  
			if (max1 == "pedra")
		        lala = "Bazinga!";     
		    if(max1 == "tesoura")
		    	lala = "Raj trapaceou!";	        
		    if (max1 == "lagarto")
		        lala = "Raj trapaceou!";	           
		    if (max1 == "Spock")
		        lala = "Bazinga!";	           
		    if (max1 == "papel")
		        lala = "De novo!";      
	 	}
	    if (max== "pedra"){
			if (max1 == "papel")
	            lala = "Raj trapaceou!";       
	        if (max1 == "lagarto")
	            lala = "Bazinga!";           
	        if (max1 == "Spock")
	            lala = "Raj trapaceou!";
	        if (max1 == "tesoura")
	            lala = "Bazinga!";           
	        if (max1 == "pedra")
	        	lala = "De novo!";     
	    }
	    if (max == "lagarto"){
			if (max1 == "pedra")
	            lala = "Raj trapaceou!";        
	         if (max1 == "Spock")
	        	lala = "Bazinga!";
	         if (max1 == "tesoura")
	            lala = "Raj trapaceou!";
	        if (max1 == "papel")
	            lala = "Bazinga!";
	        if (max1 == "lagarto") 
	      		lala = "De novo!";    
	        }
	    if (max == "Spock"){
			if (max1 == "lagarto")
	            lala = "Raj trapaceou!";        
	        if (max1 == "tesoura")
	            lala = "Bazinga!";     
	        if (max1 == "papel")
	            lala = "Raj trapaceou!";           
	        if (max1 == "pedra")
	            lala = "Bazinga!";           
	        if (max1 == "Spock")
	            lala = "De novo!";  
	    }	              
	    cout << "Caso #" << n << ": " << lala << "\n";
	    n++;
    }
}
