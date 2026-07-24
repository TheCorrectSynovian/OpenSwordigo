/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066feec
 * Function: std::__exception_ptr::operator==
 * Signature: undefined __cdecl operator==(exception_ptr * param_1, exception_ptr * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::TEMPNAMEPLACEHOLDERVALUE(std::__exception_ptr::exception_ptr const&,
   std::__exception_ptr::exception_ptr const&) */

bool std::__exception_ptr::operator==(exception_ptr *param_1,exception_ptr *param_2)

{
  return *(long *)param_1 == *(long *)param_2;
}


