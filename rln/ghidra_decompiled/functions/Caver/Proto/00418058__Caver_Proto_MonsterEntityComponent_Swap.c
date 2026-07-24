/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00418058
 * Function: Caver::Proto::MonsterEntityComponent::Swap
 * Signature: undefined __thiscall Swap(MonsterEntityComponent * this, MonsterEntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::Swap(Caver::Proto::MonsterEntityComponent*) */

void __thiscall
Caver::Proto::MonsterEntityComponent::Swap
          (MonsterEntityComponent *this,MonsterEntityComponent *param_1)

{
  undefined4 uVar1;
  MonsterEntityComponent MVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 0041806c to 0051807f has its CatchHandler @ 00419868 */
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    MVar2 = this[0x20];
    this[0x20] = param_1[0x20];
    param_1[0x20] = MVar2;
                    /* try { // try from 00418090 to 0051809b has its CatchHandler @ 004197fc */
    MVar2 = this[0x21];
    this[0x21] = param_1[0x21];
    param_1[0x21] = MVar2;
    uVar1 = *(undefined4 *)(this + 0x24);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x24) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


