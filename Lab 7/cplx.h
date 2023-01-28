//  ENSF 337- Fall 2022 lab 7, Exercise A
//  cplx.h 

#ifndef cplx_h
#define cplx_h

class Cplx {
public:
    
    Cplx(): realM(-99), imagM(-99) {}
    
    Cplx (double r, double i);
    
    double getRealPart () const;
    
    double getImaginaryPart () const;
    
    void setRealPart(double arg);

    void setImaginaryPart(double arg);
    
    Cplx add(const Cplx& other)const;
    
    Cplx subtract(const Cplx* other)const;

private:
    double realM;
    double imagM;  
};

#endif /* cplx_h */
