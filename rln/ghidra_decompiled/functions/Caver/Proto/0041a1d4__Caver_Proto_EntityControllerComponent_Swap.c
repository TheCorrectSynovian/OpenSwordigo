/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a1d4
 * Function: Caver::Proto::EntityControllerComponent::Swap
 * Signature: undefined __thiscall Swap(EntityControllerComponent * this, EntityControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::Swap(Caver::Proto::EntityControllerComponent*) */

void __thiscall
Caver::Proto::EntityControllerComponent::Swap
          (EntityControllerComponent *this,EntityControllerComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
                    /* try { // try from 0041a1f4 to 0051a20b has its CatchHandler @ 0041a054 */
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
                    /* catch() { ... } // from try @ 0041a1cc with catch @ 0041a1fc */
                    /* catch() { ... } // from try @ 0041a090 with catch @ 0041a200 */
    uVar1 = *(undefined4 *)(this + 0x14);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
                    /* try { // try from 0041a20c to 0051a20f has its CatchHandler @ 0041a210 */
                    /* catch() { ... } // from try @ 0041a20c with catch @ 0041a210 */
    uVar2 = *(undefined8 *)(this + 0x18);
                    /* try { // try from 0041a214 to 0051a217 has its CatchHandler @ 0041a21c */
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
                    /* catch() { ... } // from try @ 0041a214 with catch @ 0041a21c */
                    /* try { // try from 0041a220 to 0051a25f has its CatchHandler @ 0041a220
                       catch() { ... } // from try @ 0041a220 with catch @ 0041a220
                       catch() { ... } // from try @ 0041a2f4 with catch @ 0041a220
                       catch() { ... } // from try @ 0041a3c8 with catch @ 0041a220 */
    uVar1 = *(undefined4 *)(this + 0x20);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x24);
    *(undefined8 *)(this + 0x24) = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)(param_1 + 0x24) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


