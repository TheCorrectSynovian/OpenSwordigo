/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b88c4
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow
 * Signature: undefined __thiscall rethrow(clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>
   >::rethrow() const */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::rethrow
          (clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *this)

{
  clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *this_00;
  
                    /* try { // try from 005b88d0 to 006b88d7 has its CatchHandler @ 005b8ae8 */
                    /* try { // try from 005b88d8 to 006b88e3 has its CatchHandler @ 005b8a78 */
  this_00 = (clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *)
            __cxa_allocate_exception(0x40);
                    /* try { // try from 005b88e4 to 006b8b07 has its CatchHandler @ 005b861c */
  clone_impl(this_00,(clone_impl *)(this + -0x38));
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this_00,PTR_typeinfo_007e6848,PTR__clone_impl_007e5f68);
}


