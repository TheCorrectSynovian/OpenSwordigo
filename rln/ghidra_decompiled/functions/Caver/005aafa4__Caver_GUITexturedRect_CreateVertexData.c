/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005aafa4
 * Function: Caver::GUITexturedRect::CreateVertexData
 * Signature: undefined __thiscall CreateVertexData(GUITexturedRect * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITexturedRect::CreateVertexData() */

void __thiscall Caver::GUITexturedRect::CreateVertexData(GUITexturedRect *this)

{
  float fVar1;
  float fVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = *(long *)this;
  if (lVar3 != 0) {
    fVar8 = *(float *)(this + 0xc);
    fVar9 = *(float *)(this + 0x10);
    fVar1 = *(float *)(lVar3 + 0x5c);
    fVar2 = *(float *)(lVar3 + 0x60);
    fVar5 = *(float *)(lVar3 + 100);
    fVar4 = *(float *)(lVar3 + 0x68);
    *(float *)(this + 0x20) = fVar8;
    *(float *)(this + 0x48) = fVar8;
    fVar7 = *(float *)(this + 0x14) + fVar8;
    fVar6 = *(float *)(this + 0x18) + fVar9;
    *(float *)(this + 0x24) = fVar9;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x38) = fVar9;
    *(undefined4 *)(this + 0x3c) = 0;
                    /* catch() { ... } // from try @ 005ab014 with catch @ 005aafe4 */
    *(float *)(this + 0x34) = fVar7;
    *(float *)(this + 0x4c) = fVar6;
    *(float *)(this + 0x5c) = fVar7;
    *(float *)(this + 0x60) = fVar6;
    *(undefined4 *)(this + 100) = 0;
    if (this[8] == (GUITexturedRect)0x0) {
      fVar7 = fVar5 + fVar1;
      *(float *)(this + 0x2c) = fVar1;
      *(float *)(this + 0x30) = fVar2;
      *(float *)(this + 0x44) = fVar2;
      fVar6 = fVar4 + fVar2;
      *(float *)(this + 0x40) = fVar7;
                    /* catch() { ... } // from try @ 005ab000 with catch @ 005ab038 */
      *(float *)(this + 0x54) = fVar1;
    }
    else {
      fVar8 = fVar8 / *(float *)(lVar3 + 0x54);
                    /* try { // try from 005ab000 to 006ab013 has its CatchHandler @ 005ab038 */
      fVar9 = fVar9 / *(float *)(lVar3 + 0x58);
      fVar7 = fVar7 / *(float *)(lVar3 + 0x54);
      fVar6 = fVar6 / *(float *)(lVar3 + 0x58);
      *(float *)(this + 0x2c) = fVar8;
      *(float *)(this + 0x30) = fVar9;
      *(float *)(this + 0x40) = fVar7;
      *(float *)(this + 0x44) = fVar9;
                    /* try { // try from 005ab014 to 006ab03b has its CatchHandler @ 005aafe4 */
      *(float *)(this + 0x54) = fVar8;
    }
    *(float *)(this + 0x58) = fVar6;
    *(float *)(this + 0x68) = fVar7;
    *(float *)(this + 0x6c) = fVar6;
  }
  return;
}


