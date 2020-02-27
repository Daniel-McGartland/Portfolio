#Author:	Daniel McGartland (daniel.mcgartland@my,unt.edu)
#Date:		11/27/2019
#Description:	check to see if side lengths could make a triangle

#!/bin/gawk -f
{
	if(NR <= 1) {
		
	}
	else if(($1+$2 <= $3) || ($2+$3 <= $1) || ($1+$3 <= $2)){
		print "NO";
	}
	else if(($1<=0)||($2<=0)||($3<=0)){
		print "NO";
	}
	else{
		print "YES";
	}
}
