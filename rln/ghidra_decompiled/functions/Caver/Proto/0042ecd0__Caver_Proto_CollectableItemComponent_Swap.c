/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ecd0
 * Function: Caver::Proto::CollectableItemComponent::Swap
 * Signature: undefined __thiscall Swap(CollectableItemComponent * this, CollectableItemComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::Swap(Caver::Proto::CollectableItemComponent*) */

void __thiscall
Caver::Proto::CollectableItemComponent::Swap
          (CollectableItemComponent *this,CollectableItemComponent *param_1)

{
  undefined4 uVar1;
  CollectableItemComponent CVar2;
  undefined8 uVar3;
  
                    /* try { // try from 0042ecd0 to 0052ecd7 has its CatchHandler @ 0042ece0 */
  if (param_1 != this) {
                    /* try { // try from 0042ecd8 to 0052ecf7 has its CatchHandler @ 0042eab8 */
    uVar1 = *(undefined4 *)(this + 0xc);
                    /* catch() { ... } // from try @ 0042ecd0 with catch @ 0042ece0 */
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
                    /* catch() { ... } // from try @ 0042ebfc with catch @ 0042ece4 */
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x10);
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
                    /* try { // try from 0042ecf8 to 0052ed4b has its CatchHandler @ 0042ecf8
                       catch() { ... } // from try @ 0042ecf8 with catch @ 0042ecf8
                       catch() { ... } // from try @ 0042ed70 with catch @ 0042ecf8 */
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    CVar2 = this[0x28];
    this[0x28] = param_1[0x28];
    param_1[0x28] = CVar2;
    uVar3 = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    uVar1 = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
                    /* try { // try from 0042ed4c to 0052ed6f has its CatchHandler @ 0042ee00 */
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


