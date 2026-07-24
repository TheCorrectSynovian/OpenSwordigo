/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f8698
 * Function: Caver::AttributePointsView::SetEditingEnabled
 * Signature: undefined __thiscall SetEditingEnabled(AttributePointsView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::SetEditingEnabled(bool) */

void __thiscall
Caver::AttributePointsView::SetEditingEnabled(AttributePointsView *this,bool param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  GUIView *pGVar4;
  
  if ((AttributePointsView)param_1 != this[0xf8]) {
    pGVar4 = *(GUIView **)(this + 0x128);
    iVar3 = *(int *)(this + 0x104);
    iVar1 = *(int *)(this + 0xfc);
    iVar2 = *(int *)(this + 0x100);
    this[0xf8] = (AttributePointsView)param_1;
    if (((iVar3 == iVar2) != (pGVar4[0xe4] != (GUIView)0x0)) &&
       (pGVar4[0xe4] = (GUIView)(iVar3 == iVar2), iVar3 != iVar2)) {
      GUIView::AddPopupAnimation(pGVar4);
    }
    pGVar4 = *(GUIView **)(this + 0x138);
    if ((iVar3 <= iVar1 != (pGVar4[0xe4] != (GUIView)0x0)) &&
       (pGVar4[0xe4] = (GUIView)(iVar3 <= iVar1), iVar1 < iVar3)) {
      GUIView::AddPopupAnimation(pGVar4);
      return;
    }
  }
  return;
}


