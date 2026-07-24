/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671ec8
 * Function: std::bad_array_new_length::~bad_array_new_length
 * Signature: undefined __thiscall ~bad_array_new_length(bad_array_new_length * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
  *(undefined **)this = PTR_vtable_007e5fd0 + 0x10;
  bad_alloc::~bad_alloc((bad_alloc *)this);
  return;
}


