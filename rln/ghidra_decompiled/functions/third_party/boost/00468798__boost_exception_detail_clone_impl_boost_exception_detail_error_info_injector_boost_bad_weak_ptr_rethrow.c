/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00468798
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow
 * Signature: undefined __thiscall rethrow(clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>
   >::rethrow() const */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::rethrow
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *this)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *this_00;
  
                    /* try { // try from 004687a4 to 005687cb has its CatchHandler @ 004687d0 */
  this_00 = (clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *)
            __cxa_allocate_exception(0x38);
  clone_impl(this_00,(clone_impl *)(this + -0x30));
                    /* try { // try from 004687cc to 0056889b has its CatchHandler @ 004681f0 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 004687a4 with catch @ 004687d0 */
  __cxa_throw(this_00,PTR_typeinfo_007e68c0,PTR__clone_impl_007e7658);
}


