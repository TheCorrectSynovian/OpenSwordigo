/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b6aec
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::clone_impl
 * Signature: undefined __thiscall clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>> * this, error_info_injector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
   >::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>
   const&) */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>::
clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_day_of_month>>
           *this,error_info_injector *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 005b6b18 to 006b6ba3 has its CatchHandler @ 005b62b4 */
  *(undefined **)this = PTR_DAT_007e5f80 + 0x10;
                    /* catch() { ... } // from try @ 005b63a8 with catch @ 005b6b1c */
  FUN_0066a528(this + 8,param_1 + 8);
                    /* catch() { ... } // from try @ 005b63a0 with catch @ 005b6b20 */
                    /* catch() { ... } // from try @ 005b6384 with catch @ 005b6b30 */
  puVar1 = PTR_vtable_007e57f0 + 0x10;
  *(undefined **)this = PTR_vtable_007e56d8 + 0x10;
  *(undefined **)(this + 0x10) = puVar1;
  plVar2 = *(long **)(param_1 + 0x18);
                    /* catch() { ... } // from try @ 005b63b0 with catch @ 005b6b44 */
  *(long **)(this + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar2 + 0x18))();
    plVar2 = *(long **)(this + 0x18);
  }
  puVar1 = PTR_vtable_007e7150;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x10) = puVar1 + 0x48;
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined **)(this + 0x38) = puVar1 + 0x68;
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 005b6ba4 to 006b6bcb has its CatchHandler @ 005b6bec */
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long **)(this + 0x18) = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
                    /* try { // try from 005b6bcc to 006b6bef has its CatchHandler @ 005b62b4 */
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar4;
                    /* catch() { ... } // from try @ 005b6988 with catch @ 005b6bec
                       catch() { ... } // from try @ 005b6a88 with catch @ 005b6bec
                       catch() { ... } // from try @ 005b6ba4 with catch @ 005b6bec */
  return;
}


