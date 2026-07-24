/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041dc50
 * Function: Caver::Proto::ParticleEmitter::GetTypeName
 * Signature: undefined __thiscall GetTypeName(ParticleEmitter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitter::GetTypeName() const */

void __thiscall Caver::Proto::ParticleEmitter::GetTypeName(ParticleEmitter *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 0041dbec with catch @ 0041dc94 */
                    /* catch() { ... } // from try @ 0041dc04 with catch @ 0041dc98 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


