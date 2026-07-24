/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aad40
 * Function: boost::detail::sp_counted_impl_p<Caver::GUIRoundedRect>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUIRoundedRect> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUIRoundedRect>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUIRoundedRect>::dispose
          (sp_counted_impl_p<Caver::GUIRoundedRect> *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 != (long *)0x0) {
                    /* try { // try from 005aad58 to 006aad7f has its CatchHandler @ 005aad84 */
    if ((void *)plVar3[0x11] != (void *)0x0) {
      operator_delete__((void *)plVar3[0x11]);
    }
    if ((void *)plVar3[0xe] != (void *)0x0) {
      operator_delete__((void *)plVar3[0xe]);
    }
    plVar2 = (long *)plVar3[10];
                    /* try { // try from 005aad80 to 006aae7b has its CatchHandler @ 005aa898 */
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* catch() { ... } // from try @ 005aad58 with catch @ 005aad84 */
                    /* catch() { ... } // from try @ 005aaaf4 with catch @ 005aad88 */
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = (long *)*plVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
                    /* catch() { ... } // from try @ 005aaae0 with catch @ 005aadc0 */
    operator_delete(plVar3);
    return;
  }
                    /* catch() { ... } // from try @ 005aa9f4 with catch @ 005aadc4 */
  return;
}


