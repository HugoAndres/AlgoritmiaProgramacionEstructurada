//tipos funciones
typedef int entero;

typedef struct enteros
{
	entero e;
	entero n;
	entero d;
}mitipo;

typedef mitipo fraccion;

//funciones
entero leeentero(){
	entero a;
	scanf("%d",&a);
	return a;
}

void impentero(entero a){
	printf("%d",a);
}

mitipo leemitipo(){
	mitipo a;
	a.e=leeentero();
	a.n=leeentero();
	a.d=leeentero();
	return a;
}

void impmitipo(mitipo a){
	impentero(a.e);
	impentero(a.n);
	impentero(a.d);
}

fraccion leefracc(){
	return leemitipo();
}

void impfracc(fraccion f){
	printf("El resultado es: ");
	impentero(f.e);
	printf("[");
	impentero(f.n);
	printf("/");
	impentero(f.d);
	printf("]");
}

fraccion reduce (fraccion x){
	entero m;
	x.e=x.e+(x.n/x.d);
	x.n=x.n%x.d;
	m=mcd(x.n,x.d);
	x.n=x.n/m; 
	x.d= x.d/m;
	return x;
}

fraccion impropia(fraccion f){
	f.n=f.n+(f.e*f.d);
	f.e=0;
	return f;
}

fraccion multiplicacionfraccion(fraccion f1, fraccion f2){
	fraccion r;
	r.e=0;
	r.n=((f1.e*f1.d)+f1.n)*((f2.e*f2.d)+f2.n);	
	r.d=f1.d*f2.d;
	return reduce(r);
}

fraccion divisionfraccion(fraccion f1, fraccion f2){
	fraccion r;
	r.e=0;
	r.n=((f2.e*f2.d)+f2.n)*f1.d;
	r.d=((f1.e*f1.d)+f1.n)*f2.d;
	return reduce(r);
}

fraccion sumafraccion(fraccion f1, fraccion f2){
	fraccion r;
	entero m;
	r.e=f1.e + f2.e;
	m=mcm(f1.d,f2.d);
	r.n=(f1.n*(m/f1.d)) + (f2.n*(m/f2.d));
	r.d=m;
	return reduce(r);
}

fraccion restafraccion(fraccion f1, fraccion f2){
	fraccion r;
	entero m;
	r.e=f2.e - f1.e;
	m=mcm(f1.d,f2.d);
	r.n=(f2.n*(m/f2.d)) - (f1.n*(m/f1.d));
	r.d=m;
	return reduce(r);
}


