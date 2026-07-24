/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b59c0
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl
 * Signature: undefined __thiscall ~clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
   >::~clone_impl() */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::~clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
           *this)

{
                    /* try { // try from 005b59cc to 006b5a2f has its CatchHandler @ 005b589c */
  *(undefined **)(this + 0x10) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x20))();
  }
  FUN_0064a3f8(this);
                    /* catch() { ... } // from try @ 005b59a4 with catch @ 005b59fc */
  operator_delete(this);
  return;
}


