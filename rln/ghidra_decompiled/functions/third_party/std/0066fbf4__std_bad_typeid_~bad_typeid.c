/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fbf4
 * Function: std::bad_typeid::~bad_typeid
 * Signature: undefined __thiscall ~bad_typeid(bad_typeid * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
  *(undefined **)this = PTR_vtable_007e55a0 + 0x10;
  exception::~exception((exception *)this);
  return;
}


