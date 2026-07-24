/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00345834
 * Function: boost::throw_exception<boost::bad_function_call>
 * Signature: void __cdecl throw_exception<boost::bad_function_call>(bad_function_call * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::throw_exception<boost::bad_function_call>(boost::bad_function_call const&) */

void boost::throw_exception<boost::bad_function_call>(bad_function_call *param_1)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> *this;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  this = (clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> *)
         __cxa_allocate_exception(0x40);
  local_58 = PTR_DAT_007e4aa8 + 0x10;
  FUN_0066a528(auStack_50,param_1 + 8);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0xffffffff;
  local_58 = PTR_vtable_007e52b0 + 0x10;
  local_48 = PTR_vtable_007e52b0 + 0x38;
  exception_detail::
  clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl
            (this,(error_info_injector *)&local_58);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_007e4800,PTR__clone_impl_007e7580);
}


