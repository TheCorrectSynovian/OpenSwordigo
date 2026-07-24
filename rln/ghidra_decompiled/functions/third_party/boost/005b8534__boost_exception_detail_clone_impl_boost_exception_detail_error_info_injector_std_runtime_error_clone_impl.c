/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b8534
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl
 * Signature: undefined __thiscall clone_impl(clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> * this, error_info_injector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>
   >::clone_impl(boost::exception_detail::error_info_injector<std::runtime_error> const&) */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *this,
          error_info_injector *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined **)this = PTR_DAT_007e4aa8 + 0x10;
  FUN_0066a528(this + 8,param_1 + 8);
                    /* catch() { ... } // from try @ 005b8418 with catch @ 005b8568 */
  *(undefined **)(this + 0x10) = PTR_vtable_007e57f0 + 0x10;
  plVar2 = *(long **)(param_1 + 0x18);
  *(long **)(this + 0x18) = plVar2;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar2 + 0x18))();
    plVar2 = *(long **)(this + 0x18);
  }
  puVar1 = PTR_vtable_007e6478;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x10) = puVar1 + 0x48;
                    /* catch() { ... } // from try @ 005b8410 with catch @ 005b85c8 */
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined **)(this + 0x38) = puVar1 + 0x68;
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long **)(this + 0x18) = plVar3;
                    /* try { // try from 005b85e8 to 006b860f has its CatchHandler @ 005b8618 */
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 005b8610 to 006b861b has its CatchHandler @ 005b82d4 */
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar4;
                    /* catch() { ... } // from try @ 005b85e8 with catch @ 005b8618 */
                    /* catch() { ... } // from try @ 005b8710 with catch @ 005b861c
                       catch() { ... } // from try @ 005b88e4 with catch @ 005b861c
                       catch() { ... } // from try @ 005b8bdc with catch @ 005b861c */
  return;
}


