/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e8fa4
 * Function: Caver::Proto::PlayerProfile_Counter::Clear
 * Signature: undefined __thiscall Clear(PlayerProfile_Counter * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile_Counter::Clear() */

void __thiscall Caver::Proto::PlayerProfile_Counter::Clear(PlayerProfile_Counter *this)

{
  long *plVar1;
  
  if (this[0x1c] != (PlayerProfile_Counter)0x0) {
    if ((((byte)this[0x1c] & 1) != 0) &&
       (plVar1 = *(long **)(this + 0x10), plVar1 != (long *)PTR__default_name__007e6560)) {
      FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
    }
    *(undefined4 *)(this + 0x18) = 0;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


