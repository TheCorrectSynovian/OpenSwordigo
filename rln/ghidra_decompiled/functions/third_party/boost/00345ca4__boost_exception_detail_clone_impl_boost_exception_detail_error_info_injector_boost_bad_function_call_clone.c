/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00345ca4
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone
 * Signature: undefined __thiscall clone(clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>
   >::clone() const */

clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> * __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> *this_00;
  
  this_00 = operator_new(0x40);
  clone_impl(this_00,(clone_impl *)this);
  return this_00 + 0x38;
}


