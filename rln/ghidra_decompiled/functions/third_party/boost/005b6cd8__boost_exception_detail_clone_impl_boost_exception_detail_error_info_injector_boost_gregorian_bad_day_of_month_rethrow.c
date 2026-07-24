/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b6cd8
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::rethrow
 * Signature: undefined __thiscall rethrow(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
   >::rethrow() const */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::
rethrow(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
        *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
  *this_00;
  
                    /* try { // try from 005b6ce4 to 006b6ce7 has its CatchHandler @ 005b6d00 */
  this_00 = (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
             *)__cxa_allocate_exception(0x40);
  clone_impl(this_00,(clone_impl *)this);
                    /* catch() { ... } // from try @ 005b6ce4 with catch @ 005b6d00 */
                    /* catch() { ... } // from try @ 005b6c90 with catch @ 005b6d08 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_007e5f60,PTR__clone_impl_007e6f88);
}


