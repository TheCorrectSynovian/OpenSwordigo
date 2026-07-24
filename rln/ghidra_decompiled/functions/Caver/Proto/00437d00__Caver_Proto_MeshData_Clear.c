/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00437d00
 * Function: Caver::Proto::MeshData::Clear
 * Signature: undefined __thiscall Clear(MeshData * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Proto::MeshData::Clear() */

void __thiscall Caver::Proto::MeshData::Clear(MeshData *this)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_0068b490;
  if (this[0x1c] != (MeshData)0x0) {
    *(undefined8 *)(this + 0x14) = _UNK_0068b498;
    *(undefined8 *)(this + 0xc) = uVar1;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}


