/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bab78
 * Function: Caver::LevelState::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(LevelState * this, LevelState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelState::LoadFromProtobufMessage(Caver::Proto::LevelState const&) */

void __thiscall Caver::LevelState::LoadFromProtobufMessage(LevelState *this,LevelState *param_1)

{
  LevelState *pLVar1;
  uint uVar2;
  
  FUN_0066a6a8(this,*(undefined8 *)(param_1 + 0x10));
  this[8] = *(LevelState *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x30);
  if ((uVar2 >> 2 & 1) != 0) {
    pLVar1 = *(LevelState **)PTR_default_instance__007e7240;
    if (*(long *)(param_1 + 0x20) != 0) {
      pLVar1 = param_1;
    }
    StateProperties::LoadFromProtobufMessage
              ((StateProperties *)(this + 0x10),*(StateProperties **)(pLVar1 + 0x20));
    uVar2 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar2 >> 3 & 1) != 0) {
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x28);
    uVar2 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar2 >> 4 & 1) != 0) {
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x2c);
  }
  return;
}


