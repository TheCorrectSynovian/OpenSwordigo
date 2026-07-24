/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00436d9c
 * Function: Caver::Proto::MagicHookshotComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(MagicHookshotComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicHookshotComponent::GetTypeName() const */

void __thiscall Caver::Proto::MagicHookshotComponent::GetTypeName(MagicHookshotComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00436dac to 00536e57 has its CatchHandler @ 00436dac
                       catch() { ... } // from try @ 00436dac with catch @ 00436dac
                       catch() { ... } // from try @ 00436e64 with catch @ 00436dac
                       catch() { ... } // from try @ 00436eb0 with catch @ 00436dac
                       catch() { ... } // from try @ 00436f1c with catch @ 00436dac
                       catch() { ... } // from try @ 00437078 with catch @ 00436dac */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


