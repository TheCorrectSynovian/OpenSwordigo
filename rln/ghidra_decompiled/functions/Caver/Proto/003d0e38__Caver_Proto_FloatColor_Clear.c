/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d0e38
 * Function: Caver::Proto::FloatColor::Clear
 * Signature: undefined __thiscall Clear(FloatColor * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::FloatColor::Clear() */

void __thiscall Caver::Proto::FloatColor::Clear(FloatColor *this)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_00683800;
  if (this[0x1c] != (FloatColor)0x0) {
    *(undefined8 *)(this + 0x14) = _UNK_00683808;
    *(undefined8 *)(this + 0xc) = uVar1;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


