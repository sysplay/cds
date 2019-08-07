double foo (int n) 
{ 
	int i; 
	double sum; 
	if (n = = 0) return 1.0; 
	else
	{ 
		sum = 0.0; 
		for (i = 0; i < n; i++) 
			sum += foo (i); 
		return sum; 
	} 
} 

