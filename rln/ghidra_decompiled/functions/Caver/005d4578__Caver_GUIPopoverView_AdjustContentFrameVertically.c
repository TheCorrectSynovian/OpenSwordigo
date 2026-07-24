/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005d4578
 * Function: Caver::GUIPopoverView::AdjustContentFrameVertically
 * Signature: undefined __cdecl AdjustContentFrameVertically(Rectangle param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIPopoverView::AdjustContentFrameVertically(Caver::Rectangle) */

void Caver::GUIPopoverView::AdjustContentFrameVertically
               (undefined4 *param_1,long param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  
  *param_1 = *param_3;
  uVar7 = *(undefined8 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 1) = uVar7;
  fVar1 = (float)param_3[3];
  param_1[3] = fVar1;
  fVar3 = *(float *)(*(long *)(param_2 + 0x58) + 0x88);
  fVar2 = fVar3 + 10.0;
  fVar6 = (float)uVar7;
  fVar5 = fVar3 + *(float *)(*(long *)(param_2 + 0x58) + 0x90) + -10.0;
  fVar3 = fVar2;
  if (fVar2 <= fVar6) {
    fVar3 = fVar6;
  }
  fVar4 = fVar5 - fVar1;
  if (fVar3 + fVar1 <= fVar5) {
    fVar4 = fVar3;
  }
  if ((fVar6 < fVar2) || (fVar5 < fVar3 + fVar1)) {
    param_1[1] = fVar4;
  }
  if (fVar4 < fVar2) {
    param_1[3] = (fVar4 + fVar1) - fVar2;
    param_1[1] = fVar2;
    return;
  }
  return;
}


