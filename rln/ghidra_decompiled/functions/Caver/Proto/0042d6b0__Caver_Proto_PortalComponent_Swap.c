/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042d6b0
 * Function: Caver::Proto::PortalComponent::Swap
 * Signature: undefined __thiscall Swap(PortalComponent * this, PortalComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PortalComponent::Swap(Caver::Proto::PortalComponent*) */

void __thiscall Caver::Proto::PortalComponent::Swap(PortalComponent *this,PortalComponent *param_1)

{
  undefined4 uVar1;
  PortalComponent PVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    PVar2 = this[0x20];
    this[0x20] = param_1[0x20];
    param_1[0x20] = PVar2;
    uVar1 = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


