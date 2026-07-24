/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b6398
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow
 * Signature: undefined __thiscall rethrow(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
   >::rethrow() const */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::rethrow
          (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
           *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> *this_00;
  
                    /* try { // try from 005b63a0 to 006b63a3 has its CatchHandler @ 005b6b20 */
                    /* try { // try from 005b63a8 to 006b63af has its CatchHandler @ 005b6b1c */
  this_00 = (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> *)
            __cxa_allocate_exception(0x40);
                    /* try { // try from 005b63b0 to 006b641b has its CatchHandler @ 005b6b44 */
  clone_impl(this_00,(clone_impl *)this);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_007e7018,PTR__clone_impl_007e7718);
}


