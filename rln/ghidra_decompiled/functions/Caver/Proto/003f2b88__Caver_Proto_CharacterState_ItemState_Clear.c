/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f2b88
 * Function: Caver::Proto::CharacterState_ItemState::Clear
 * Signature: undefined __thiscall Clear(CharacterState_ItemState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharacterState_ItemState::Clear() */

void __thiscall Caver::Proto::CharacterState_ItemState::Clear(CharacterState_ItemState *this)

{
  long *plVar1;
  
  if (this[0x1c] != (CharacterState_ItemState)0x0) {
    if ((((byte)this[0x1c] & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_name__007e5e50)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
    }
    *(undefined4 *)(this + 0x18) = 1;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


