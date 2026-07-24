/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040e8c0
 * Function: Caver::Proto::BoneControlledCollisionShapeComponent::Swap
 * Signature: undefined __thiscall Swap(BoneControlledCollisionShapeComponent * this, BoneControlledCollisionShapeComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BoneControlledCollisionShapeComponent::Swap(Caver::Proto::BoneControlledCollisionShapeComponent*)
    */

void __thiscall
Caver::Proto::BoneControlledCollisionShapeComponent::Swap
          (BoneControlledCollisionShapeComponent *this,
          BoneControlledCollisionShapeComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
                    /* try { // try from 0040e8d4 to 0050e8fb has its CatchHandler @ 0040fdb0 */
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
                    /* try { // try from 0040e8fc to 0050e903 has its CatchHandler @ 00410864 */
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
                    /* try { // try from 0040e904 to 0050e917 has its CatchHandler @ 0041070c */
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


