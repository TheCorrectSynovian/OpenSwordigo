/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004238b4
 * Function: Caver::Proto::ParticleFieldComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(ParticleFieldComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ParticleFieldComponent::GetTypeName() const */

void __thiscall Caver::Proto::ParticleFieldComponent::GetTypeName(ParticleFieldComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 004238bc to 005238c7 has its CatchHandler @ 00423948 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* try { // try from 004238e8 to 005238eb has its CatchHandler @ 00423944 */
                    /* try { // try from 004238ec to 0052396b has its CatchHandler @ 00423818 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


