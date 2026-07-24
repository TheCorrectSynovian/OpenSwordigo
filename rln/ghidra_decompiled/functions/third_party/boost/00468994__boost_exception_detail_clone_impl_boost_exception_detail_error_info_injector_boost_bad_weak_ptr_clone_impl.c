/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00468994
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl
 * Signature: undefined __thiscall clone_impl(clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> * this, clone_impl * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>
   >::clone_impl(boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>
   > const&) */

void __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone_impl
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *this,
          clone_impl *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_vtable_007e6120 + 0x10;
                    /* try { // try from 004689c0 to 005689d3 has its CatchHandler @ 00468b54 */
  *(undefined **)(this + 8) = PTR_vtable_007e57f0 + 0x10;
  *(undefined **)this = puVar1;
  plVar2 = *(long **)(param_1 + 0x10);
  *(long **)(this + 0x10) = plVar2;
                    /* try { // try from 004689d4 to 005689e3 has its CatchHandler @ 00468a64 */
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  puVar1 = PTR_vtable_007e5e60;
                    /* try { // try from 004689e4 to 00568b67 has its CatchHandler @ 004688a4 */
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(this + 8) = puVar1 + 0x48;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x20) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar3;
  *(undefined **)(this + 0x30) = puVar1 + 0x68;
  return;
}


