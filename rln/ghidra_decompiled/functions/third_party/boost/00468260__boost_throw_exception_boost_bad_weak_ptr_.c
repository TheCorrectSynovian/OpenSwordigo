/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00468260
 * Function: boost::throw_exception<boost::bad_weak_ptr>
 * Signature: void __cdecl throw_exception<boost::bad_weak_ptr>(bad_weak_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::throw_exception<boost::bad_weak_ptr>(boost::bad_weak_ptr const&) */

void boost::throw_exception<boost::bad_weak_ptr>(bad_weak_ptr *param_1)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *this;
  undefined *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  
  this = (clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *)
         __cxa_allocate_exception(0x38);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_60 = PTR_vtable_007e62a0 + 0x10;
  puStack_58 = PTR_vtable_007e62a0 + 0x38;
                    /* try { // try from 004682b0 to 005682bb has its CatchHandler @ 004686e8 */
  exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::
  clone_impl(this,(error_info_injector *)&local_60);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_007e68c0,PTR__clone_impl_007e7658);
}


