/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b91e0
 * Function: boost::throw_exception<std::runtime_error>
 * Signature: void __cdecl throw_exception<std::runtime_error>(runtime_error * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::throw_exception<std::runtime_error>(std::runtime_error const&) */

void boost::throw_exception<std::runtime_error>(runtime_error *param_1)

{
  clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *this;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  this = (clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *)
         __cxa_allocate_exception(0x40);
  local_58 = PTR_DAT_007e4aa8 + 0x10;
  FUN_0066a528(auStack_50,param_1 + 8);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0xffffffff;
  local_58 = PTR_vtable_007e6a50 + 0x10;
                    /* catch() { ... } // from try @ 005b92ac with catch @ 005b9240 */
  local_48 = PTR_vtable_007e6a50 + 0x38;
  exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::
  clone_impl(this,(error_info_injector *)&local_58);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_007e6848,PTR__clone_impl_007e5f68);
}


