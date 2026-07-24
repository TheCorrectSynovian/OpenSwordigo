/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005571bc
 * Function: Caver::Camera::ForwardDirection
 * Signature: undefined __cdecl ForwardDirection(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Camera::ForwardDirection() const */

void Caver::Camera::ForwardDirection(void)

{
  long lVar1;
  long in_x0;
  Quaternion *in_x1;
  Vector3 *in_x8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float afStack_68 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Matrix4::FromRotationQuaternion((Matrix4 *)(in_x0 + 0x1c),in_x1);
                    /* try { // try from 005571e8 to 00657213 has its CatchHandler @ 005572f0 */
  uStack_88 = _UNK_006957f8;
  local_90 = _DAT_006957f0;
  C_Matrix4Vector4Mul(afStack_68,(float *)&local_90,(float *)&local_a0);
  uStack_78 = uStack_98;
  local_80 = local_a0;
  Vector4::Normalize((Vector4 *)&local_80);
  Vector3::Vector3(in_x8,(Vector4 *)&local_80);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00557234 to 0065725b has its CatchHandler @ 005572cc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


