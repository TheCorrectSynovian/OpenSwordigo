/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b7020
 * Function: boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector
 * Signature: undefined __thiscall ~error_info_injector(error_info_injector<boost::gregorian::bad_day_of_month> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::~error_info_injector()
    */

void __thiscall
boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>::
~error_info_injector(error_info_injector<boost::gregorian::bad_day_of_month> *this)

{
                    /* catch() { ... } // from try @ 005b6f44 with catch @ 005b7028 */
  *(undefined **)this = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  FUN_0064a3f8(this + -0x10);
  operator_delete(this + -0x10);
  return;
}


