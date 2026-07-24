/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056b4fc
 * Function: boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone
 * Signature: undefined __thiscall clone(clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::exception_detail::clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>
   >::clone() const */

long * __thiscall
boost::exception_detail::
clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>>::clone
          (clone_impl<boost::exception_detail::error_info_injector<boost::bad_lexical_cast>> *this)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
                    /* catch() { ... } // from try @ 0056b4f4 with catch @ 0056b508 */
  plVar2 = operator_new(0x48);
                    /* try { // try from 0056b51c to 0066b553 has its CatchHandler @ 0056b51c
                       catch() { ... } // from try @ 0056b51c with catch @ 0056b51c
                       catch() { ... } // from try @ 0056b558 with catch @ 0056b51c
                       catch() { ... } // from try @ 0056b5d0 with catch @ 0056b51c
                       catch() { ... } // from try @ 0056b93c with catch @ 0056b51c
                       catch() { ... } // from try @ 0056ba94 with catch @ 0056b51c
                       catch() { ... } // from try @ 0056bcd4 with catch @ 0056b51c
                       catch() { ... } // from try @ 0056be84 with catch @ 0056b51c */
  *plVar2 = (long)(PTR_vtable_007e6e00 + 0x10);
  puVar1 = PTR_vtable_007e57f0;
  lVar4 = *(long *)(this + 8);
  plVar2[2] = *(long *)(this + 0x10);
  plVar2[1] = lVar4;
  plVar3 = *(long **)(this + 0x20);
  plVar2[3] = (long)(puVar1 + 0x10);
  plVar2[4] = (long)plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  puVar1 = PTR_vtable_007e7f18;
                    /* try { // try from 0056b554 to 0066b557 has its CatchHandler @ 0056be24 */
                    /* try { // try from 0056b558 to 0066b5cb has its CatchHandler @ 0056b51c */
  *(undefined4 *)(plVar2 + 7) = *(undefined4 *)(this + 0x38);
  lVar5 = *(long *)(this + 0x30);
  lVar4 = *(long *)(this + 0x28);
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[3] = (long)(puVar1 + 0x48);
  plVar2[6] = lVar5;
  plVar2[5] = lVar4;
  plVar2[8] = (long)(puVar1 + 0x68);
  return plVar2 + 8;
}


