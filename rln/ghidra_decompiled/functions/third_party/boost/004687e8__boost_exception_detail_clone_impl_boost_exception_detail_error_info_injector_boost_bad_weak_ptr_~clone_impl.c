/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004687e8
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl
 * Signature: undefined __thiscall ~clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>
   >::~clone_impl() */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::~clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *this)

{
                    /* catch() { ... } // from try @ 00468378 with catch @ 004687f0
                       catch() { ... } // from try @ 00468464 with catch @ 004687f0 */
  *(undefined **)(this + -0x28) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + -0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + -0x20) + 0x20))();
  }
  std::exception::~exception((exception *)(this + -0x30));
  return;
}


