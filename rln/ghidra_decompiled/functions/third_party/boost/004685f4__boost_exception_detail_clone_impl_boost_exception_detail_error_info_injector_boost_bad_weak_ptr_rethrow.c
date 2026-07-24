/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004685f4
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow
 * Signature: undefined __thiscall rethrow(clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>
   >::rethrow() const */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *this_00;
  
                    /* catch() { ... } // from try @ 004685c8 with catch @ 004685f4 */
                    /* catch() { ... } // from try @ 004683f0 with catch @ 004685f8 */
  this_00 = (clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *)
            __cxa_allocate_exception(0x38);
  clone_impl(this_00,(clone_impl *)this);
                    /* try { // try from 00468620 to 00568647 has its CatchHandler @ 00468694 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_007e68c0,PTR__clone_impl_007e7658);
}


