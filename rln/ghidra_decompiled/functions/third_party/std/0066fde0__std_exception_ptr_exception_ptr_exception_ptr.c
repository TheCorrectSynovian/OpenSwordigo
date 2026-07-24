/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fde0
 * Function: std::__exception_ptr::exception_ptr::exception_ptr
 * Signature: undefined __thiscall exception_ptr(exception_ptr * this, void * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::exception_ptr::exception_ptr(void*) */

void __thiscall
std::__exception_ptr::exception_ptr::exception_ptr(exception_ptr *this,void *param_1)

{
  *(void **)this = param_1;
  _M_addref(this);
  return;
}


