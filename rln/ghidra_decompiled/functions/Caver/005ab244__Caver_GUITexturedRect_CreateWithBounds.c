/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab244
 * Function: Caver::GUITexturedRect::CreateWithBounds
 * Signature: undefined __thiscall CreateWithBounds(GUITexturedRect * this, Rectangle * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITexturedRect::CreateWithBounds(Caver::Rectangle const&, bool) */

void __thiscall
Caver::GUITexturedRect::CreateWithBounds(GUITexturedRect *this,Rectangle *param_1,bool param_2)

{
  float fVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = DAT_00683734;
  uVar5 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0xc) = uVar5;
  this[8] = (GUITexturedRect)param_2;
  if ((fVar9 < *(float *)(this + 0x14)) && (lVar3 = *(long *)this, lVar3 != 0)) {
    fVar9 = *(float *)(this + 0xc);
    fVar10 = *(float *)(this + 0x10);
    fVar1 = *(float *)(lVar3 + 0x5c);
    fVar2 = *(float *)(lVar3 + 0x60);
    fVar7 = *(float *)(lVar3 + 100);
    fVar6 = *(float *)(lVar3 + 0x68);
    fVar4 = *(float *)(this + 0x14) + fVar9;
    fVar8 = *(float *)(this + 0x18) + fVar10;
    *(float *)(this + 0x24) = fVar10;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x20) = fVar9;
    *(float *)(this + 0x48) = fVar9;
    *(float *)(this + 0x38) = fVar10;
    *(undefined4 *)(this + 0x3c) = 0;
    *(float *)(this + 0x34) = fVar4;
    *(float *)(this + 0x4c) = fVar8;
    *(float *)(this + 0x5c) = fVar4;
    *(float *)(this + 0x60) = fVar8;
    *(undefined4 *)(this + 100) = 0;
    if (param_2) {
      fVar9 = fVar9 / *(float *)(lVar3 + 0x54);
      fVar10 = fVar10 / *(float *)(lVar3 + 0x58);
      fVar4 = fVar4 / *(float *)(lVar3 + 0x54);
      fVar8 = fVar8 / *(float *)(lVar3 + 0x58);
      *(float *)(this + 0x2c) = fVar9;
      *(float *)(this + 0x30) = fVar10;
      *(float *)(this + 0x44) = fVar10;
      *(float *)(this + 0x54) = fVar9;
    }
    else {
      fVar4 = fVar7 + fVar1;
      *(float *)(this + 0x2c) = fVar1;
      *(float *)(this + 0x30) = fVar2;
      *(float *)(this + 0x44) = fVar2;
      fVar8 = fVar6 + fVar2;
      *(float *)(this + 0x54) = fVar1;
    }
    *(float *)(this + 0x40) = fVar4;
    *(float *)(this + 0x58) = fVar8;
    *(float *)(this + 0x68) = fVar4;
    *(float *)(this + 0x6c) = fVar8;
  }
  return;
}


