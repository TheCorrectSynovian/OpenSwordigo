/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b87fc
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone
 * Signature: undefined __thiscall clone(clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>
   >::clone() const */

long * __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>>::clone
          (clone_impl<boost::exception_detail::error_info_injector<std::runtime_error>> *this)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = operator_new(0x40);
  *plVar2 = (long)(PTR_DAT_007e4aa8 + 0x10);
  FUN_0066a528(plVar2 + 1,this + -0x30);
  plVar3 = *(long **)(this + -0x20);
  plVar2[2] = (long)(PTR_vtable_007e57f0 + 0x10);
  plVar2[3] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  puVar1 = PTR_vtable_007e6478;
  *(undefined4 *)(plVar2 + 6) = *(undefined4 *)(this + -8);
  lVar5 = *(long *)(this + -0x10);
  lVar4 = *(long *)(this + -0x18);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[2] = (long)(puVar1 + 0x48);
  plVar2[5] = lVar5;
  plVar2[4] = lVar4;
  plVar2[7] = (long)(puVar1 + 0x68);
  return plVar2 + 7;
}


