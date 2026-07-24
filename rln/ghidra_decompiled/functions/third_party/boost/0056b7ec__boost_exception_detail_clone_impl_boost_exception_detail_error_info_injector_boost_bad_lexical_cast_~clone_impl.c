/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b7ec
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
  *(undefined **)(this + -0x28) = PTR_vtable_007e57f0 + 0x10;
                    /* try { // try from 0056b810 to 0066b817 has its CatchHandler @ 0056bafc */
  if (*(long **)(this + -0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + -0x20) + 0x20))();
  }
  std::bad_cast::~bad_cast((bad_cast *)(this + -0x40));
                    /* try { // try from 0056b82c to 0066b837 has its CatchHandler @ 0056bb8c */
  operator_delete((bad_cast *)(this + -0x40));
  return;
}


