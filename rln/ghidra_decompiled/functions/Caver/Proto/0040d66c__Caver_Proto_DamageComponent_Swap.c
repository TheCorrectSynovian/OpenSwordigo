/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040d66c
 * Function: Caver::Proto::DamageComponent::Swap
 * Signature: undefined __thiscall Swap(DamageComponent * this, DamageComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DamageComponent::Swap(Caver::Proto::DamageComponent*) */

void __thiscall Caver::Proto::DamageComponent::Swap(DamageComponent *this,DamageComponent *param_1)

{
  undefined4 uVar1;
  DamageComponent DVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    DVar2 = this[0x1c];
    this[0x1c] = param_1[0x1c];
    param_1[0x1c] = DVar2;
    uVar1 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    DVar2 = this[0x28];
    this[0x28] = param_1[0x28];
    param_1[0x28] = DVar2;
    DVar2 = this[0x29];
    this[0x29] = param_1[0x29];
    param_1[0x29] = DVar2;
    uVar1 = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
                    /* try { // try from 0040d720 to 0050d76b has its CatchHandler @ 0040d720
                       catch() { ... } // from try @ 0040d720 with catch @ 0040d720
                       catch() { ... } // from try @ 0040d8c4 with catch @ 0040d720 */
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


