/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005af10c
 * Function: Caver::Matrix4::PreTranslate
 * Signature: undefined __thiscall PreTranslate(Matrix4 * this, Vector3 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Matrix4::PreTranslate(Caver::Vector3 const&) */

void __thiscall Caver::Matrix4::PreTranslate(Matrix4 *this,Vector3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = *(float *)(this + 0xc);
  fVar5 = *(float *)(this + 0x1c);
  fVar6 = *(float *)(this + 0x2c);
  fVar7 = *(float *)(this + 0x3c);
  fVar1 = (float)*(undefined8 *)param_1;
  fVar2 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005aeef4 with catch @ 005af144
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005aee88 with catch @ 005af150
                        */
                    /* try { // try from 005af170 to 006af197 has its CatchHandler @ 005af1a0 */
  *(ulong *)this =
       CONCAT44((float)((ulong)*(undefined8 *)this >> 0x20) + fVar2 * fVar4,
                (float)*(undefined8 *)this + fVar1 * fVar4);
  *(ulong *)(this + 0x10) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20) + fVar2 * fVar5,
                (float)*(undefined8 *)(this + 0x10) + fVar1 * fVar5);
  *(ulong *)(this + 0x20) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20) + fVar2 * fVar6,
                (float)*(undefined8 *)(this + 0x20) + fVar1 * fVar6);
  *(ulong *)(this + 0x30) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x30) >> 0x20) + fVar2 * fVar7,
                (float)*(undefined8 *)(this + 0x30) + fVar1 * fVar7);
  *(float *)(this + 8) = fVar3 * fVar4 + *(float *)(this + 8);
  *(float *)(this + 0x18) = fVar3 * fVar5 + *(float *)(this + 0x18);
  *(float *)(this + 0x28) = fVar3 * fVar6 + *(float *)(this + 0x28);
  *(float *)(this + 0x38) = fVar3 * fVar7 + *(float *)(this + 0x38);
  return;
}


