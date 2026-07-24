/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005573a0
 * Function: Caver::Camera::AABBForZRange
 * Signature: undefined __cdecl AABBForZRange(float param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Camera::AABBForZRange(float, float) */

void Caver::Camera::AABBForZRange(float param_1,float param_2)

{
  long lVar1;
  Vector2 *in_x0;
  Rectangle *in_x8;
  Vector2 aVStack_b8 [8];
  Vector3 aVStack_b0 [16];
  undefined8 local_a0 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
                    /* try { // try from 005573a8 to 006573af has its CatchHandler @ 0055744c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005573dc to 006573e7 has its CatchHandler @ 005573f4 */
                    /* catch() { ... } // from try @ 005573dc with catch @ 005573f4 */
  uStack_78 = _UNK_00695808;
  local_80 = _DAT_00695800;
  uStack_68 = _UNK_00695818;
  uStack_70 = _DAT_00695810;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  RayFromScreenPoint(in_x0);
  Ray3::IntersectionWithXYPlane(param_1);
                    /* try { // try from 00557418 to 0065743f has its CatchHandler @ 00557448 */
  Vector2::Vector2((Vector2 *)local_a0,aVStack_b0);
  Ray3::IntersectionWithXYPlane(param_2);
  Vector2::Vector2(aVStack_b8,aVStack_b0);
                    /* try { // try from 00557440 to 0065745b has its CatchHandler @ 00557390 */
                    /* catch() { ... } // from try @ 00557418 with catch @ 00557448 */
  *(undefined8 *)in_x8 = local_a0[0];
  *(undefined8 *)(in_x8 + 8) = 0;
                    /* catch() { ... } // from try @ 005573a8 with catch @ 0055744c */
  Rectangle::ExpandToIncludePoint(in_x8,aVStack_b8);
                    /* try { // try from 0055745c to 00657467 has its CatchHandler @ 00557468 */
  RayFromScreenPoint(in_x0);
                    /* catch() { ... } // from try @ 0055745c with catch @ 00557468 */
                    /* try { // try from 0055746c to 0065746f has its CatchHandler @ 00557474 */
  Ray3::IntersectionWithXYPlane(param_1);
                    /* catch() { ... } // from try @ 0055746c with catch @ 00557474 */
                    /* try { // try from 00557478 to 006574eb has its CatchHandler @ 00557478
                       catch() { ... } // from try @ 00557478 with catch @ 00557478
                       catch() { ... } // from try @ 00557518 with catch @ 00557478
                       catch() { ... } // from try @ 00557540 with catch @ 00557478
                       catch() { ... } // from try @ 005575d8 with catch @ 00557478
                       catch() { ... } // from try @ 005577b8 with catch @ 00557478 */
  Vector2::Vector2((Vector2 *)local_a0,aVStack_b0);
  Ray3::IntersectionWithXYPlane(param_2);
  Vector2::Vector2(aVStack_b8,aVStack_b0);
  Rectangle::ExpandToIncludePoint(in_x8,(Vector2 *)local_a0);
  Rectangle::ExpandToIncludePoint(in_x8,aVStack_b8);
  RayFromScreenPoint(in_x0);
  Ray3::IntersectionWithXYPlane(param_1);
  Vector2::Vector2((Vector2 *)local_a0,aVStack_b0);
  Ray3::IntersectionWithXYPlane(param_2);
                    /* try { // try from 005574ec to 006574ff has its CatchHandler @ 005576fc */
  Vector2::Vector2(aVStack_b8,aVStack_b0);
                    /* try { // try from 00557500 to 00657517 has its CatchHandler @ 0055768c */
  Rectangle::ExpandToIncludePoint(in_x8,(Vector2 *)local_a0);
  Rectangle::ExpandToIncludePoint(in_x8,aVStack_b8);
                    /* try { // try from 00557518 to 0065753b has its CatchHandler @ 00557478 */
  RayFromScreenPoint(in_x0);
  Ray3::IntersectionWithXYPlane(param_1);
  Vector2::Vector2((Vector2 *)local_a0,aVStack_b0);
                    /* try { // try from 0055753c to 0065753f has its CatchHandler @ 00557710 */
                    /* try { // try from 00557540 to 00657563 has its CatchHandler @ 00557478 */
  Ray3::IntersectionWithXYPlane(param_2);
  Vector2::Vector2(aVStack_b8,aVStack_b0);
  Rectangle::ExpandToIncludePoint(in_x8,(Vector2 *)local_a0);
                    /* try { // try from 00557564 to 0065758f has its CatchHandler @ 00557724 */
  Rectangle::ExpandToIncludePoint(in_x8,aVStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


