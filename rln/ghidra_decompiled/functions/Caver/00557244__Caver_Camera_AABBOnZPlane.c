/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00557244
 * Function: Caver::Camera::AABBOnZPlane
 * Signature: undefined __cdecl AABBOnZPlane(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Camera::AABBOnZPlane(float) */

void Caver::Camera::AABBOnZPlane(float param_1)

{
  long lVar1;
  Vector2 *in_x0;
  Rectangle *in_x8;
  Vector3 aVStack_a0 [16];
  undefined8 local_90 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_48;
  
                    /* try { // try from 0055725c to 00657313 has its CatchHandler @ 0055716c */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uStack_68 = _UNK_00695808;
  local_70 = _DAT_00695800;
  uStack_58 = _UNK_00695818;
  uStack_60 = _DAT_00695810;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  RayFromScreenPoint(in_x0);
  Ray3::IntersectionWithXYPlane(param_1);
  Vector2::Vector2((Vector2 *)local_90,aVStack_a0);
                    /* catch() { ... } // from try @ 00557234 with catch @ 005572cc */
  *(undefined8 *)in_x8 = local_90[0];
  *(undefined8 *)(in_x8 + 8) = 0;
  RayFromScreenPoint(in_x0);
                    /* catch() { ... } // from try @ 005571a8 with catch @ 005572dc */
  Ray3::IntersectionWithXYPlane(param_1);
                    /* catch() { ... } // from try @ 005571e8 with catch @ 005572f0 */
  Vector2::Vector2((Vector2 *)local_90,aVStack_a0);
  Rectangle::ExpandToIncludePoint(in_x8,(Vector2 *)local_90);
  RayFromScreenPoint(in_x0);
                    /* try { // try from 00557314 to 00657383 has its CatchHandler @ 0055738c */
  Ray3::IntersectionWithXYPlane(param_1);
  Vector2::Vector2((Vector2 *)local_90,aVStack_a0);
  Rectangle::ExpandToIncludePoint(in_x8,(Vector2 *)local_90);
  RayFromScreenPoint(in_x0);
  Ray3::IntersectionWithXYPlane(param_1);
  Vector2::Vector2((Vector2 *)local_90,aVStack_a0);
  Rectangle::ExpandToIncludePoint(in_x8,(Vector2 *)local_90);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00557384 to 0065738f has its CatchHandler @ 0055716c */
                    /* catch() { ... } // from try @ 00557314 with catch @ 0055738c */
                    /* catch() { ... } // from try @ 00557440 with catch @ 00557390 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


