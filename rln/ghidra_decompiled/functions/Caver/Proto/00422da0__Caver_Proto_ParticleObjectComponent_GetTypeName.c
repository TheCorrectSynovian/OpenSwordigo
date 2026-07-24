/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00422da0
 * Function: Caver::Proto::ParticleObjectComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(ParticleObjectComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleObjectComponent::GetTypeName() const */

void __thiscall Caver::Proto::ParticleObjectComponent::GetTypeName(ParticleObjectComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


