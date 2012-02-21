//-*-c++-*-
#ifndef TEST_LAMB_H
#define TEST_LAMB_H

class TestLamb
{
public:

TestLamb( double rho, double cp ) : 
  m_rho(rho), m_cp(cp)
  {
    m_cs = m_cp/sqrt(3.);
  
    m_mu     = m_cs*m_cs*m_rho;
    m_lambda = m_cp*m_cp*m_rho-2*m_mu;
  }

double m_rho, m_cp, m_cs, m_lambda, m_mu;

private:
TestLamb(const TestLamb&);
TestLamb& operator=(const TestLamb&);

};

#endif
