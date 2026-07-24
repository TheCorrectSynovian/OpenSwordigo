/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005afc30
 * Function: Caver::OrientedRect::OBFromTransformedRectangle
 * Signature: undefined __cdecl OBFromTransformedRectangle(Rectangle * param_1, Vector2 * param_2, float param_3, float param_4, Vector2 * param_5, float param_6, float param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OrientedRect::OBFromTransformedRectangle(Caver::Rectangle const&, Caver::Vector2 const&,
   float, float, Caver::Vector2 const&, float, float) */

void Caver::OrientedRect::OBFromTransformedRectangle
               (Rectangle *param_1,Vector2 *param_2,float param_3,float param_4,Vector2 *param_5,
               float param_6,float param_7)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 *in_x8;
  float fVar5;
  Vector2 aVStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 005afc64 to 006afd13 has its CatchHandler @ 005af808 */
  local_78 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * 0.5,
                      (float)*(undefined8 *)param_1 + (float)*(undefined8 *)(param_1 + 8) * 0.5);
  Vector2::Transformed((Vector2 *)&local_78,param_3,param_4);
  Vector2::InverseTransformed(aVStack_80,param_6,param_7);
  uVar3 = _DAT_00683948;
  fVar2 = DAT_00683488;
  *in_x8 = local_70;
  in_x8[1] = uVar3;
  if (ABS(param_3 - param_6) <= fVar2) {
    fVar5 = 0.0;
    uVar4 = 0x3f800000;
  }
  else {
    local_70 = uVar3;
                    /* catch() { ... } // from try @ 005afaf0 with catch @ 005afcec */
    Vector2::Rotate((Vector2 *)&local_70,param_3 - param_6);
                    /* catch() { ... } // from try @ 005afc14 with catch @ 005afcf0 */
    *(undefined4 *)(in_x8 + 1) = (undefined4)local_70;
    *(float *)((long)in_x8 + 0xc) = local_70._4_4_;
    uVar4 = (undefined4)local_70;
    fVar5 = local_70._4_4_;
  }
  *(undefined4 *)((long)in_x8 + 0x14) = uVar4;
                    /* try { // try from 005afd14 to 006afddf has its CatchHandler @ 005afe9c */
  *(float *)(in_x8 + 2) = -fVar5;
  fVar5 = param_4 / param_7;
  if (ABS(param_7 + -1.0) <= fVar2) {
    fVar5 = param_4;
  }
  in_x8[3] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * 0.5 * fVar5,
                      (float)*(undefined8 *)(param_1 + 8) * 0.5 * fVar5);
                    /* catch() { ... } // from try @ 005afb20 with catch @ 005afd40 */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


