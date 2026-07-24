/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066ff00
 * Function: std::__exception_ptr::operator!=
 * Signature: undefined __cdecl operator!=(exception_ptr * param_1, exception_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::TEMPNAMEPLACEHOLDERVALUE(std::__exception_ptr::exception_ptr const&,
   std::__exception_ptr::exception_ptr const&) */

byte std::__exception_ptr::operator!=(exception_ptr *param_1,exception_ptr *param_2)

{
  byte bVar1;
  
  bVar1 = operator==(param_1,param_2);
  return bVar1 ^ 1;
}


