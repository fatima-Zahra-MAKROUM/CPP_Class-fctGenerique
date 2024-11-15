#pragma once
#include <cmath>
#include <string>
#include < iostream >
using namespace std;

//classe generique

template <class B,class T, class A>// on doit respercter l'odre

class Point3D
{
private :
	B x;
	T y;
	A z;
public:
	Point3D(B ,T,A);
	T distance(const Point3D <B,T,A>&des)const;
	void afficher()const;
	void translate(T dx);
	~Point3D();

};

template<class B, class T, class A>
inline Point3D<B,T,A>::Point3D(B x, T y, A z): x(x),y(y),z(z)
{

}

template<class B, class T, class A>
inline T Point3D<B, T, A>::distance(const Point3D<B,T,A>& des) const
{
	//remarque on a ecrir des->x .. mais n'a pas donner une erreur , parce que le x .. est declrer T don peut etre ce T valeur ou pointeur ....
	return sqrt(pow(this->x-des.x,2)+ pow(this->y-des.y,2)+ pow(this->z-des.z, 2));
}

template<class B, class T, class A>
inline void Point3D<B, T, A>::afficher() const
{
	std::cout << "(x,y,z) : (" << this->x << "," << this->y << "," << this->z << ")" << std::endl;
}

template<class B, class T, class A>
inline void Point3D<B, T, A>::translate(T dx)
{
	this->x += dx;
	this->y += dx;
	this->z += dx;

}

template<class B, class T, class A>
inline Point3D<B, T, A>::~Point3D()
{
}
