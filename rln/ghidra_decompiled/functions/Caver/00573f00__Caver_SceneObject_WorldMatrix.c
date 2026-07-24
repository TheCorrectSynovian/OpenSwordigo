/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573f00
 * Function: Caver::SceneObject::WorldMatrix
 * Signature: undefined __cdecl WorldMatrix(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::WorldMatrix() const */

void Caver::SceneObject::WorldMatrix(void)

{
  long lVar1;
  Matrix4 *in_x0;
  Matrix4 *in_x8;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  float local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined4 local_7c;
  float afStack_78 [16];
  long local_38;
  
                    /* try { // try from 00573f00 to 00673f03 has its CatchHandler @ 00573f20 */
                    /* try { // try from 00573f04 to 00673f5b has its CatchHandler @ 00573e20 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00573f00 with catch @ 00573f20 */
                    /* catch() { ... } // from try @ 00573ecc with catch @ 00573f28 */
  Matrix4::RotationZ(in_x0,*(float *)(in_x0 + 0x80));
                    /* catch() { ... } // from try @ 00573ea8 with catch @ 00573f34 */
  local_b8 = *(float *)(in_x0 + 0x8c);
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
                    /* try { // try from 00573f5c to 00673f63 has its CatchHandler @ 00573f68 */
  uStack_98 = 0;
  local_a0 = 0;
  uStack_84 = 0;
  local_8c = 0;
  local_7c = 0x3f800000;
  local_a4 = local_b8;
  local_90 = local_b8;
                    /* catch() { ... } // from try @ 00573f5c with catch @ 00573f68 */
  C_Matrix4Mul(afStack_78,&local_b8,(float *)in_x8);
                    /* catch() { ... } // from try @ 00573e64 with catch @ 00573f6c */
  uStack_b0 = *(undefined4 *)(in_x0 + 0x78);
  local_b8 = (float)*(undefined8 *)(in_x0 + 0x70);
  uStack_b4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x70) >> 0x20);
  Matrix4::PreTranslate(in_x8,(Vector3 *)&local_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


