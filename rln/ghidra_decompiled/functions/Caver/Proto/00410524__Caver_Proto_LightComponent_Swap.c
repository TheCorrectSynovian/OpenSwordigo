/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00410524
 * Function: Caver::Proto::LightComponent::Swap
 * Signature: undefined __thiscall Swap(LightComponent * this, LightComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LightComponent::Swap(Caver::Proto::LightComponent*) */

void __thiscall Caver::Proto::LightComponent::Swap(LightComponent *this,LightComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0xc);
    *(undefined8 *)(this + 0xc) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_1 + 0xc) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x20);
                    /* catch() { ... } // from try @ 0040e9b0 with catch @ 00410554 */
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
                    /* catch() { ... } // from try @ 0040e99c with catch @ 004105ac */
  return;
}


