/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a1224
 * Function: Caver::GUIView::FindAndSetSubviewFirstResponder
 * Signature: undefined __thiscall FindAndSetSubviewFirstResponder(GUIView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIView::FindAndSetSubviewFirstResponder() */

undefined8 __thiscall Caver::GUIView::FindAndSetSubviewFirstResponder(GUIView *this)

{
  ulong uVar1;
  undefined8 uVar2;
  GUIView *pGVar3;
  
  uVar1 = (**(code **)(*(long *)this + 0xc0))();
  if ((uVar1 & 1) == 0) {
    for (pGVar3 = *(GUIView **)(this + 0x20); this + 0x20 != pGVar3; pGVar3 = *(GUIView **)pGVar3) {
      uVar1 = FindAndSetSubviewFirstResponder(*(GUIView **)(pGVar3 + 0x10));
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  else {
    (**(code **)(*(long *)this + 200))(this);
    uVar2 = 1;
  }
  return uVar2;
}


