/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af77c
 * Function: Caver::Matrix4::FromRotationQuaternion
 * Signature: undefined __thiscall FromRotationQuaternion(Matrix4 * this, Quaternion * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::FromRotationQuaternion(Caver::Quaternion const&) */

void __thiscall Caver::Matrix4::FromRotationQuaternion(Matrix4 *this,Quaternion *param_1)

{
  float *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(this + 8);
  fVar2 = *(float *)(this + 0xc);
  fVar3 = fVar1 + fVar1;
  fVar5 = fVar2 * (fVar2 + fVar2);
  *in_x8 = (1.0 - fVar1 * fVar3) - fVar5;
  fVar6 = *(float *)this;
  fVar7 = *(float *)(this + 4);
  in_x8[3] = 0.0;
  in_x8[7] = 0.0;
  fVar8 = fVar7 + fVar7;
  fVar4 = (fVar2 + fVar2) * fVar6;
  fVar7 = 1.0 - fVar7 * fVar8;
  in_x8[8] = fVar2 * fVar8 + fVar3 * fVar6;
  in_x8[9] = fVar3 * fVar2 - fVar8 * fVar6;
  in_x8[0xd] = 0.0;
  in_x8[0xe] = 0.0;
  in_x8[0xb] = 0.0;
  in_x8[0xc] = 0.0;
  in_x8[1] = fVar1 * fVar8 + fVar4;
  in_x8[2] = fVar2 * fVar8 - fVar3 * fVar6;
  in_x8[5] = fVar7 - fVar5;
  in_x8[6] = fVar3 * fVar2 + fVar8 * fVar6;
                    /* try { // try from 005af808 to 006af85b has its CatchHandler @ 005af808
                       catch() { ... } // from try @ 005af808 with catch @ 005af808
                       catch() { ... } // from try @ 005af860 with catch @ 005af808
                       catch() { ... } // from try @ 005af89c with catch @ 005af808
                       catch() { ... } // from try @ 005af9b8 with catch @ 005af808
                       catch() { ... } // from try @ 005afa38 with catch @ 005af808
                       catch() { ... } // from try @ 005afa74 with catch @ 005af808
                       catch() { ... } // from try @ 005afaf4 with catch @ 005af808
                       catch() { ... } // from try @ 005afb30 with catch @ 005af808
                       catch() { ... } // from try @ 005afc64 with catch @ 005af808
                       catch() { ... } // from try @ 005afde0 with catch @ 005af808
                       catch() { ... } // from try @ 005afe94 with catch @ 005af808 */
  in_x8[4] = fVar1 * fVar8 - fVar4;
  in_x8[10] = fVar7 - fVar1 * fVar3;
  in_x8[0xf] = 1.0;
  return;
}


