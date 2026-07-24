/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00421b88
 * Function: Caver::Proto::FireEmitterComponent::Swap
 * Signature: undefined __thiscall Swap(FireEmitterComponent * this, FireEmitterComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireEmitterComponent::Swap(Caver::Proto::FireEmitterComponent*) */

void __thiscall
Caver::Proto::FireEmitterComponent::Swap(FireEmitterComponent *this,FireEmitterComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00421bd4 with catch @ 00421b88 */
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
                    /* try { // try from 00421bac to 00521bbf has its CatchHandler @ 00421cc4 */
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
                    /* try { // try from 00421bc4 to 00521bd3 has its CatchHandler @ 00421c54 */
    uVar2 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* try { // try from 00421bd4 to 00521cc7 has its CatchHandler @ 00421b88 */
    uVar2 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x38);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


