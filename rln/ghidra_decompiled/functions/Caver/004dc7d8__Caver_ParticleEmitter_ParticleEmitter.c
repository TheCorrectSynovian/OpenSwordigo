/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dc7d8
 * Function: Caver::ParticleEmitter::ParticleEmitter
 * Signature: undefined __thiscall ParticleEmitter(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ParticleEmitter::ParticleEmitter() */

void __thiscall Caver::ParticleEmitter::ParticleEmitter(ParticleEmitter *this)

{
  long lVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  uStack_48 = _UNK_00689608;
  local_50 = _DAT_00689600;
                    /* try { // try from 004dc7ec to 005dc7f3 has its CatchHandler @ 004dc7fc */
  lVar1 = tpidr_el0;
                    /* try { // try from 004dc7f4 to 005dc803 has its CatchHandler @ 004dc700 */
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 004dc7ec with catch @ 004dc7fc */
                    /* catch() { ... } // from try @ 004dc7c0 with catch @ 004dc800 */
                    /* try { // try from 004dc804 to 005dc84b has its CatchHandler @ 004dc804
                       catch() { ... } // from try @ 004dc804 with catch @ 004dc804
                       catch() { ... } // from try @ 004dc868 with catch @ 004dc804
                       catch() { ... } // from try @ 004dc8b0 with catch @ 004dc804
                       catch() { ... } // from try @ 004dcaec with catch @ 004dc804 */
  *(undefined **)this = PTR_vtable_007e5838 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (ParticleEmitter)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x60) = 0x3f800000;
  *(undefined2 *)(this + 100) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
                    /* try { // try from 004dc84c to 005dc867 has its CatchHandler @ 004dcae0 */
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0x3f800000;
  FloatColor::GetHSLComponents((FloatColor *)&local_50,(float *)(this + 0xa8));
  *(undefined4 *)(this + 0xb4) = uStack_48._4_4_;
                    /* try { // try from 004dc868 to 005dc8ab has its CatchHandler @ 004dc804 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


