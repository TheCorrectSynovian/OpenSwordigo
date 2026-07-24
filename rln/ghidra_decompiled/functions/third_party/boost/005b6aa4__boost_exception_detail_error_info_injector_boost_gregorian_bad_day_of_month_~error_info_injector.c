/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b6aa4
 * Function: boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector
 * Signature: undefined __thiscall ~error_info_injector(error_info_injector<boost::gregorian::bad_day_of_month> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector()
    */

void __thiscall
boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::
~error_info_injector(error_info_injector<boost::gregorian::bad_day_of_month> *this)

{
  *(undefined **)(this + 0x10) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* catch() { ... } // from try @ 005b6868 with catch @ 005b6acc */
    (**(code **)(**(long **)(this + 0x18) + 0x20))();
  }
  FUN_0064a3f8(this);
  return;
}


