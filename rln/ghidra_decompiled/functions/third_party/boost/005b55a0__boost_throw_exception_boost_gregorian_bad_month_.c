/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b55a0
 * Function: boost::throw_exception<boost::gregorian::bad_month>
 * Signature: void __cdecl throw_exception<boost::gregorian::bad_month>(bad_month * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::throw_exception<boost::gregorian::bad_month>(boost::gregorian::bad_month const&) */

void boost::throw_exception<boost::gregorian::bad_month>(bad_month *param_1)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> *this;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b54b4 with catch @ 005b55b0
                        */
  this = (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>> *)
         __cxa_allocate_exception(0x40);
  local_58 = PTR_DAT_007e5f80 + 0x10;
  FUN_0066a528(auStack_50,param_1 + 8);
                    /* try { // try from 005b55e0 to 006b5607 has its CatchHandler @ 005b5624 */
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_28 = 0xffffffff;
  local_58 = PTR_vtable_007e61e0 + 0x10;
  local_48 = PTR_vtable_007e61e0 + 0x38;
                    /* try { // try from 005b5608 to 006b56bb has its CatchHandler @ 005b5484 */
  exception_detail::
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_month>>::clone_impl
            (this,(error_info_injector *)&local_58);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005b55e0 with catch @ 005b5624
                        */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_007e4a78,PTR__clone_impl_007e6368);
}


