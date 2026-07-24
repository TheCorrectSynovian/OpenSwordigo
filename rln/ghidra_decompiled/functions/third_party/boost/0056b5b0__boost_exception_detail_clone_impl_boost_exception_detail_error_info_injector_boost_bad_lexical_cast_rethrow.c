/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b5b0
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow
 * Signature: undefined __thiscall rethrow(clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>
   >::rethrow() const */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::rethrow
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> *this_00;
  
  this_00 = (clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> *)
            __cxa_allocate_exception(0x48);
                    /* try { // try from 0056b5cc to 0066b5cf has its CatchHandler @ 0056be20 */
                    /* try { // try from 0056b5d0 to 0066b5df has its CatchHandler @ 0056b51c */
  clone_impl(this_00,(clone_impl *)this);
                    /* try { // try from 0056b5e0 to 0066b5f3 has its CatchHandler @ 0056be10 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_007e5c30,PTR__clone_impl_007e4ad8);
}


