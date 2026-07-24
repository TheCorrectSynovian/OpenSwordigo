/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b61ac
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl
 * Signature: undefined __thiscall clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>> * this, error_info_injector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>
   >::clone_impl(boost::exception_detail::error_info_injector<boost::gregorian::bad_year> const&) */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>::clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::gregorian::bad_year>>
           *this,error_info_injector *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* try { // try from 005b61c0 to 006b61f3 has its CatchHandler @ 005b621c */
  *(undefined **)this = PTR_DAT_007e5f80 + 0x10;
  FUN_0066a528(this + 8,param_1 + 8);
  puVar1 = PTR_vtable_007e57f0 + 0x10;
  *(undefined **)this = PTR_vtable_007e7668 + 0x10;
  *(undefined **)(this + 0x10) = puVar1;
  plVar2 = *(long **)(param_1 + 0x18);
  *(long **)(this + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 005b6018 with catch @ 005b620c */
    (**(code **)(*plVar2 + 0x18))();
                    /* catch() { ... } // from try @ 005b61c0 with catch @ 005b621c */
    plVar2 = *(long **)(this + 0x18);
  }
  puVar1 = PTR_vtable_007e6c78;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
                    /* catch() { ... } // from try @ 005b5fcc with catch @ 005b6238 */
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x10) = puVar1 + 0x48;
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x20) = uVar4;
                    /* try { // try from 005b6254 to 006b629f has its CatchHandler @ 005b62a8 */
  *(undefined **)(this + 0x38) = puVar1 + 0x68;
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long **)(this + 0x18) = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar4;
                    /* try { // try from 005b62a0 to 006b62b3 has its CatchHandler @ 005b5e68 */
                    /* catch() { ... } // from try @ 005b60d4 with catch @ 005b62a8
                       catch() { ... } // from try @ 005b6254 with catch @ 005b62a8 */
  return;
}


