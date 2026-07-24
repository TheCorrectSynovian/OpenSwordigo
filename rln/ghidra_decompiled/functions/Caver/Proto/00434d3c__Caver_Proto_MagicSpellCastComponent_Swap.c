/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00434d3c
 * Function: Caver::Proto::MagicSpellCastComponent::Swap
 * Signature: undefined __thiscall Swap(MagicSpellCastComponent * this, MagicSpellCastComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MagicSpellCastComponent::Swap(Caver::Proto::MagicSpellCastComponent*) */

void __thiscall
Caver::Proto::MagicSpellCastComponent::Swap
          (MagicSpellCastComponent *this,MagicSpellCastComponent *param_1)

{
  undefined4 uVar1;
  
                    /* try { // try from 00434d40 to 00534d53 has its CatchHandler @ 00435320 */
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 00434d60 to 00534d6b has its CatchHandler @ 004352b4 */
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


