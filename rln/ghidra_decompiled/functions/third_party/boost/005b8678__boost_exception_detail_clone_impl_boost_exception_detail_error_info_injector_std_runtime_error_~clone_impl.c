/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b8678
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl
 * Signature: undefined __thiscall ~clone_impl(clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>
   >::~clone_impl() */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::~clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *this)

{
  *(undefined **)(this + 0x10) = PTR_vtable_007e57f0 + 0x10;
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 0x20))();
  }
  FUN_0064a024(this);
  operator_delete(this);
  return;
}


