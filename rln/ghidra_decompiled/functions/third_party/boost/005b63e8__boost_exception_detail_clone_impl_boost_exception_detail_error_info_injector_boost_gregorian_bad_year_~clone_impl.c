/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b63e8
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
  *(undefined **)this = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
                    /* try { // try from 005b641c to 006b6503 has its CatchHandler @ 005b62b4 */
  FUN_0064a3f8(this + -0x10);
  return;
}


