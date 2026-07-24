/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061c984
 * Function: std::bad_cast::~bad_cast
 * Signature: undefined __thiscall ~bad_cast(bad_cast * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
                    /* catch() { ... } // from try @ 0061c974 with catch @ 0061c988 */
  *(undefined **)this = PTR_vtable_007e6e70 + 0x10;
  exception::~exception((exception *)this);
  return;
}


