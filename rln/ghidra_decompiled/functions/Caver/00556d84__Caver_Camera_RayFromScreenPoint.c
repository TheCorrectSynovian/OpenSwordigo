/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00556d84
 * Function: Caver::Camera::RayFromScreenPoint
 * Signature: undefined __cdecl RayFromScreenPoint(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Camera::RayFromScreenPoint(Caver::Vector2 const&) const */

void Caver::Camera::RayFromScreenPoint(Vector2 *param_1)

{
  long lVar1;
  ulong uVar2;
  float *in_x1;
  Quaternion *extraout_x1;
  undefined8 *in_x8;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_88;
  float fStack_84;
  undefined8 local_80;
  long local_48;
  
                    /* try { // try from 00556d90 to 00656db7 has its CatchHandler @ 00556dc0 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_88 = *in_x1;
  fStack_84 = in_x1[1];
                    /* try { // try from 00556db8 to 00656dc3 has its CatchHandler @ 00556bac */
  if (param_1[0xec] == (Vector2)0x0) {
    local_80 = DAT_006957e0;
    C_Matrix4Vector4Mul((float *)(param_1 + 0x180),&local_88,(float *)&local_a0);
    Vector3::Vector3((Vector3 *)&local_b0,(Vector4 *)&local_a0);
                    /* try { // try from 00556e98 to 00656ea3 has its CatchHandler @ 00556f70 */
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    fVar5 = *(float *)(param_1 + 0x18);
    fVar3 = 1.0 / uStack_98._4_4_;
    *in_x8 = uVar4;
    *(float *)(in_x8 + 1) = fVar5;
                    /* try { // try from 00556ec4 to 00656eeb has its CatchHandler @ 00556f5c */
    *(ulong *)((long)in_x8 + 0xc) =
         CONCAT44((float)((ulong)local_b0 >> 0x20) * fVar3 - (float)((ulong)uVar4 >> 0x20),
                  (float)local_b0 * fVar3 - (float)uVar4);
    *(float *)((long)in_x8 + 0x14) = fVar3 * (float)uStack_a8 - fVar5;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00556d90 with catch @ 00556dc0
                        */
                    /* try { // try from 00556dcc to 00656dfb has its CatchHandler @ 00556dcc
                       catch() { ... } // from try @ 00556dcc with catch @ 00556dcc
                       catch() { ... } // from try @ 00556e00 with catch @ 00556dcc
                       catch() { ... } // from try @ 00556eec with catch @ 00556dcc
                       catch() { ... } // from try @ 00557004 with catch @ 00556dcc */
    local_80 = DAT_006840e0;
    C_Matrix4Vector4Mul((float *)(param_1 + 0x180),&local_88,(float *)&local_a0);
    Vector3::Vector3((Vector3 *)&local_b0,(Vector4 *)&local_a0);
    fVar3 = 1.0 / uStack_98._4_4_;
                    /* try { // try from 00556dfc to 00656dff has its CatchHandler @ 00557010 */
    fVar5 = (float)local_b0;
                    /* try { // try from 00556e00 to 00656e4f has its CatchHandler @ 00556dcc */
    uVar2 = (ulong)local_b0 >> 0x20;
    fVar6 = fVar3 * (float)uStack_a8;
    Matrix4::FromRotationQuaternion((Matrix4 *)(param_1 + 0x1c),extraout_x1);
    uStack_a8 = _UNK_006957f8;
    local_b0 = _DAT_006957f0;
    C_Matrix4Vector4Mul(&local_88,(float *)&local_b0,(float *)&local_c0);
    uStack_98 = uStack_b8;
    local_a0 = local_c0;
    Vector4::Normalize((Vector4 *)&local_a0);
    Vector3::Vector3((Vector3 *)&local_d0,(Vector4 *)&local_a0);
                    /* try { // try from 00556e50 to 00656e77 has its CatchHandler @ 00556f60 */
    *in_x8 = CONCAT44((float)uVar2 * fVar3,fVar5 * fVar3);
    *(float *)(in_x8 + 1) = fVar6;
    *(undefined8 *)((long)in_x8 + 0xc) = local_d0;
    *(undefined4 *)((long)in_x8 + 0x14) = local_c8;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00556eec to 00656f93 has its CatchHandler @ 00556dcc */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


