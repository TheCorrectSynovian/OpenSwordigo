/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416b50
 * Function: Caver::Proto::DoorControllerComponent::Swap
 * Signature: undefined __thiscall Swap(DoorControllerComponent * this, DoorControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DoorControllerComponent::Swap(Caver::Proto::DoorControllerComponent*) */

void __thiscall
Caver::Proto::DoorControllerComponent::Swap
          (DoorControllerComponent *this,DoorControllerComponent *param_1)

{
  undefined4 uVar1;
  DoorControllerComponent DVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
                    /* try { // try from 00416b60 to 00516b67 has its CatchHandler @ 00416c7c */
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
                    /* try { // try from 00416b84 to 00516b8b has its CatchHandler @ 00416c4c */
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    DVar2 = this[0x1c];
    this[0x1c] = param_1[0x1c];
    param_1[0x1c] = DVar2;
                    /* try { // try from 00416ba8 to 00516baf has its CatchHandler @ 00416c7c */
    uVar1 = *(undefined4 *)(this + 0x20);
                    /* try { // try from 00416bb0 to 00516bdb has its CatchHandler @ 0041668c */
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
                    /* catch() { ... } // from try @ 00416aac with catch @ 00416bb8 */
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


