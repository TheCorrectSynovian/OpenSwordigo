/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00556ef8
 * Function: Caver::Camera::ScreenAABBFromWorldAABB
 * Signature: undefined __cdecl ScreenAABBFromWorldAABB(Rectangle * param_1, float param_2, Rectangle * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::ScreenAABBFromWorldAABB(Caver::Rectangle const&, float, Caver::Rectangle const&)
   const */

void Caver::Camera::ScreenAABBFromWorldAABB(Rectangle *param_1,float param_2,Rectangle *param_3)

{
  Rectangle *pRVar1;
  long lVar2;
  undefined8 *in_x2;
  Rectangle *in_x8;
  Vector2 local_d0 [8];
  Vector2 local_c8 [8];
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  pRVar1 = param_1 + 0xac;
  local_a8 = *(undefined8 *)param_3;
  local_9c = 1.0;
  local_a0 = param_2;
                    /* catch() { ... } // from try @ 00556ec4 with catch @ 00556f5c */
                    /* catch() { ... } // from try @ 00556e50 with catch @ 00556f60 */
  C_Matrix4Vector4Mul((float *)pRVar1,(float *)&local_a8,(float *)&local_98);
  Vector3::Vector3((Vector3 *)&local_b8,(Vector4 *)&local_98);
                    /* catch() { ... } // from try @ 00556e98 with catch @ 00556f70 */
  local_a0 = 1.0 / ABS(local_90._4_4_);
  local_a8 = CONCAT44((float)((ulong)local_b8 >> 0x20) * local_a0,(float)local_b8 * local_a0);
  local_a0 = local_a0 * local_b0;
                    /* try { // try from 00556f94 to 00657003 has its CatchHandler @ 0055700c */
  Vector2::Vector2(local_c8,(Vector3 *)&local_a8);
  local_98 = CONCAT44((float)((ulong)*in_x2 >> 0x20) +
                      (float)((ulong)in_x2[1] >> 0x20) * (local_c8._4_4_ * 0.5 + 0.5),
                      (float)*in_x2 + (float)in_x2[1] * (local_c8._0_4_ * 0.5 + 0.5));
  local_b8 = CONCAT44(*(undefined4 *)(param_3 + 4),*(float *)param_3 + *(float *)(param_3 + 8));
  local_ac = 0x3f800000;
  local_b0 = param_2;
  C_Matrix4Vector4Mul((float *)pRVar1,(float *)&local_b8,(float *)&local_a8);
  Vector3::Vector3((Vector3 *)local_c8,(Vector4 *)&local_a8);
                    /* try { // try from 00557004 to 00657023 has its CatchHandler @ 00556dcc */
                    /* catch() { ... } // from try @ 00556f94 with catch @ 0055700c */
                    /* catch() { ... } // from try @ 00556dfc with catch @ 00557010 */
  local_b0 = 1.0 / ABS(local_9c);
  local_b8 = CONCAT44(local_c8._4_4_ * local_b0,local_c8._0_4_ * local_b0);
  local_b0 = local_b0 * local_c0;
                    /* catch() { ... } // from try @ 005570d4 with catch @ 00557024 */
  Vector2::Vector2(local_d0,(Vector3 *)&local_b8);
                    /* try { // try from 0055703c to 00657043 has its CatchHandler @ 005570e0 */
  local_90 = CONCAT44((float)((ulong)*in_x2 >> 0x20) +
                      (float)((ulong)in_x2[1] >> 0x20) * (local_d0._4_4_ * 0.5 + 0.5),
                      (float)*in_x2 + (float)in_x2[1] * (local_d0._0_4_ * 0.5 + 0.5));
                    /* try { // try from 00557070 to 0065707b has its CatchHandler @ 00557088 */
  local_b8 = CONCAT44(*(float *)(param_3 + 4) + *(float *)(param_3 + 0xc),*(undefined4 *)param_3);
  local_ac = 0x3f800000;
  local_b0 = param_2;
  C_Matrix4Vector4Mul((float *)pRVar1,(float *)&local_b8,(float *)&local_a8);
  Vector3::Vector3((Vector3 *)local_c8,(Vector4 *)&local_a8);
                    /* catch() { ... } // from try @ 00557070 with catch @ 00557088 */
  local_b0 = 1.0 / ABS(local_9c);
  local_b8 = CONCAT44(local_c8._4_4_ * local_b0,local_c8._0_4_ * local_b0);
  local_b0 = local_b0 * local_c0;
                    /* try { // try from 005570ac to 006570d3 has its CatchHandler @ 005570dc */
  Vector2::Vector2(local_d0,(Vector3 *)&local_b8);
                    /* try { // try from 005570d4 to 006570ef has its CatchHandler @ 00557024 */
  local_88 = CONCAT44((float)((ulong)*in_x2 >> 0x20) +
                      (float)((ulong)in_x2[1] >> 0x20) * (local_d0._4_4_ * 0.5 + 0.5),
                      (float)*in_x2 + (float)in_x2[1] * (local_d0._0_4_ * 0.5 + 0.5));
                    /* catch() { ... } // from try @ 005570ac with catch @ 005570dc */
                    /* catch() { ... } // from try @ 0055703c with catch @ 005570e0 */
  local_b8 = CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20),
                      (float)*(undefined8 *)param_3 + (float)*(undefined8 *)(param_3 + 8));
                    /* try { // try from 005570f0 to 006570fb has its CatchHandler @ 005570fc */
  local_ac = 0x3f800000;
  local_b0 = param_2;
  C_Matrix4Vector4Mul((float *)pRVar1,(float *)&local_b8,(float *)&local_a8);
                    /* catch() { ... } // from try @ 005570f0 with catch @ 005570fc */
                    /* try { // try from 00557100 to 00657103 has its CatchHandler @ 00557108 */
  Vector3::Vector3((Vector3 *)local_c8,(Vector4 *)&local_a8);
                    /* catch() { ... } // from try @ 00557100 with catch @ 00557108 */
  local_b0 = 1.0 / ABS(local_9c);
  local_b8 = CONCAT44(local_c8._4_4_ * local_b0,local_c8._0_4_ * local_b0);
  local_b0 = local_b0 * local_c0;
  Vector2::Vector2(local_d0,(Vector3 *)&local_b8);
  local_80 = CONCAT44((float)((ulong)*in_x2 >> 0x20) +
                      (float)((ulong)in_x2[1] >> 0x20) * (local_d0._4_4_ * 0.5 + 0.5),
                      (float)*in_x2 + (float)in_x2[1] * (local_d0._0_4_ * 0.5 + 0.5));
  *(undefined8 *)in_x8 = local_98;
  *(undefined8 *)(in_x8 + 8) = 0;
  Rectangle::ExpandToIncludePoint(in_x8,(Vector2 *)&local_90);
                    /* try { // try from 0055716c to 006571a7 has its CatchHandler @ 0055716c
                       catch() { ... } // from try @ 0055716c with catch @ 0055716c
                       catch() { ... } // from try @ 005571b0 with catch @ 0055716c
                       catch() { ... } // from try @ 0055725c with catch @ 0055716c
                       catch() { ... } // from try @ 00557384 with catch @ 0055716c */
  Rectangle::ExpandToIncludePoint(in_x8,(Vector2 *)&local_88);
  Rectangle::ExpandToIncludePoint(in_x8,(Vector2 *)&local_80);
  if (*(long *)(lVar2 + 0x28) == local_78) {
                    /* try { // try from 005571a8 to 006571af has its CatchHandler @ 005572dc */
                    /* try { // try from 005571b0 to 006571e7 has its CatchHandler @ 0055716c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


