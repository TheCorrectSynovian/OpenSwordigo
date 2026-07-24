/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b6c90
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone
 * Signature: undefined __thiscall clone(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
   >::clone() const */

clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> *
__thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone
          (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
           *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
  *this_00;
  
                    /* try { // try from 005b6c90 to 006b6c93 has its CatchHandler @ 005b6d08 */
  this_00 = operator_new(0x40);
  clone_impl(this_00,(clone_impl *)this);
  return this_00 + 0x38;
}


