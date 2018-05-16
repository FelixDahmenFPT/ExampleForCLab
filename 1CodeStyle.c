

// name global and comment
/*invalid*/
int a;//BAD as it is a global Variable with not meaningful name
/* valid */
int counter; //this is a counter
             //better as we comment and meaningful name

/*Auto Format in Netbeans*/
// don't trust the Autoformat 100%
    // ctrl+shift+F
    if (a == 5) {
        dosth()
    } 
    
//Code Formating 
//<right click on Project> -> properties -> formating
//Tools -> Options -> Editor -> Formatting

/* Code Completion */
//type first letters 
// press ctrl+space


int main(int argc, char** argv) {
    
    //define Variable as close as possible to their use
    //don't define them outside of their used scope
    /*invalid*/
    int i;
    for(i=0;i<5;i++){
        //DO STH
    }
    for(i=0;i<5;i++){
        //DO STH ELSE
    }
    
    /* valid */
    for(int i=0;i<5;i++){
        //DO STH
    }
    for(int i=0;i<5;i++){
        //DO STH ELSE
    }
    
    /* also valid */ 
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
    //use indention to clarify your program
    /* valid */
    statement_1 ();
    statement_2 ();
    {
            int var1 = 42;
            gboolean res = FALSE;

            res = statement_3 (var1);

            retval = res ? -1 : 1;
    }
   
   /* invalid */
    if(4==3){
    if(5==6){
        //Do STH
    }}else{
        //Do STH ELSE
    }
    // indention styles
    /* valid */  
    //K&R
    if(4==3){
        if(5==6){

        }    
    }else{
        
    }

    /* valid */
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
    /* invalid */
    if(condition){
        dosth();
    }else{
        dosthelse();
    }

    /* invalid */
    {
        dosth();
    }

    /* valid */
    if (condition){
        foo ();
        bar ();
    }else{
        baz ();
    }
    
    /* valid */
    if (condition1 ||
        (condition2 && condition3) ||
        condition4 ||
        (condition5 && (condition6 || condition7))) {
            //DO STH
    }else{
        //DO STH ELSE
    }
    
    //correct check for boolean values
    /* invalid */
    bool found = TRUE;
    if (found == TRUE)
    do_foo ();
    
    /* valid */
    if (found)
    do_foo ();
    
    //C language uses the value 0 for many purposes. 
    //As a numeric value, the end of a string, a null pointer and the FALSE boolean
    /* invalid */
    int number=0;

    if (!number)
    do_foo ();
    
    /* valid */
    if (number == 0)
    do_foo ();
    
    /* Recommended sources */
    // short summary
    //https://developer.gnome.org/programming-guidelines/stable/c-coding-style.html.en
    
    // deeper knowledge
    //http://homepages.inf.ed.ac.uk/dts/pm/Papers/nasa-c-style.pdf
    

