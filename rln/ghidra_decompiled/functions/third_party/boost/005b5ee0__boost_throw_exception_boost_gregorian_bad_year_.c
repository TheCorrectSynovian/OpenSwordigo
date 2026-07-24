/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b5ee0
 * Function: boost::throw_exception<boost::gregorian::bad_year>
 * Signature: void __cdecl throw_exception<boost::gregorian::bad_year>(bad_year * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::throw_exception<boost::gregorian::bad_year>(boost::gregorian::bad_year const&) */

void boost::throw_exception<boost::gregorian::bad_year>(bad_year *param_1)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> *this;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  
                    /* try { // try from 005b5ee8 to 006b5f0f has its CatchHandler @ 005b60a0 */
  this = (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> *)
         __cxa_allocate_exception(0x40);
  local_58 = PTR_DAT_007e5f80 + 0x10;
  FUN_0066a528(auStack_50,param_1 + 8);
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
                    /* try { // try from 005b5f30 to 006b5f57 has its CatchHandler @ 005b6090 */
  local_28 = 0xffffffff;
  local_58 = PTR_vtable_007e67c8 + 0x10;
  local_48 = PTR_vtable_007e67c8 + 0x38;
  exception_detail::
  clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl
            (this,(error_info_injector *)&local_58);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,PTR_typeinfo_007e7018,PTR__clone_impl_007e7718);
}


