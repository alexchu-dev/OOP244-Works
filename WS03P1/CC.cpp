/*
*****************************************************************************
                    OOP244NAA - WS03 Part 1 @ Sep 28 2022
Full Name  : Alex Chu
Student ID#: 153954219
Email      : kchu30@myseneca.ca

I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assdignments.
*****************************************************************************
*/
#include <iostream>
#include "CC.h"
#include "Utils.h"
using namespace std;
namespace sdds {
   bool CC::validate(const char* name, unsigned long long cardNo, short cvv, short expMon, short expYear)const {

   }
   void CC::prnNumber() const {

   }
   void CC::set() {
      m_name = nullptr;
      m_cvv = m_expMon = m_expYear = m_ccNum = 0;
   }
   void  CC::cleanUp() {
      delete[] m_name;
      m_name = nullptr;
   }
   bool  CC::isEmpty() const {
      return m_name == nullptr;
   }
   void  CC::set(const char* cc_name, unsigned long long cc_no, short cvv, short expMon, short expYear) {

   }
   bool  CC::read() {

   }
   void  CC::display(int row = 0) const {

   }
}