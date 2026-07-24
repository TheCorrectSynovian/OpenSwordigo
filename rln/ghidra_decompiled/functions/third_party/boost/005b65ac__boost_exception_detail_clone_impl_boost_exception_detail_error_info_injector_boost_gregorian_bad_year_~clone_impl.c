/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b65ac
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl
 * Signature: undefined __thiscall ~clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
   >::~clone_impl() */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::~clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
           *this)

{
                    /* try { // try from 005b65b0 to 006b66db has its CatchHandler @ 005b62b4 */
  *(undefined **)(this + -0x28) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + -0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + -0x20) + 0x20))();
  }
  FUN_0064a3f8(this + -0x38);
  return;
}


