/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fbb0
 * Function: std::bad_alloc::~bad_alloc
 * Signature: undefined __thiscall ~bad_alloc(bad_alloc * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  *(undefined **)this = PTR_vtable_007e6088 + 0x10;
  exception::~exception((exception *)this);
  return;
}


