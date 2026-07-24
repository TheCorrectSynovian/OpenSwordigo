/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00671edc
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
  ~bad_array_new_length(this);
  operator_delete(this);
  return;
}


