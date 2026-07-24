/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043cdc0
 * Function: Caver::Proto::UnpackedMesh::Clear
 * Signature: undefined __thiscall Clear(UnpackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::UnpackedMesh::Clear() */

void __thiscall Caver::Proto::UnpackedMesh::Clear(UnpackedMesh *this)

{
  long *plVar1;
  
  if ((((byte)this[0x78] >> 3 & 1) != 0) &&
     (plVar1 = *(long **)(this + 0x70), plVar1 != (long *)PTR__default_vertex_data__007e7148)) {
    FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  return;
}


