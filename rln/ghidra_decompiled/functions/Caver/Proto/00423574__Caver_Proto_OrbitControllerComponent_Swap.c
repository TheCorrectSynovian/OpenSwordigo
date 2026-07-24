/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00423574
 * Function: Caver::Proto::OrbitControllerComponent::Swap
 * Signature: undefined __thiscall Swap(OrbitControllerComponent * this, OrbitControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::Swap(Caver::Proto::OrbitControllerComponent*) */

void __thiscall
Caver::Proto::OrbitControllerComponent::Swap
          (OrbitControllerComponent *this,OrbitControllerComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
                    /* try { // try from 00423580 to 00523583 has its CatchHandler @ 004235a0 */
    uVar2 = *(undefined8 *)(this + 0x10);
                    /* try { // try from 00423584 to 005235d7 has its CatchHandler @ 00423388 */
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
                    /* catch() { ... } // from try @ 00423580 with catch @ 004235a0 */
    uVar2 = *(undefined8 *)(this + 0x1c);
    *(undefined8 *)(this + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(param_1 + 0x1c) = uVar2;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
                    /* catch() { ... } // from try @ 00423500 with catch @ 004235bc */
  return;
}


