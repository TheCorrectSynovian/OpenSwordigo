/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573df0
 * Function: Caver::SceneObject::VelocityAtWorldPoint
 * Signature: undefined __cdecl VelocityAtWorldPoint(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::VelocityAtWorldPoint(Caver::Vector2 const&) */

void Caver::SceneObject::VelocityAtWorldPoint(Vector2 *param_1)

{
  long lVar1;
  undefined8 *in_x1;
  undefined8 *in_x8;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00573e14 to 00673e1f has its CatchHandler @ 00572e28 */
                    /* catch() { ... } // from try @ 005737cc with catch @ 00573e1c */
                    /* catch() { ... } // from try @ 00573f04 with catch @ 00573e20
                       catch() { ... } // from try @ 00574030 with catch @ 00573e20 */
  local_40 = (float)*in_x1 - (float)*(undefined8 *)(param_1 + 0x70);
  fStack_3c = (float)((ulong)*in_x1 >> 0x20) -
              (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  Vector2::Rotate((Vector2 *)&local_40,-*(float *)(param_1 + 0x80));
  if (ABS(*(float *)(param_1 + 0x84)) <= DAT_00683734) {
    fStack_3c = 0.0;
    local_40 = 0.0;
  }
  else {
                    /* try { // try from 00573e64 to 00673e67 has its CatchHandler @ 00573f6c */
    fVar4 = 1.0 / *(float *)(param_1 + 0x8c);
    fVar2 = *(float *)(param_1 + 0x8c) * *(float *)(param_1 + 0x84);
    fVar3 = local_40 * fVar4;
    if (param_1[0x90] != (Vector2)0x0) {
      fVar3 = -fVar3;
    }
    local_40 = 0.0 - fVar4 * fStack_3c * fVar2;
    fStack_3c = fVar3 * fVar2 + 0.0;
  }
                    /* try { // try from 00573ea8 to 00673eab has its CatchHandler @ 00573f34 */
  if (param_1[0x90] != (Vector2)0x0) {
    local_40 = -local_40;
  }
  Vector2::Rotate((Vector2 *)&local_40,*(float *)(param_1 + 0x80));
                    /* try { // try from 00573ecc to 00673ecf has its CatchHandler @ 00573f28 */
  *in_x8 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) + fStack_3c,
                    (float)*(undefined8 *)(param_1 + 0x68) + local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


