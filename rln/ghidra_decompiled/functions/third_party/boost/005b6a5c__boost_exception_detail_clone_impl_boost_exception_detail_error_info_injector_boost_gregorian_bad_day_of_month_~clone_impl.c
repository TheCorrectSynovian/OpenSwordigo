/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b6a5c
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::~clone_impl
 * Signature: undefined __thiscall ~clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
   >::~clone_impl() */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::
~clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
            *this)

{
  *(undefined **)(this + 0x10) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 0x18) != (long *)0x0) {
                    /* try { // try from 005b6a88 to 006b6b17 has its CatchHandler @ 005b6bec */
    (**(code **)(**(long **)(this + 0x18) + 0x20))();
  }
  FUN_0064a3f8(this);
  return;
}


