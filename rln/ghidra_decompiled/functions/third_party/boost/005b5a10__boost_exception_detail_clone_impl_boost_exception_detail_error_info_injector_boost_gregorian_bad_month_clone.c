/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b5a10
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone
 * Signature: undefined __thiscall clone(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>
   >::clone() const */

clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> * __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone
          (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>
           *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> *this_00;
  
  this_00 = operator_new(0x40);
                    /* try { // try from 005b5a30 to 006b5a57 has its CatchHandler @ 005b5dbc */
  clone_impl(this_00,(clone_impl *)this);
  return this_00 + 0x38;
}


