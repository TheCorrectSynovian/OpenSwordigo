/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573c50
 * Function: Caver::SceneObject::LocalPointFromWorldPoint
 * Signature: undefined __cdecl LocalPointFromWorldPoint(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::LocalPointFromWorldPoint(Caver::Vector2 const&) */

void Caver::SceneObject::LocalPointFromWorldPoint(Vector2 *param_1)

{
  long lVar1;
  undefined8 *in_x1;
  float *in_x8;
  float fVar2;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = (float)*in_x1 - (float)*(undefined8 *)(param_1 + 0x70);
  fStack_3c = (float)((ulong)*in_x1 >> 0x20) -
              (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  Vector2::Rotate((Vector2 *)&local_40,-*(float *)(param_1 + 0x80));
  fVar2 = local_40 * (1.0 / *(float *)(param_1 + 0x8c));
  *(ulong *)in_x8 = CONCAT44(fStack_3c * (1.0 / *(float *)(param_1 + 0x8c)),fVar2);
  if (param_1[0x90] != (Vector2)0x0) {
    *in_x8 = -fVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


