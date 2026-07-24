/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d3a4
 * Function: std::bad_exception::~bad_exception
 * Signature: undefined __thiscall ~bad_exception(bad_exception * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::bad_exception::~bad_exception() */

void __thiscall std::bad_exception::~bad_exception(bad_exception *this)

{
  *(undefined **)this = PTR_vtable_007e6760 + 0x10;
                    /* try { // try from 0061d3b4 to 0071d3c7 has its CatchHandler @ 0061d87c */
  exception::~exception((exception *)this);
  return;
}


