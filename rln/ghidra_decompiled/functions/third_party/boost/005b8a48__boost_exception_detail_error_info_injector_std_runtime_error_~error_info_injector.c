/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b8a48
 * Function: boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector
 * Signature: undefined __thiscall ~error_info_injector(error_info_injector<std::runtime_error> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector() */

void __thiscall
boost::exception_detail::error_info_injector<std::runtime_error>::~error_info_injector
          (error_info_injector<std::runtime_error> *this)

{
  *(undefined **)this = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* catch() { ... } // from try @ 005b88d8 with catch @ 005b8a78 */
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  FUN_0064a024(this + -0x10);
  operator_delete(this + -0x10);
  return;
}


