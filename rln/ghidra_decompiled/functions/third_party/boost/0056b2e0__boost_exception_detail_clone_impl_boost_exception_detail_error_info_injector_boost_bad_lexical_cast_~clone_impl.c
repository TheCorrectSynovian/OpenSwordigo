/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b2e0
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
                    /* catch() { ... } // from try @ 0056b25c with catch @ 0056b300 */
  *(undefined **)(this + 0x18) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 0x20) != (long *)0x0) {
                    /* catch() { ... } // from try @ 0056b20c with catch @ 0056b308 */
                    /* catch() { ... } // from try @ 0056b1c4 with catch @ 0056b310 */
    (**(code **)(**(long **)(this + 0x20) + 0x20))();
  }
                    /* catch() { ... } // from try @ 0056b17c with catch @ 0056b320 */
  std::bad_cast::~bad_cast((bad_cast *)this);
  return;
}


