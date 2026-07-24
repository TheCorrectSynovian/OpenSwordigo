/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00424254
 * Function: Caver::Proto::WalkingMonsterControllerComponent::Clear
 * Signature: undefined __thiscall Clear(WalkingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WalkingMonsterControllerComponent::Clear() */

void __thiscall
Caver::Proto::WalkingMonsterControllerComponent::Clear(WalkingMonsterControllerComponent *this)

{
                    /* try { // try from 00424258 to 00524273 has its CatchHandler @ 004240e4 */
  if (this[0x10] != (WalkingMonsterControllerComponent)0x0) {
                    /* catch() { ... } // from try @ 00424230 with catch @ 0042425c */
    *(undefined4 *)(this + 0xc) = 0;
  }
                    /* catch() { ... } // from try @ 004241d4 with catch @ 00424260 */
  *(undefined4 *)(this + 0x10) = 0;
  return;
}


