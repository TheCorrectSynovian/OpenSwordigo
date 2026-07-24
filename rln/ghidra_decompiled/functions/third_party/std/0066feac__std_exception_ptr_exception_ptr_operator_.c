/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066feac
 * Function: std::__exception_ptr::exception_ptr::operator!
 * Signature: undefined __thiscall operator!(exception_ptr * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::exception_ptr::TEMPNAMEPLACEHOLDERVALUE() const */

bool __thiscall std::__exception_ptr::exception_ptr::operator!(exception_ptr *this)

{
  return *(long *)this == 0;
}


