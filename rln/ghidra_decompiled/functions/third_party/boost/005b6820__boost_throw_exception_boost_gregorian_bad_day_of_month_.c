/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b6820
 * Function: boost::throw_exception<boost::gregorian::bad_day_of_month>
 * Signature: void __cdecl throw_exception<boost::gregorian::bad_day_of_month>(bad_day_of_month * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void 
   boost::throw_exception<boost::gregorian::bad_day_of_month>(boost::gregorian::bad_day_of_month
   const&) */

void boost::throw_exception<boost::gregorian::bad_day_of_month>(bad_day_of_month *param_1)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> *this
  ;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
  this = (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
          *)__cxa_allocate_exception(0x40);
  local_58 = PTR_DAT_007e5f80 + 0x10;
  FUN_0066a528(auStack_50,param_1 + 8);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
                    /* try { // try from 005b6868 to 006b68b7 has its CatchHandler @ 005b6acc */
  local_28 = 0xffffffff;
  local_58 = PTR_vtable_007e5ce0 + 0x10;
  local_48 = PTR_vtable_007e5ce0 + 0x38;
  exception_detail::
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::
  clone_impl(this,(error_info_injector *)&local_58);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_007e5f60,PTR__clone_impl_007e6f88);
}


