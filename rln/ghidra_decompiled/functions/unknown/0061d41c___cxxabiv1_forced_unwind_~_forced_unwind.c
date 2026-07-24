/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d41c
 * Function: __cxxabiv1::__forced_unwind::~__forced_unwind
 * Signature: undefined __thiscall ~__forced_unwind(__forced_unwind * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__forced_unwind::~__forced_unwind() */

void __thiscall __cxxabiv1::__forced_unwind::~__forced_unwind(__forced_unwind *this)

{
  ~__forced_unwind(this);
  operator_delete(this);
  return;
}


