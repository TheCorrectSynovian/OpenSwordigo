/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b86c8
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone
 * Signature: undefined __thiscall clone(clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>
   >::clone() const */

clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> * __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone
          (clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *this)

{
  clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *this_00;
  
  this_00 = operator_new(0x40);
  clone_impl(this_00,(clone_impl *)this);
  return this_00 + 0x38;
}


