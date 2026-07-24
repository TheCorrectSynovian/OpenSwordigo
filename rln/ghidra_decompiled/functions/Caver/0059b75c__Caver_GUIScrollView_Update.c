/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b75c
 * Function: Caver::GUIScrollView::Update
 * Signature: undefined __thiscall Update(GUIScrollView * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIScrollView::Update(float) */

void __thiscall Caver::GUIScrollView::Update(GUIScrollView *this,float param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(this + 0x1e0);
  puVar1 = *(undefined8 **)(this + 0x1a0);
  *(float *)(this + 0x1e0) = fVar3 + param_1;
  if ((((puVar1 != (undefined8 *)0x0) && (this[0x1b0] == (GUIScrollView)0x0)) &&
      (*(long *)(this + 0x158) != 0)) &&
     ((0.0 < fVar3 + param_1 || (this[0x1b3] == (GUIScrollView)0x0)))) {
    *(undefined2 *)(this + 0x1b0) = 0x101;
    (**(code **)*puVar1)(puVar1,this + 0x1b8);
    this[0x1b1] = (GUIScrollView)0x0;
  }
  fVar3 = DAT_00683734;
  if (this[0x163] == (GUIScrollView)0x0) {
    if (this[0x160] == (GUIScrollView)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT44(-(uint)((float)((ulong)*(undefined8 *)(this + 0x8c) >> 0x20) <
                              (float)((ulong)*(undefined8 *)(this + 0xf4) >> 0x20)),
                       -(uint)((float)*(undefined8 *)(this + 0x8c) <
                              (float)*(undefined8 *)(this + 0xf4))) & 0x100000001;
    }
    this[0xfc] = SUB81(uVar2,0);
    this[0x128] = SUB81(uVar2 >> 0x20,0);
    AdjustContentOffset(this);
  }
  else {
    this[0xfc] = (GUIScrollView)0x0;
    fVar4 = *(float *)(this + 0x16c) + param_1;
    this[0x128] = (GUIScrollView)0x0;
    *(float *)(this + 0x16c) = fVar4;
    if (fVar3 < fVar4) {
      fVar5 = (1.0 / fVar4) * *(float *)(this + 0x164);
      if (DAT_00697058 < fVar4) {
        *(undefined4 *)(this + 0x16c) = 0;
        *(undefined8 *)(this + 0x164) = 0;
      }
      fVar4 = (1.0 / fVar4) * *(float *)(this + 0x168);
      if (ABS(fVar5) < fVar3) {
        *(GUIScrollLocationController *)(this + 0xfc) = (GUIScrollLocationController)0x0;
      }
      *(float *)(this + 0x10c) = fVar5;
      if (ABS(fVar4) < fVar3) {
        this[0x128] = (GUIScrollView)0x0;
      }
      *(float *)(this + 0x138) = fVar4;
    }
    fVar5 = *(float *)(this + 0x194);
    fVar4 = 1.0;
    *(float *)(this + 0x194) = fVar5 + param_1;
    if ((fVar3 < *(float *)(this + 400)) &&
       (fVar4 = (fVar5 + param_1) / *(float *)(this + 400), 1.0 < fVar4)) {
      fVar4 = 1.0;
    }
    if (*(float *)(this + 0x8c) < *(float *)(this + 0xf4)) {
      fVar3 = *(float *)(this + 0x180) * (1.0 - fVar4) + fVar4 * *(float *)(this + 0x188);
      if (DAT_00683944 < ABS(fVar3 - *(float *)(this + 0x108))) {
        *(undefined4 *)(this + 0x124) = 0;
      }
      this[0x104] = (GUIScrollView)0x1;
      *(float *)(this + 0x108) = fVar3;
    }
    if (*(float *)(this + 0x90) < *(float *)(this + 0xf8)) {
      fVar3 = (1.0 - fVar4) * *(float *)(this + 0x184) + fVar4 * *(float *)(this + 0x18c);
      if (DAT_00683944 < ABS(fVar3 - *(float *)(this + 0x134))) {
        *(undefined4 *)(this + 0x150) = 0;
      }
      this[0x130] = (GUIScrollView)0x1;
      *(float *)(this + 0x134) = fVar3;
    }
  }
  GUIScrollLocationController::Update((GUIScrollLocationController *)(this + 0xfc),param_1);
  GUIScrollLocationController::Update((GUIScrollLocationController *)(this + 0x128),param_1);
  GUIView::Update((GUIView *)this,param_1);
  return;
}


