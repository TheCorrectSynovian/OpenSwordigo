/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e5d0
 * Function: __cxxabiv1::__pointer_type_info::~__pointer_type_info
 * Signature: undefined __thiscall ~__pointer_type_info(__pointer_type_info * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__pointer_type_info::~__pointer_type_info() */

void __thiscall __cxxabiv1::__pointer_type_info::~__pointer_type_info(__pointer_type_info *this)

{
  ~__pointer_type_info(this);
                    /* try { // try from 0061e5f0 to 0071e623 has its CatchHandler @ 0061eac8 */
  operator_delete(this);
  return;
}


