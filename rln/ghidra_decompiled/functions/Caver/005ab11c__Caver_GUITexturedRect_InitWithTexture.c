/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ab11c
 * Function: Caver::GUITexturedRect::InitWithTexture
 * Signature: undefined __thiscall InitWithTexture(GUITexturedRect * this, intrusive_ptr * param_1, Rectangle * param_2, bool param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,
   Caver::Rectangle const&, bool) */

void __thiscall
Caver::GUITexturedRect::InitWithTexture
          (GUITexturedRect *this,intrusive_ptr *param_1,Rectangle *param_2,bool param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar5 = *(long *)param_1;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
  }
  plVar4 = *(long **)this;
  *(long *)this = lVar5;
  if ((plVar4 != (long *)0x0) &&
     (iVar3 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*plVar4 + 8))();
  }
  fVar11 = DAT_00683734;
                    /* try { // try from 005ab174 to 006ab38f has its CatchHandler @ 005ab174
                       catch() { ... } // from try @ 005ab174 with catch @ 005ab174
                       catch() { ... } // from try @ 005ab464 with catch @ 005ab174
                       catch() { ... } // from try @ 005ab540 with catch @ 005ab174
                       catch() { ... } // from try @ 005ab610 with catch @ 005ab174
                       catch() { ... } // from try @ 005ab6c8 with catch @ 005ab174
                       catch() { ... } // from try @ 005ab780 with catch @ 005ab174
                       catch() { ... } // from try @ 005ab838 with catch @ 005ab174
                       catch() { ... } // from try @ 005abb40 with catch @ 005ab174 */
  uVar7 = *(undefined8 *)param_2;
  *(undefined8 *)(this + 0x14) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(this + 0xc) = uVar7;
  this[8] = (GUITexturedRect)param_3;
  if ((fVar11 < *(float *)(this + 0x14)) && (lVar5 = *(long *)this, lVar5 != 0)) {
    fVar11 = *(float *)(this + 0xc);
    fVar12 = *(float *)(this + 0x10);
    fVar1 = *(float *)(lVar5 + 0x5c);
    fVar2 = *(float *)(lVar5 + 0x60);
    fVar9 = *(float *)(lVar5 + 100);
    fVar8 = *(float *)(lVar5 + 0x68);
    fVar6 = *(float *)(this + 0x14) + fVar11;
    fVar10 = *(float *)(this + 0x18) + fVar12;
    *(float *)(this + 0x24) = fVar12;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x20) = fVar11;
    *(float *)(this + 0x48) = fVar11;
    *(float *)(this + 0x38) = fVar12;
    *(undefined4 *)(this + 0x3c) = 0;
    *(float *)(this + 0x34) = fVar6;
    *(float *)(this + 0x4c) = fVar10;
    *(float *)(this + 0x5c) = fVar6;
    *(float *)(this + 0x60) = fVar10;
    *(undefined4 *)(this + 100) = 0;
    if (param_3) {
      fVar11 = fVar11 / *(float *)(lVar5 + 0x54);
      fVar12 = fVar12 / *(float *)(lVar5 + 0x58);
      fVar6 = fVar6 / *(float *)(lVar5 + 0x54);
      fVar10 = fVar10 / *(float *)(lVar5 + 0x58);
      *(float *)(this + 0x2c) = fVar11;
      *(float *)(this + 0x30) = fVar12;
      *(float *)(this + 0x44) = fVar12;
      *(float *)(this + 0x54) = fVar11;
    }
    else {
      fVar6 = fVar9 + fVar1;
      *(float *)(this + 0x2c) = fVar1;
      *(float *)(this + 0x30) = fVar2;
      *(float *)(this + 0x44) = fVar2;
      fVar10 = fVar8 + fVar2;
      *(float *)(this + 0x54) = fVar1;
    }
    *(float *)(this + 0x40) = fVar6;
    *(float *)(this + 0x58) = fVar10;
    *(float *)(this + 0x68) = fVar6;
    *(float *)(this + 0x6c) = fVar10;
  }
  return;
}


