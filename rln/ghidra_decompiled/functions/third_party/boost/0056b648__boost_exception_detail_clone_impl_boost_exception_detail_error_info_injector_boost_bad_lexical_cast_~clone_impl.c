/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b648
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl
 * Signature: undefined __thiscall ~clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>
   >::~clone_impl() */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> *this)

{
                    /* try { // try from 0056b664 to 0066b673 has its CatchHandler @ 0056be38 */
  *(undefined **)this = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x20))();
  }
  std::bad_cast::~bad_cast((bad_cast *)(this + -0x18));
  operator_delete((bad_cast *)(this + -0x18));
  return;
}


