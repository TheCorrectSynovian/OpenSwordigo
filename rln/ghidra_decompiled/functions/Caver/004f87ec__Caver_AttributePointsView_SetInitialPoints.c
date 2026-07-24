/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f87ec
 * Function: Caver::AttributePointsView::SetInitialPoints
 * Signature: undefined __thiscall SetInitialPoints(AttributePointsView * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::SetInitialPoints(int) */

void __thiscall Caver::AttributePointsView::SetInitialPoints(AttributePointsView *this,int param_1)

{
  int iVar1;
  float fVar2;
  GUIView *this_00;
  AttributePointsView *pAVar3;
  AttributePointsView *this_01;
  long lVar4;
  
  *(int *)(this + 0xfc) = param_1;
  *(int *)(this + 0x104) = param_1;
  if (*(int *)(this + 0x180) != param_1) {
    *(int *)(this + 0x180) = param_1;
    this[0x540] = (AttributePointsView)0x1;
  }
  this_00 = *(GUIView **)(this + 0x128);
  iVar1 = *(int *)(this + 0x100);
  if (((iVar1 == param_1) != (this_00[0xe4] != (GUIView)0x0)) &&
     (this_00[0xe4] = (GUIView)(iVar1 == param_1), iVar1 != param_1)) {
    GUIView::AddPopupAnimation(this_00);
  }
  if (*(char *)(*(long *)(this + 0x138) + 0xe4) == '\0') {
    *(undefined1 *)(*(long *)(this + 0x138) + 0xe4) = 1;
  }
  lVar4 = 0;
  this_01 = this + 0x188;
  *(bool *)(*(long *)(this + 0x148) + 0xe4) = *(int *)(this + 0xfc) < 8;
  do {
    pAVar3 = this + 0x170;
    if (lVar4 < *(int *)(this + 0x180)) {
      pAVar3 = this + 0x178;
    }
    GUIAnimatedSprite::SetTexture((GUIAnimatedSprite *)this_01,(intrusive_ptr *)pAVar3);
    fVar2 = DAT_00683734;
    lVar4 = lVar4 + 1;
    this_01 = this_01 + 0x48;
  } while (lVar4 != 0xc);
  this[0x540] = (AttributePointsView)0x1;
  if (fVar2 < *(float *)(this + 0x8c)) {
                    /* WARNING: Could not recover jumptable at 0x004f88fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x58))(this);
    return;
  }
  return;
}


