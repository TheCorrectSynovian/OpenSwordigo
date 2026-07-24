/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f8914
 * Function: Caver::AttributePointsView::SetNumPoints
 * Signature: undefined __thiscall SetNumPoints(AttributePointsView * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::SetNumPoints(int) */

void __thiscall Caver::AttributePointsView::SetNumPoints(AttributePointsView *this,int param_1)

{
  int iVar1;
  int iVar2;
  GUIView *pGVar3;
  
  *(int *)(this + 0x104) = param_1;
  if (*(int *)(this + 0x180) != param_1) {
    *(int *)(this + 0x180) = param_1;
    this[0x540] = (AttributePointsView)0x1;
  }
  pGVar3 = *(GUIView **)(this + 0x128);
  iVar1 = *(int *)(this + 0xfc);
  iVar2 = *(int *)(this + 0x100);
  if (((iVar2 == param_1) != (pGVar3[0xe4] != (GUIView)0x0)) &&
     (pGVar3[0xe4] = (GUIView)(iVar2 == param_1), iVar2 != param_1)) {
    GUIView::AddPopupAnimation(pGVar3);
  }
  pGVar3 = *(GUIView **)(this + 0x138);
  if ((param_1 <= iVar1 != (pGVar3[0xe4] != (GUIView)0x0)) &&
     (pGVar3[0xe4] = (GUIView)(param_1 <= iVar1), iVar1 < param_1)) {
    GUIView::AddPopupAnimation(pGVar3);
    return;
  }
  return;
}


