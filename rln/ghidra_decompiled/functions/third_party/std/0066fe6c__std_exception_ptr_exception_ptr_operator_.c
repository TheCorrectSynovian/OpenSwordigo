/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fe6c
 * Function: std::__exception_ptr::exception_ptr::operator=
 * Signature: undefined __thiscall operator=(exception_ptr * this, exception_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::exception_ptr::TEMPNAMEPLACEHOLDERVALUE(std::__exception_ptr::exception_ptr
   const&) */

exception_ptr * __thiscall
std::__exception_ptr::exception_ptr::operator=(exception_ptr *this,exception_ptr *param_1)

{
  exception_ptr aeStack_8 [8];
  
  exception_ptr(aeStack_8,param_1);
  swap(aeStack_8,this);
                    /* try { // try from 0066fe94 to 0076fe9f has its CatchHandler @ 0066ffa4 */
  ~exception_ptr(aeStack_8);
  return this;
}


