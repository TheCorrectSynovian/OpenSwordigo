/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005529e0
 * Function: Caver::FountainParticleEmitter::TitleForParameter
 * Signature: undefined __cdecl TitleForParameter(uint param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::FountainParticleEmitter::TitleForParameter(unsigned int) */

void Caver::FountainParticleEmitter::TitleForParameter(uint param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  uint in_w1;
  undefined8 in_x8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
                    /* try { // try from 005529e0 to 006529e7 has its CatchHandler @ 00552b0c */
                    /* try { // try from 005529e8 to 006529f3 has its CatchHandler @ 00552abc */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*PTR_titles_007e7aa8 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_titles_007e7aa8);
    puVar2 = PTR_titles_007e49a8;
    if (iVar3 != 0) {
      FUN_00666bb8(PTR_titles_007e49a8,"directionAngle",auStack_50);
      FUN_00666bb8(puVar2 + 8,"directionSpread",auStack_58);
      FUN_00666bb8(puVar2 + 0x10,"positionSpreadDir",auStack_60);
                    /* catch() { ... } // from try @ 005529e8 with catch @ 00552abc */
      FUN_00666bb8(puVar2 + 0x18,"positionSpreadX",auStack_68);
                    /* try { // try from 00552ae0 to 00652b57 has its CatchHandler @ 00552b60 */
      FUN_00666bb8(puVar2 + 0x20,"positionSpreadY",auStack_70);
      FUN_00666bb8(puVar2 + 0x28,"speed",auStack_78);
                    /* catch() { ... } // from try @ 005529e0 with catch @ 00552b0c
                       catch() { ... } // from try @ 00552a14 with catch @ 00552b0c */
      FUN_00666bb8(puVar2 + 0x30,"speedVariance",auStack_80);
      FUN_00666bb8(puVar2 + 0x38,"velocityTrackFactor",auStack_88);
      FUN_00666bb8(puVar2 + 0x40,"particleScale",auStack_90);
                    /* try { // try from 00552b58 to 00652b63 has its CatchHandler @ 0055299c */
                    /* catch() { ... } // from try @ 00552ae0 with catch @ 00552b60 */
      FUN_00666bb8(puVar2 + 0x48,"initialParticleSize",auStack_98);
                    /* try { // try from 00552b64 to 00652c57 has its CatchHandler @ 00552b64
                       catch() { ... } // from try @ 00552b64 with catch @ 00552b64
                       catch() { ... } // from try @ 00552d64 with catch @ 00552b64
                       catch() { ... } // from try @ 0055302c with catch @ 00552b64 */
      FUN_00666bb8(puVar2 + 0x50,"finalParticleSize",auStack_a0);
      FUN_00666bb8(puVar2 + 0x58,&DAT_00689558,auStack_a8);
      FUN_00666bb8(puVar2 + 0x60,"particleAge",auStack_b0);
      FUN_00666bb8(puVar2 + 0x68,"ageVariance",auStack_b8);
      FUN_00666bb8(puVar2 + 0x70,"scaleVariance",auStack_c0);
      __cxa_atexit(FUN_0030b3d4,0,&PTR_LOOP_007e8000);
      __cxa_guard_release(PTR_titles_007e7aa8);
    }
  }
                    /* try { // try from 00552a14 to 00652a3b has its CatchHandler @ 00552b0c */
  FUN_0066a528(in_x8,PTR_titles_007e49a8 + (ulong)in_w1 * 8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* try { // try from 00552a3c to 00652adf has its CatchHandler @ 0055299c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


