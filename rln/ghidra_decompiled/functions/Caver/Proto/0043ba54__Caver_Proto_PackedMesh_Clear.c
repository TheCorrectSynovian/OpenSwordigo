/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043ba54
 * Function: Caver::Proto::PackedMesh::Clear
 * Signature: undefined __thiscall Clear(PackedMesh * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::Clear() */

void __thiscall Caver::Proto::PackedMesh::Clear(PackedMesh *this)

{
  long *plVar1;
  
  if ((((byte)this[0x90] >> 3 & 1) != 0) &&
     (plVar1 = *(long **)(this + 0x88), plVar1 != (long *)PTR__default_vertex_data__007e74e8)) {
    FUN_00668cb8(plVar1,0,*(undefined8 *)(*plVar1 + -0x18),0);
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  return;
}


