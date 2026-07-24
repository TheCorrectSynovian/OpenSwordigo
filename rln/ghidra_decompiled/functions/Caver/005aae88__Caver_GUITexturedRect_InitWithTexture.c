/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aae88
 * Function: Caver::GUITexturedRect::InitWithTexture
 * Signature: undefined __thiscall InitWithTexture(GUITexturedRect * this, intrusive_ptr * param_1, Vector2 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,
   Caver::Vector2 const&) */

void __thiscall
Caver::GUITexturedRect::InitWithTexture
          (GUITexturedRect *this,intrusive_ptr *param_1,Vector2 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  this[8] = (GUITexturedRect)0x0;
  lVar5 = *(long *)param_1;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  }
  plVar4 = *(long **)this;
  *(long *)this = lVar5;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
    lVar5 = *(long *)this;
  }
  uVar9 = *(undefined8 *)(lVar5 + 0x54);
  *(undefined8 *)(this + 0x14) = uVar9;
  fVar10 = (float)((ulong)uVar9 >> 0x20);
  fVar6 = (float)(int)-((float)*(undefined8 *)param_2 * (float)uVar9);
  fVar7 = (float)(int)-((float)((ulong)*(undefined8 *)param_2 >> 0x20) * fVar10);
  *(ulong *)(this + 0xc) = CONCAT44(fVar7,fVar6);
  if (lVar5 != 0) {
    fVar1 = *(float *)(lVar5 + 0x5c);
    fVar2 = *(float *)(lVar5 + 0x60);
    fVar12 = *(float *)(lVar5 + 100);
    fVar11 = *(float *)(lVar5 + 0x68);
    fVar8 = fVar6 + (float)uVar9;
    fVar10 = fVar7 + fVar10;
    *(ulong *)(this + 0x48) = CONCAT44(fVar10,fVar6);
    *(ulong *)(this + 0x20) = CONCAT44(fVar7,fVar6);
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x50) = 0;
    *(ulong *)(this + 0x34) = CONCAT44(fVar7,fVar8);
    *(ulong *)(this + 0x5c) = CONCAT44(fVar10,fVar8);
    *(undefined4 *)(this + 100) = 0;
    if (this[8] == (GUITexturedRect)0x0) {
      *(float *)(this + 0x2c) = fVar1;
      *(float *)(this + 0x30) = fVar2;
      fVar8 = fVar12 + fVar1;
      *(float *)(this + 0x44) = fVar2;
      fVar10 = fVar11 + fVar2;
      *(float *)(this + 0x54) = fVar1;
    }
    else {
      fVar6 = fVar6 / *(float *)(lVar5 + 0x54);
      fVar7 = fVar7 / *(float *)(lVar5 + 0x58);
      fVar8 = fVar8 / *(float *)(lVar5 + 0x54);
      fVar10 = fVar10 / *(float *)(lVar5 + 0x58);
      *(float *)(this + 0x2c) = fVar6;
      *(float *)(this + 0x30) = fVar7;
      *(float *)(this + 0x44) = fVar7;
      *(float *)(this + 0x54) = fVar6;
    }
    *(float *)(this + 0x40) = fVar8;
    *(float *)(this + 0x58) = fVar10;
    *(float *)(this + 0x68) = fVar8;
    *(float *)(this + 0x6c) = fVar10;
  }
  return;
}


