/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00433d24
 * Function: Caver::Proto::MagicExplosionComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(MagicExplosionComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicExplosionComponent::GetTypeName() const */

void __thiscall Caver::Proto::MagicExplosionComponent::GetTypeName(MagicExplosionComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* catch() { ... } // from try @ 00433ae8 with catch @ 00433d58 */
                    /* catch() { ... } // from try @ 00433b04 with catch @ 00433d60 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


