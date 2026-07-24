/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b7f10
 * Function: boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>
 * Signature: void __cdecl throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>(error_info_injector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>
   >(boost::exception_detail::error_info_injector<std::runtime_error> const&) */

void boost::throw_exception<boost::exception_detail::error_info_injector<std::runtime_error>>
               (error_info_injector *param_1)

{
  clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *this;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined *local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  this = (clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *)
         __cxa_allocate_exception(0x40);
                    /* try { // try from 005b7f38 to 006b7f3b has its CatchHandler @ 005b80ac */
                    /* try { // try from 005b7f3c to 006b7f63 has its CatchHandler @ 005b7ec0 */
  local_68 = PTR_DAT_007e4aa8 + 0x10;
  FUN_0066a528(auStack_60,param_1 + 8);
  plStack_50 = *(long **)(param_1 + 0x18);
  local_58 = PTR_vtable_007e57f0 + 0x10;
                    /* try { // try from 005b7f64 to 006b7f6b has its CatchHandler @ 005b809c */
  if (plStack_50 != (long *)0x0) {
                    /* try { // try from 005b7f70 to 006b7f77 has its CatchHandler @ 005b8098 */
    (**(code **)(*plStack_50 + 0x18))();
  }
                    /* try { // try from 005b7f78 to 006b7fe3 has its CatchHandler @ 005b80c0 */
  local_38 = *(undefined4 *)(param_1 + 0x30);
  uStack_40 = *(undefined8 *)(param_1 + 0x28);
  local_48 = *(undefined8 *)(param_1 + 0x20);
  local_68 = PTR_vtable_007e6a50 + 0x10;
  local_58 = PTR_vtable_007e6a50 + 0x38;
  exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::
  clone_impl(this,(error_info_injector *)&local_68);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_007e6848,PTR__clone_impl_007e5f68);
}


