/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0046853c
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone
 * Signature: undefined __thiscall clone(clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>
   >::clone() const */

long * __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> *this)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 0046841c with catch @ 0046854c */
  plVar2 = operator_new(0x38);
  puVar1 = PTR_vtable_007e6120 + 0x10;
                    /* try { // try from 00468574 to 0056859b has its CatchHandler @ 004685a0 */
  plVar2[1] = (long)(PTR_vtable_007e57f0 + 0x10);
  *plVar2 = (long)puVar1;
  plVar3 = *(long **)(this + 0x10);
  plVar2[2] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  puVar1 = PTR_vtable_007e5e60;
                    /* catch() { ... } // from try @ 00468574 with catch @ 004685a0 */
                    /* catch() { ... } // from try @ 004682dc with catch @ 004685a4 */
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + 0x28);
  lVar5 = *(long *)(this + 0x20);
  lVar4 = *(long *)(this + 0x18);
  plVar2[1] = (long)(puVar1 + 0x48);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[4] = lVar5;
  plVar2[3] = lVar4;
                    /* try { // try from 004685c8 to 005685ef has its CatchHandler @ 004685f4 */
  plVar2[6] = (long)(puVar1 + 0x68);
  return plVar2 + 6;
}


