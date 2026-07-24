/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fde8
 * Function: std::__exception_ptr::exception_ptr::exception_ptr
 * Signature: undefined __thiscall exception_ptr(exception_ptr * this, exception_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::exception_ptr::exception_ptr(std::__exception_ptr::exception_ptr const&) */

void __thiscall
std::__exception_ptr::exception_ptr::exception_ptr(exception_ptr *this,exception_ptr *param_1)

{
  *(undefined8 *)this = *(undefined8 *)param_1;
  _M_addref(this);
  return;
}


