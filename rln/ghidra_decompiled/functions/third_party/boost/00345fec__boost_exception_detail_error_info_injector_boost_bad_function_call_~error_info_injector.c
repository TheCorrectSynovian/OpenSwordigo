/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00345fec
 * Function: boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector
 * Signature: undefined __thiscall ~error_info_injector(error_info_injector<boost::bad_function_call> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector() */

void __thiscall
boost::exception_detail::error_info_injector<boost::bad_function_call>::~error_info_injector
          (error_info_injector<boost::bad_function_call> *this)

{
  *(undefined **)this = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  FUN_0064a024(this + -0x10);
  return;
}


