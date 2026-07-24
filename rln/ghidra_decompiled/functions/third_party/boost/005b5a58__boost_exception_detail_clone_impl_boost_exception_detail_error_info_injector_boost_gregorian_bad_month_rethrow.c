/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b5a58
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow
 * Signature: undefined __thiscall rethrow(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
   >::rethrow() const */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::rethrow
          (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
           *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> *this_00;
  
  this_00 = (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> *
            )__cxa_allocate_exception(0x40);
  clone_impl(this_00,(clone_impl *)this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_007e4a78,PTR__clone_impl_007e6368);
}


