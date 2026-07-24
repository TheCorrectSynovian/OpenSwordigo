/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0050d2a4
 * Function: boost::detail::sp_counted_impl_p<Caver::GUITexturedRect>::dispose
 * Signature: undefined __thiscall dispose(sp_counted_impl_p<Caver::GUITexturedRect> * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::sp_counted_impl_p<Caver::GUITexturedRect>::dispose() */

void __thiscall
boost::detail::sp_counted_impl_p<Caver::GUITexturedRect>::dispose
          (sp_counted_impl_p<Caver::GUITexturedRect> *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 != (long *)0x0) {
    plVar2 = (long *)*plVar3;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    operator_delete(plVar3);
    return;
  }
  return;
}


