/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042cc38
 * Function: Caver::Proto::WeaponTrailComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(WeaponTrailComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WeaponTrailComponent::GetTypeName() const */

void __thiscall Caver::Proto::WeaponTrailComponent::GetTypeName(WeaponTrailComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 0042cc14 with catch @ 0042cc4c */
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042cd60 with catch @ 0042cc5c
                       catch(type#1 @ 00000000) { ... } // from try @ 0042cf48 with catch @ 0042cc5c
                        */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


