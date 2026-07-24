/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d444
 * Function: __cxxabiv1::__foreign_exception::~__foreign_exception
 * Signature: undefined __thiscall ~__foreign_exception(__foreign_exception * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__foreign_exception::~__foreign_exception() */

void __thiscall __cxxabiv1::__foreign_exception::~__foreign_exception(__foreign_exception *this)

{
  ~__foreign_exception(this);
                    /* try { // try from 0061d458 to 0071d463 has its CatchHandler @ 0061db70 */
  operator_delete(this);
  return;
}


