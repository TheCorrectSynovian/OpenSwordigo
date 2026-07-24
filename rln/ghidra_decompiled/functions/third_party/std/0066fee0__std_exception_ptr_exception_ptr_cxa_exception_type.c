/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fee0
 * Function: std::__exception_ptr::exception_ptr::__cxa_exception_type
 * Signature: undefined __thiscall __cxa_exception_type(exception_ptr * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::__exception_ptr::exception_ptr::__cxa_exception_type() const */

undefined8 __thiscall std::__exception_ptr::exception_ptr::__cxa_exception_type(exception_ptr *this)

{
                    /* try { // try from 0066fee4 to 0076ff03 has its CatchHandler @ 0066ffa4 */
  return *(undefined8 *)(*(long *)this + -0x70);
}


