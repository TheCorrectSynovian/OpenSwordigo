/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ed5c
 * Function: Caver::Proto::CollectableItemComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::GetTypeName() const */

void __thiscall Caver::Proto::CollectableItemComponent::GetTypeName(CollectableItemComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
                    /* try { // try from 0042ed70 to 0052ee6f has its CatchHandler @ 0042ecf8 */
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


