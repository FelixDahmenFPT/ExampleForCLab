#include <stdio.h>
#include <stdlib.h>

int a;//BAD as it is a global Variable with not meaningful name

int counter; //this is a counter
             //better as we comment and meaningful name

int main(int argc, char** argv) {
    //code completion 
   // ctrl+space
    cou
    //Auto Format
    // ctrl+shift+F
    if (a == 5) {
        dosth()
    } 
    
    //Code Formating 
    //<right click on Project> -> properties -> formating
    //Tools -> Options -> Editor -> Formatting
    
    //Don't define Variable outside of used scope
    int i;
    for(i=0;i<5;i++){
        //DO STH
    }
    for(i=0;i<5;i++){
        //DO STH ELSE
    }
    
    //BETTER 
    for(int i=0;i<5;i++){
        //DO STH
    }
    for(int i=0;i<5;i++){
        //DO STH ELSE
    }
    
    //also possible 
    {
        int i;
        for(i=0;i<5;i++){
        //DO STH
        }
        printf("%d",i);
    }
    //do not try to fit statements in one line
    /* invalid */
    if (condition) foo (); else bar ();
    /* valid */
    if (condition) 
        foo (); 
    else 
        bar ();
    //indention
    statement_1 ();
    statement_2 ();
    {
            int var1 = 42;
            gboolean res = FALSE;

            res = statement_3 (var1);

            retval = res ? -1 : 1;
    }
    
    //WRONG
    if(4==3){
    if(5==6){

    }}else{

    }
    
    
    //good indention  
    //K&R
    if(4==3){
        if(5==6){

        }    
    }else{
        
    }
    //or
    //Allman
    if(4==3)
    {
        if(5==6)
        {

        }
    }
    else
    {
        
    }
    
    
    //use of brakets is better style in certain cases
    /* valid GNU style */
    if (condition){
        foo ();
        bar ();
    }else{
        baz ();
    }
    
    
        /* valid Linux kernel style */
    if (condition1 ||
        (condition2 && condition3) ||
        condition4 ||
        (condition5 && (condition6 || condition7))) {
            a_single_statement ();
    }
    
    //correct check for boolean values
    /* invalid */
    if (found == TRUE)
    do_foo ();
    
    /* valid */
    if (found)
    do_foo ();
    
    //C language uses the value 0 for many purposes. 
    //As a numeric value, the end of a string, a null pointer and the FALSE boolean
    /* invalid */
    if (!number)
    do_foo ();
    
    /* valid */
    if (number == 0)
    do_foo ();
    
    
    //https://developer.gnome.org/programming-guidelines/stable/c-coding-style.html.en
    //http://homepages.inf.ed.ac.uk/dts/pm/Papers/nasa-c-style.pdf
    
    
    return (EXIT_SUCCESS);
}

