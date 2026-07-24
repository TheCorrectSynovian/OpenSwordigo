/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b6350
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone
 * Signature: undefined __thiscall clone(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
   >::clone() const */

clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> * __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone
          (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
           *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> *this_00;
  
  this_00 = operator_new(0x40);
  clone_impl(this_00,(clone_impl *)this);
  return this_00 + 0x38;
}


