/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00345eb0
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow
 * Signature: undefined __thiscall rethrow(clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>
   >::rethrow() const */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::rethrow
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> *this_00;
  
  this_00 = (clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> *)
            __cxa_allocate_exception(0x40);
  clone_impl(this_00,(clone_impl *)(this + -0x38));
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_007e4800,PTR__clone_impl_007e7580);
}


