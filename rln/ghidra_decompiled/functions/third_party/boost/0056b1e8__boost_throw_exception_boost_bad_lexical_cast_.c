/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b1e8
 * Function: boost::throw_exception<boost::bad_lexical_cast>
 * Signature: void __cdecl throw_exception<boost::bad_lexical_cast>(bad_lexical_cast * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* void boost::throw_exception<boost::bad_lexical_cast>(boost::bad_lexical_cast const&) */

void boost::throw_exception<boost::bad_lexical_cast>(bad_lexical_cast *param_1)

{
  clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> *this;
  undefined *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  this = (clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> *)
         __cxa_allocate_exception(0x48);
                    /* try { // try from 0056b20c to 0066b233 has its CatchHandler @ 0056b308 */
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  local_68 = *(undefined8 *)(param_1 + 8);
  local_70 = PTR_vtable_007e4950 + 0x10;
  local_58 = PTR_vtable_007e4950 + 0x38;
  local_48 = 0;
  uStack_40 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffff;
                    /* try { // try from 0056b238 to 0066b23b has its CatchHandler @ 0056b330 */
  exception_detail::
  clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl
            (this,(error_info_injector *)&local_70);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0056b25c to 0066b283 has its CatchHandler @ 0056b300 */
  __cxa_throw(this,PTR_typeinfo_007e5c30,PTR__clone_impl_007e4ad8);
}


