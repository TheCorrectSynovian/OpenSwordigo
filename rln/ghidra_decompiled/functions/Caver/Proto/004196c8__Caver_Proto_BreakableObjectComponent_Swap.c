/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004196c8
 * Function: Caver::Proto::BreakableObjectComponent::Swap
 * Signature: undefined __thiscall Swap(BreakableObjectComponent * this, BreakableObjectComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BreakableObjectComponent::Swap(Caver::Proto::BreakableObjectComponent*) */

void __thiscall
Caver::Proto::BreakableObjectComponent::Swap
          (BreakableObjectComponent *this,BreakableObjectComponent *param_1)

{
  undefined4 uVar1;
  BreakableObjectComponent BVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    BVar2 = this[0xc];
    this[0xc] = param_1[0xc];
    param_1[0xc] = BVar2;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
                    /* catch() { ... } // from try @ 004181e4 with catch @ 004196fc */
    *(undefined4 *)(param_1 + 0x14) = uVar1;
                    /* catch() { ... } // from try @ 00418188 with catch @ 00419700 */
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


