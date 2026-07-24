/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042deec
 * Function: Caver::Proto::SpawnPointComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(SpawnPointComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SpawnPointComponent::GetTypeName() const */

void __thiscall Caver::Proto::SpawnPointComponent::GetTypeName(SpawnPointComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0042def0 to 0052def7 has its CatchHandler @ 0042dfe8 */
                    /* try { // try from 0042def8 to 0052e057 has its CatchHandler @ 0042de24 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


