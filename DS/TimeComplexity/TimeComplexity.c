//***Here c is a constant
for (int i = 1; i <= c; i++) 
{
	a += 5;
}

//***incremented / decremented by a constant amount
for (int i = 1; i <= n; i += c) 
{

}

for (int i = n; i > 0; i -= c) 
{

}

//***divided / multiplied by a constant amount
for (int i = 1; i <=n; i += c) 
{
	for (int j = 1; j <=n; j += c) 
	{
		// some O(1) expressions
	}
}

for (int i = n; i > 0; i -= c) 
{
	for (int j = i+1; j <=n; j += c) 
	{
		// some O(1) expressions
	}
}

//***variables is reduced / increased exponentially by a constant amount
// Here c is a constant greater than 1  - logN - 1 c c2 c3
for (int i = 2; i <=n; i = pow(i, c)) 
{ 
	// some O(1) expressions
}
//Here fun is sqrt or cuberoot or any other constant root
for (int i = n; i > 1; i = fun(i)) 
{ 
	// some O(1) expressions
}

//***sum of time complexities of individual loops
for (int i = 1; i <=m; i += c) 
{  
	// some O(1) expressions
}
for (int i = 1; i <=n; i += c) 
{
	// some O(1) expressions
}
Time complexity of above code is O(m) + O(n) which is O(m+n)
	If m == n, the time complexity becomes O(2n) which is O(n).   
