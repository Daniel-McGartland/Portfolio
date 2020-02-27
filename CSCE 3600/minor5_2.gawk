#Author:	Daniel McGartland (danielmcgartland@my.unt.edu)
#Date:		11/27/2019
#Description:	grade calculator

#!/bin/gawk -f
{
	if(NR<= 2){
		
	}
	
	else{
		#for checking if all grade are there and adding up the sum
		count = 0;
		sum = 0;
		if($3 != ""){
			count += 1;
			sum += $3;
		}
		if($4 != ""){
			count += 1;
			sum += $4;
		}
		if($5 != ""){
			count += 1;
			sum += $5;
		}

		#printing
		print $1, "\t", $2, "\t", $3, "\t", $4, "\t", $5, "  =>";
	
		if(count == 3){
			avg = sum/count;
		
			if(avg > 89){
			print "A";}
			if((avg > 79)&&(avg < 90)){
			print "B";}
			if((avg > 69)&&(avg < 80)){
			print "C";}
			if((avg > 59)&&(avg < 70)){
			print "D";}
			if(avg < 60){
			print "F";}
		}
	
		if(count == 2){
			avg = sum/3;

        	        if(avg > 89){
        	        print "A (missing scores)";}
        	        if((avg > 79)&&(avg < 90)){
        	        print "B (missing scores)";}
        	        if((avg > 69)&&(avg < 80)){
        	        print "C (missing scores)";}
        	        if((avg > 59)&&(avg < 70)){
        	        print "D (missing scores)";}
        	        if(avg < 60){
        	        print "F (missing scores)";}
		}

		if(count < 2){
			print "F (missing scores)";
		}
	}
}
