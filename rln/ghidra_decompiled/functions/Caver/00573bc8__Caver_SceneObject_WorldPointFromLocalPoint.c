/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573bc8
 * Function: Caver::SceneObject::WorldPointFromLocalPoint
 * Signature: undefined __cdecl WorldPointFromLocalPoint(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::WorldPointFromLocalPoint(Caver::Vector2 const&) */

void Caver::SceneObject::WorldPointFromLocalPoint(Vector2 *param_1)

{
  long lVar1;
  float *in_x1;
  undefined8 *in_x8;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = *in_x1;
  fStack_3c = in_x1[1];
  if (param_1[0x90] != (Vector2)0x0) {
    local_40 = -local_40;
  }
                    /* catch() { ... } // from try @ 00573254 with catch @ 00573c00
                       catch() { ... } // from try @ 005732f8 with catch @ 00573c00 */
  Vector2::Rotate((Vector2 *)&local_40,*(float *)(param_1 + 0x80));
                    /* catch() { ... } // from try @ 00572f04 with catch @ 00573c10
                       catch() { ... } // from try @ 00572f18 with catch @ 00573c10
                       catch() { ... } // from try @ 00573384 with catch @ 00573c10 */
  *in_x8 = CONCAT44(fStack_3c * *(float *)(param_1 + 0x8c) +
                    (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20),
                    local_40 * *(float *)(param_1 + 0x8c) + (float)*(undefined8 *)(param_1 + 0x70));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


