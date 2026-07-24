/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ba7c
 * Function: Caver::Proto::SwingComponent::Swap
 * Signature: undefined __thiscall Swap(SwingComponent * this, SwingComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SwingComponent::Swap(Caver::Proto::SwingComponent*) */

void __thiscall Caver::Proto::SwingComponent::Swap(SwingComponent *this,SwingComponent *param_1)

{
  undefined4 uVar1;
  SwingComponent SVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    SVar2 = this[0x10];
    this[0x10] = param_1[0x10];
    param_1[0x10] = SVar2;
    SVar2 = this[0x11];
    this[0x11] = param_1[0x11];
    param_1[0x11] = SVar2;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


