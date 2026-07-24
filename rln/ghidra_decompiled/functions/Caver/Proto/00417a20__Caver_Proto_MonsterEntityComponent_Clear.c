/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00417a20
 * Function: Caver::Proto::MonsterEntityComponent::Clear
 * Signature: undefined __thiscall Clear(MonsterEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::Clear() */

void __thiscall Caver::Proto::MonsterEntityComponent::Clear(MonsterEntityComponent *this)

{
  MonsterEntityComponent MVar1;
  uint uVar2;
  
  MVar1 = this[0x24];
  uVar2 = (uint)(byte)MVar1;
  if (MVar1 != (MonsterEntityComponent)0x0) {
    if ((((byte)MVar1 & 1) != 0) && (*(Program **)(this + 0x10) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x10));
      uVar2 = *(uint *)(this + 0x24);
    }
    if (((uVar2 >> 1 & 1) != 0) && (*(Program **)(this + 0x18) != (Program *)0x0)) {
      Program::Clear(*(Program **)(this + 0x18));
    }
    *(undefined2 *)(this + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x24) = 0;
  return;
}


