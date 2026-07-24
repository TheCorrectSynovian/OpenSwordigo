/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1594
 * Function: Caver::Ray3::IntersectionWithXYPlane
 * Signature: undefined __cdecl IntersectionWithXYPlane(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Ray3::IntersectionWithXYPlane(float) const */

void Caver::Ray3::IntersectionWithXYPlane(float param_1)

{
  undefined8 *in_x0;
  undefined8 *in_x8;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(in_x0 + 1);
  fVar3 = *(float *)((long)in_x0 + 0x14);
  fVar1 = (param_1 - fVar2) / fVar3;
                    /* try { // try from 005b15ac to 006b15d3 has its CatchHandler @ 005b1640 */
  *in_x8 = CONCAT44((float)((ulong)*(undefined8 *)((long)in_x0 + 0xc) >> 0x20) * fVar1 +
                    (float)((ulong)*in_x0 >> 0x20),
                    (float)*(undefined8 *)((long)in_x0 + 0xc) * fVar1 + (float)*in_x0);
  *(float *)(in_x8 + 1) = fVar1 * fVar3 + fVar2;
  return;
}


