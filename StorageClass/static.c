static int i = 10;

int next()
{
	return ( i+=1);
}

int last()
{
	return ( i-=1);
}

int new (int i)
{
	static int j = 5;
	return (i = j += i);
}
