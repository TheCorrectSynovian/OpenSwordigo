/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047d1f0
 * Function: Caver::Achievement::Achievement
 * Signature: undefined __thiscall Achievement(Achievement * this, Achievement * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Achievement::Achievement(Caver::Achievement const&) */

void __thiscall Caver::Achievement::Achievement(Achievement *this,Achievement *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0066a528();
  FUN_0066a528(this + 8,param_1 + 8);
                    /* catch() { ... } // from try @ 0047cb74 with catch @ 0047d230 */
                    /* catch() { ... } // from try @ 0047ceec with catch @ 0047d234 */
                    /* catch() { ... } // from try @ 0047cea4 with catch @ 0047d238 */
                    /* catch() { ... } // from try @ 0047cb88 with catch @ 0047d23c */
  FUN_0066a528(this + 0x10,param_1 + 0x10);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  FUN_0066a528(this + 0x20,param_1 + 0x20);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 0047cb18 with catch @ 0047d274 */
                    /* catch() { ... } // from try @ 0047c9fc with catch @ 0047d278 */
                    /* catch() { ... } // from try @ 0047cb08 with catch @ 0047d27c */
                    /* catch() { ... } // from try @ 0047caf0 with catch @ 0047d280 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0047d078 with catch @ 0047d284 */
  __stack_chk_fail();
}


