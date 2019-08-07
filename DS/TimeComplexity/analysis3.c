int fun1(int n) 
{ 
	    if (n <= 1) return n; 
			    return 2*fun1(n-1); 
} 


int fun2(int n) 
{ 
	    if (n <= 1) return n; 
			    return fun2(n-1) + fun2(n-1); 
} 

