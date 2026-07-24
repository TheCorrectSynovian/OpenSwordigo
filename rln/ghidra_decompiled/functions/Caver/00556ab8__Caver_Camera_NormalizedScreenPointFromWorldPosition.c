/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00556ab8
 * Function: Caver::Camera::NormalizedScreenPointFromWorldPosition
 * Signature: undefined __cdecl NormalizedScreenPointFromWorldPosition(Vector3 * param_1, float * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::NormalizedScreenPointFromWorldPosition(Caver::Vector3 const&, float*) const */

void Caver::Camera::NormalizedScreenPointFromWorldPosition(Vector3 *param_1,float *param_2)

{
  long lVar1;
  float *in_x2;
  Vector2 *in_x8;
  float fVar2;
  Vector3 local_68 [8];
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined4 uStack_4c;
  Vector4 aVStack_48 [12];
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined8 *)param_2;
  local_50 = param_2[2];
  uStack_4c = 0x3f800000;
  C_Matrix4Vector4Mul((float *)(param_1 + 0xac),(float *)&local_58,(float *)aVStack_48);
  Vector3::Vector3(local_68,aVStack_48);
                    /* catch() { ... } // from try @ 00556a84 with catch @ 00556b18 */
  fVar2 = 1.0 / ABS(local_3c);
  local_50 = fVar2 * local_60;
  local_58 = CONCAT44(local_68._4_4_ * fVar2,local_68._0_4_ * fVar2);
  if (in_x2 != (float *)0x0) {
    *in_x2 = local_50;
  }
  Vector2::Vector2(in_x8,(Vector3 *)&local_58);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


