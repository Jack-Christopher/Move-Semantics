class Recurso
{
	public:
	
	void *data;
	Recurso& operator=(Recurso&& otro)	
	{
		if (this != &otro)
		{
			delete this->data;
			this->data = otro.data;
			otro.data = nullptr;
		}
		return *this;
	}
	
};
