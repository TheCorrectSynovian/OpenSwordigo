/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f89d0
 * Function: Caver::AttributePointsView::SetMaxPoints
 * Signature: undefined __thiscall SetMaxPoints(AttributePointsView * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::SetMaxPoints(int) */

void __thiscall Caver::AttributePointsView::SetMaxPoints(AttributePointsView *this,int param_1)

{
  int iVar1;
  int iVar2;
  GUIView *pGVar3;
  
  pGVar3 = *(GUIView **)(this + 0x128);
  iVar1 = *(int *)(this + 0x104);
  *(int *)(this + 0x100) = param_1;
  iVar2 = *(int *)(this + 0xfc);
  if (((iVar1 == param_1) != (pGVar3[0xe4] != (GUIView)0x0)) &&
     (pGVar3[0xe4] = (GUIView)(iVar1 == param_1), iVar1 != param_1)) {
    GUIView::AddPopupAnimation(pGVar3);
  }
  pGVar3 = *(GUIView **)(this + 0x138);
  if ((iVar1 <= iVar2 != (pGVar3[0xe4] != (GUIView)0x0)) &&
     (pGVar3[0xe4] = (GUIView)(iVar1 <= iVar2), iVar2 < iVar1)) {
    GUIView::AddPopupAnimation(pGVar3);
    return;
  }
  return;
}


