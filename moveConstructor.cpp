class Elemento
{
	int dato1;
	int dato2;
	public:
		Elemento(Elemento&& otro);	
}

Elemento::Elemento(Elemento&& otro)
	: dato1(otro.dato1)
	, dato2(otro.dato2)
{
	otro.dato1 = 0;
	otro.dato2 = 0;
}
