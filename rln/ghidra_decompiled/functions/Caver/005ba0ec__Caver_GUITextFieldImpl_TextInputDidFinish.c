/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba0ec
 * Function: Caver::GUITextFieldImpl::TextInputDidFinish
 * Signature: undefined __thiscall TextInputDidFinish(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to Caver::GUITextFieldImpl::TextInputDidFinish() */

void __thiscall Caver::GUITextFieldImpl::TextInputDidFinish(GUITextFieldImpl *this)

{
  long *plVar1;
  ulong uVar2;
  GUITextFieldImpl *pGVar3;
  
  plVar1 = *(long **)(this + -8);
  pGVar3 = this + -0x140;
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 8))(plVar1,pGVar3), (uVar2 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005ba130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pGVar3 + 0xd0))(pGVar3);
  return;
}


