/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b7098
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl
 * Signature: undefined __thiscall clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> * this, clone_impl * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
   >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
   > const&) */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::
clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
           *this,clone_impl *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 005b6e78 with catch @ 005b7098 */
                    /* catch() { ... } // from try @ 005b6e88 with catch @ 005b70a4 */
  *(undefined **)this = PTR_DAT_007e5f80 + 0x10;
  FUN_0066a528(this + 8,param_1 + 8);
                    /* try { // try from 005b70c8 to 006b70ef has its CatchHandler @ 005b715c */
  puVar1 = PTR_vtable_007e57f0 + 0x10;
  *(undefined **)this = PTR_vtable_007e56d8 + 0x10;
  *(undefined **)(this + 0x10) = puVar1;
  plVar2 = *(long **)(param_1 + 0x18);
  *(long **)(this + 0x18) = plVar2;
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 005b70f0 to 006b71cb has its CatchHandler @ 005b6d88 */
    (**(code **)(*plVar2 + 0x18))();
  }
  puVar1 = PTR_vtable_007e7150;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x10) = puVar1 + 0x48;
  *(undefined8 *)(this + 0x28) = uVar4;
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined **)(this + 0x38) = puVar1 + 0x68;
  return;
}


