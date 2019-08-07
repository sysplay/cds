void fun(int n, int arr[])
{
	int i = 0, j = 0;
	for(; i < n; ++i)
		while(j < n && arr[i] < arr[j])
			j++;
}


void fun(int n, int arr[]) 
{ 
	int i = 0, j = 0; 
	for(; i < n; ++i) 
	{ 
		j = 0; 
		while(j < n && arr[i] < arr[j]) 
			j++; 
	} 
} 

