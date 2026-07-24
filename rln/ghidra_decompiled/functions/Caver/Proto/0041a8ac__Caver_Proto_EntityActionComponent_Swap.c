/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a8ac
 * Function: Caver::Proto::EntityActionComponent::Swap
 * Signature: undefined __thiscall Swap(EntityActionComponent * this, EntityActionComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::Swap(Caver::Proto::EntityActionComponent*) */

void __thiscall
Caver::Proto::EntityActionComponent::Swap
          (EntityActionComponent *this,EntityActionComponent *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar1 = *(undefined4 *)(this + 0x18);
                    /* try { // try from 0041a8cc to 0051a8df has its CatchHandler @ 0041a9e4 */
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
                    /* try { // try from 0041a8e4 to 0051a8f3 has its CatchHandler @ 0041a974 */
  return;
}


