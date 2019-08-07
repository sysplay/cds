int fun(int n) 
{ 
	int count = 0; 
	for (int i = n; i > 0; i /= 2) 
		for (int j = 0; j < i; j++) 
			count += 1; 
	return count; 
} 

