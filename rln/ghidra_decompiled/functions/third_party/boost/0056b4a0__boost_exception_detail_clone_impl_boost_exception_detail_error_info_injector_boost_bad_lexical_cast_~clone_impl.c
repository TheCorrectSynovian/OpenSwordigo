/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b4a0
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl
 * Signature: undefined __thiscall ~clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>
   >::~clone_impl() */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::~clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> *this)

{
                    /* try { // try from 0056b4c0 to 0066b4e3 has its CatchHandler @ 0056b0d0 */
  *(undefined **)(this + 0x18) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 0x20))();
  }
  std::bad_cast::~bad_cast((bad_cast *)this);
                    /* catch() { ... } // from try @ 0056b3b0 with catch @ 0056b4e0 */
                    /* catch() { ... } // from try @ 0056b4f8 with catch @ 0056b4e4 */
  operator_delete(this);
  return;
}


