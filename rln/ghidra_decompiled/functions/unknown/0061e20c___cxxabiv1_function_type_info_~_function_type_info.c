/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061e20c
 * Function: __cxxabiv1::__function_type_info::~__function_type_info
 * Signature: undefined __thiscall ~__function_type_info(__function_type_info * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* __cxxabiv1::__function_type_info::~__function_type_info() */

void __thiscall __cxxabiv1::__function_type_info::~__function_type_info(__function_type_info *this)

{
                    /* catch() { ... } // from try @ 0061dfb8 with catch @ 0061e210
                       catch() { ... } // from try @ 0061e0d4 with catch @ 0061e210 */
  *(undefined **)this = PTR_vtable_007e7e88 + 0x10;
  FUN_0061e970();
  return;
}


