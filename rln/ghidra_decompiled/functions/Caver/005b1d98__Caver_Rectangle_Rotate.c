/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b1d98
 * Function: Caver::Rectangle::Rotate
 * Signature: undefined __thiscall Rotate(Rectangle * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Rectangle::Rotate(float) */

void __thiscall Caver::Rectangle::Rotate(Rectangle *this,float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (DAT_00683488 <= ABS(param_1)) {
    fVar4 = *(float *)this;
    fVar6 = *(float *)(this + 4);
    fVar2 = *(float *)(this + 8);
    fVar3 = *(float *)(this + 0xc);
    local_70 = fVar4;
    local_6c = fVar6;
    Vector2::Rotate((Vector2 *)&local_70,param_1);
                    /* catch() { ... } // from try @ 005b1e30 with catch @ 005b1e10
                       catch() { ... } // from try @ 005b1e94 with catch @ 005b1e10 */
    fVar8 = (float)NEON_fminnm(local_70,DAT_0068431c);
    fVar9 = local_70;
    if (local_70 <= DAT_00689974) {
      fVar9 = DAT_00689974;
    }
                    /* try { // try from 005b1e28 to 006b1e2f has its CatchHandler @ 005b1e60 */
    fVar10 = (float)NEON_fminnm(local_6c,DAT_0068431c);
                    /* try { // try from 005b1e30 to 006b1e67 has its CatchHandler @ 005b1e10 */
    fVar7 = local_6c;
    if (local_6c <= DAT_00689974) {
      fVar7 = DAT_00689974;
    }
    local_70 = fVar4 + fVar2;
    local_6c = fVar6;
    Vector2::Rotate((Vector2 *)&local_70,param_1);
    fVar5 = local_70;
    if (fVar8 <= local_70) {
      fVar5 = fVar8;
    }
    fVar8 = local_70;
    if (local_70 <= fVar9) {
      fVar8 = fVar9;
    }
    fVar9 = local_6c;
    if (fVar10 <= local_6c) {
      fVar9 = fVar10;
    }
                    /* catch() { ... } // from try @ 005b1e28 with catch @ 005b1e60 */
                    /* try { // try from 005b1e68 to 006b1e6f has its CatchHandler @ 005b1e7c */
    fVar10 = local_6c;
    if (local_6c <= fVar7) {
      fVar10 = fVar7;
    }
    local_70 = fVar4;
    local_6c = fVar6 + fVar3;
    Vector2::Rotate((Vector2 *)&local_70,param_1);
                    /* try { // try from 005b1e78 to 006b1e7b has its CatchHandler @ 005b1e8c */
                    /* catch() { ... } // from try @ 005b1e68 with catch @ 005b1e7c */
    fVar7 = local_70;
    if (fVar5 <= local_70) {
      fVar7 = fVar5;
    }
                    /* catch() { ... } // from try @ 005b1e78 with catch @ 005b1e8c */
    fVar5 = local_70;
    if (local_70 <= fVar8) {
      fVar5 = fVar8;
    }
                    /* try { // try from 005b1e90 to 006b1e93 has its CatchHandler @ 005b1e9c */
    fVar8 = local_6c;
                    /* try { // try from 005b1e94 to 006b1e9f has its CatchHandler @ 005b1e10 */
    if (fVar9 <= local_6c) {
      fVar8 = fVar9;
    }
                    /* catch() { ... } // from try @ 005b1e90 with catch @ 005b1e9c */
    fVar9 = local_6c;
    if (local_6c <= fVar10) {
      fVar9 = fVar10;
    }
    local_70 = fVar4 + fVar2;
    local_6c = fVar6 + fVar3;
                    /* catch() { ... } // from try @ 005b1ec0 with catch @ 005b1ea4 */
    Vector2::Rotate((Vector2 *)&local_70,param_1);
    fVar2 = local_70;
    if (fVar7 <= local_70) {
      fVar2 = fVar7;
    }
                    /* try { // try from 005b1eb8 to 006b1ebf has its CatchHandler @ 005b1edc */
    fVar3 = local_70;
    if (local_70 <= fVar5) {
      fVar3 = fVar5;
    }
    fVar4 = local_6c;
                    /* try { // try from 005b1ec0 to 006b1eef has its CatchHandler @ 005b1ea4 */
    if (fVar8 <= local_6c) {
      fVar4 = fVar8;
    }
    fVar6 = local_6c;
    if (local_6c <= fVar9) {
      fVar6 = fVar9;
    }
    *(float *)this = fVar2;
    *(float *)(this + 4) = fVar4;
    *(float *)(this + 8) = fVar3 - fVar2;
    *(float *)(this + 0xc) = fVar6 - fVar4;
  }
                    /* catch() { ... } // from try @ 005b1eb8 with catch @ 005b1edc */
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


