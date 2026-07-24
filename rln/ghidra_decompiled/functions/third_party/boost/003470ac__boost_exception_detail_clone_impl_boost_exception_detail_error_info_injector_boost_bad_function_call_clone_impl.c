/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003470ac
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl
 * Signature: undefined __thiscall clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> * this, clone_impl * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>
   >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>
   > const&) */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>>::clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_function_call>> *this,
          clone_impl *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined **)this = PTR_DAT_007e4aa8 + 0x10;
  FUN_0066a528(this + 8,param_1 + 8);
  puVar1 = PTR_vtable_007e57f0 + 0x10;
  *(undefined **)this = PTR_vtable_007e5388 + 0x10;
  *(undefined **)(this + 0x10) = puVar1;
  plVar2 = *(long **)(param_1 + 0x18);
  *(long **)(this + 0x18) = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  puVar1 = PTR_vtable_007e4e28;
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


