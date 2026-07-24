/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004686e0
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>>::clone
 * Signature: undefined __thiscall clone(clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_weak_ptr>
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
  
                    /* catch() { ... } // from try @ 004686b8 with catch @ 004686e4 */
                    /* catch() { ... } // from try @ 004682b0 with catch @ 004686e8 */
  plVar2 = operator_new(0x38);
                    /* try { // try from 0046870c to 00568733 has its CatchHandler @ 00468780 */
  puVar1 = PTR_vtable_007e6120 + 0x10;
  plVar2[1] = (long)(PTR_vtable_007e57f0 + 0x10);
  *plVar2 = (long)puVar1;
  plVar3 = *(long **)(this + -0x20);
  plVar2[2] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  puVar1 = PTR_vtable_007e5e60;
  *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(this + -8);
  lVar5 = *(long *)(this + -0x10);
  lVar4 = *(long *)(this + -0x18);
                    /* try { // try from 00468754 to 0056877b has its CatchHandler @ 004687d4 */
  plVar2[1] = (long)(puVar1 + 0x48);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[4] = lVar5;
  plVar2[3] = lVar4;
  plVar2[6] = (long)(puVar1 + 0x68);
  return plVar2 + 6;
}


