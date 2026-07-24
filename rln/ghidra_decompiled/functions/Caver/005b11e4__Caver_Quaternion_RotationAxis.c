/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b11e4
 * Function: Caver::Quaternion::RotationAxis
 * Signature: undefined __cdecl RotationAxis(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Quaternion::RotationAxis() const */

void Caver::Quaternion::RotationAxis(void)

{
  float *in_x0;
  undefined8 *in_x8;
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  dVar3 = asin((double)*in_x0);
  fVar1 = (float)dVar3 + (float)dVar3;
  fVar4 = in_x0[3];
  fVar2 = 1.0;
  if (DAT_00697350 <= ABS(fVar1)) {
    fVar2 = fVar1;
  }
  *in_x8 = CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 1) >> 0x20) / fVar2,
                    (float)*(undefined8 *)(in_x0 + 1) / fVar2);
  *(float *)(in_x8 + 1) = fVar4 / fVar2;
  return;
}


