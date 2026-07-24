/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041f344
 * Function: Caver::Proto::ParticleEmitterComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(ParticleEmitterComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleEmitterComponent::GetTypeName() const */

void __thiscall Caver::Proto::ParticleEmitterComponent::GetTypeName(ParticleEmitterComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0041f354 to 0051f363 has its CatchHandler @ 0041f4ec */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0041f364 to 0051f3af has its CatchHandler @ 0041f2ec */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


