/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b950
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl
 * Signature: undefined __thiscall clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> * this, clone_impl * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>
   >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>
   > const&) */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> *this,
          clone_impl *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined **)this = PTR_vtable_007e6e00 + 0x10;
  puVar1 = PTR_vtable_007e57f0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined **)(this + 0x18) = puVar1 + 0x10;
  plVar2 = *(long **)(param_1 + 0x20);
  *(long **)(this + 0x20) = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  puVar1 = PTR_vtable_007e7f18;
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x18) = puVar1 + 0x48;
  *(undefined8 *)(this + 0x30) = uVar4;
  *(undefined8 *)(this + 0x28) = uVar3;
  *(undefined **)(this + 0x40) = puVar1 + 0x68;
  return;
}


