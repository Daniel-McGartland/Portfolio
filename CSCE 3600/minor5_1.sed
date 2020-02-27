#Author:	Daniel McGartland (daniel.mcgartland@my.unt.edu)
#Date		11/27/2019
#Description:	a sed command to change comments from c++ to c style and capitalize them

s'//(.*?)'/*\U\1*/'
