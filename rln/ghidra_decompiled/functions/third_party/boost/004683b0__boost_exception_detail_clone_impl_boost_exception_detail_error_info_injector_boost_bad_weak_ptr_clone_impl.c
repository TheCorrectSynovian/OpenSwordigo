/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004683b0
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl
 * Signature: undefined __thiscall clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> * this, error_info_injector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>
   >::clone_impl(boost::exception_detail::error_info_injector<boost::bad_weak_ptr> const&) */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *this,
          error_info_injector *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_vtable_007e6120 + 0x10;
  *(undefined **)(this + 8) = PTR_vtable_007e57f0 + 0x10;
  *(undefined **)this = puVar1;
                    /* try { // try from 004683f0 to 005683fb has its CatchHandler @ 004685f8 */
  plVar2 = *(long **)(param_1 + 0x10);
  *(long **)(this + 0x10) = plVar2;
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    (**(code **)(*plVar2 + 0x18))();
    plVar2 = *(long **)(this + 0x10);
  }
  puVar1 = PTR_vtable_007e5e60;
                    /* try { // try from 0046841c to 00568443 has its CatchHandler @ 0046854c */
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(this + 8) = puVar1 + 0x48;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x20) = uVar5;
  *(undefined8 *)(this + 0x18) = uVar4;
  *(undefined **)(this + 0x30) = puVar1 + 0x68;
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))();
  }
  *(long **)(this + 0x10) = plVar3;
                    /* try { // try from 00468464 to 0056848b has its CatchHandler @ 004687f0 */
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
                    /* try { // try from 0046848c to 00568573 has its CatchHandler @ 004681f0 */
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = uVar4;
  return;
}


