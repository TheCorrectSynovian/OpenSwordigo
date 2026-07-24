/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004228a8
 * Function: Caver::Proto::SimpleGlowComponent::Swap
 * Signature: undefined __thiscall Swap(SimpleGlowComponent * this, SimpleGlowComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SimpleGlowComponent::Swap(Caver::Proto::SimpleGlowComponent*) */

void __thiscall
Caver::Proto::SimpleGlowComponent::Swap(SimpleGlowComponent *this,SimpleGlowComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 00421f44 with catch @ 004228dc */
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
                    /* try { // try from 004228f0 to 005229d3 has its CatchHandler @ 004228f0
                       catch() { ... } // from try @ 004228f0 with catch @ 004228f0
                       catch() { ... } // from try @ 00422a28 with catch @ 004228f0
                       catch() { ... } // from try @ 00422b6c with catch @ 004228f0 */
    uVar1 = *(undefined4 *)(this + 0x30);
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x34);
    *(undefined8 *)(this + 0x34) = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(param_1 + 0x34) = uVar2;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


