/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fe58
 * Function: std::__exception_ptr::exception_ptr::swap
 * Signature: undefined __thiscall swap(exception_ptr * this, exception_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::exception_ptr::swap(std::__exception_ptr::exception_ptr&) */

void __thiscall
std::__exception_ptr::exception_ptr::swap(exception_ptr *this,exception_ptr *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)this;
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = uVar1;
  return;
}


