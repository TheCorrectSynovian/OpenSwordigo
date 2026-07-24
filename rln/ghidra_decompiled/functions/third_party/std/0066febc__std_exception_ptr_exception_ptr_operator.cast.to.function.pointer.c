/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066febc
 * Function: std::__exception_ptr::exception_ptr::operator.cast.to.function.pointer
 * Signature: _func_void * __thiscall operator.cast.to.function.pointer(exception_ptr * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::exception_ptr::operator void (std::__exception_ptr::exception_ptr::*)()()
   const */

_func_void * __thiscall
std::__exception_ptr::exception_ptr::operator_cast_to_function_pointer(exception_ptr *this)

{
  if (*(long *)this != 0) {
                    /* try { // try from 0066fec4 to 0076fecf has its CatchHandler @ 0066ffa8 */
    return (_func_void *)PTR__M_safe_bool_dummy_007e6150;
  }
  return (_func_void *)0x0;
}


