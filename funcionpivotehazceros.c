// GAUS JORDAN

void pivote(fraccion g[][11], int n, int r){

	fraccion p=g[r][r];
	int i;
	for( i=r; i<=n; i++);
	g[r][i] divfracc (g[r][i],p);
}

void hazceros(fraccion g[][11], int n, int c)
{
	fraccuion z = g[c+1][c];
	int i;
	for(i=c; i<=n;i++)
		g[c+1][i] = g[c+1][i] - (z*g[c][i]);
}
