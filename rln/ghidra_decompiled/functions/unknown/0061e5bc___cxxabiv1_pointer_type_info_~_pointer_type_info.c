/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e5bc
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
                    /* try { // try from 0061e5bc to 0071e5c7 has its CatchHandler @ 0061ea54 */
                    /* try { // try from 0061e5c8 to 0071e5db has its CatchHandler @ 0061e9fc */
  *(undefined **)this = PTR_vtable_007e7720 + 0x10;
  __pbase_type_info::~__pbase_type_info((__pbase_type_info *)this);
  return;
}


