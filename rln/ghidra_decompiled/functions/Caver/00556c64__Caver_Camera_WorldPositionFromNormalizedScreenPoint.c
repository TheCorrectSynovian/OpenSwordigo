/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00556c64
 * Function: Caver::Camera::WorldPositionFromNormalizedScreenPoint
 * Signature: undefined __cdecl WorldPositionFromNormalizedScreenPoint(Vector2 param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::WorldPositionFromNormalizedScreenPoint(Caver::Vector2, float) const */

void Caver::Camera::WorldPositionFromNormalizedScreenPoint
               (undefined8 *param_1,undefined4 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  Vector3 local_58 [8];
  float local_50;
  Vector4 aVStack_48 [12];
  float local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00556c80 to 00656ca7 has its CatchHandler @ 00556d6c */
  local_38 = *param_4;
  local_2c = 0x3f800000;
  local_30 = param_2;
  C_Matrix4Vector4Mul((float *)(param_3 + 0x180),(float *)&local_38,(float *)aVStack_48);
                    /* try { // try from 00556ca8 to 00656d8f has its CatchHandler @ 00556bac */
  Vector3::Vector3(local_58,aVStack_48);
  local_3c = 1.0 / local_3c;
  *param_1 = CONCAT44(local_58._4_4_ * local_3c,local_58._0_4_ * local_3c);
  *(float *)(param_1 + 1) = local_3c * local_50;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


