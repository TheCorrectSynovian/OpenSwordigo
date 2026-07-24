/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043b3e0
 * Function: Caver::Proto::PackedMesh::PackedMesh
 * Signature: undefined __thiscall PackedMesh(PackedMesh * this, PackedMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PackedMesh::PackedMesh(Caver::Proto::PackedMesh const&) */

void __thiscall Caver::Proto::PackedMesh::PackedMesh(PackedMesh *this,PackedMesh *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = DAT_0068b470;
                    /* try { // try from 0043b404 to 0053b42b has its CatchHandler @ 0043b430 */
  puVar1 = PTR_vtable_007e5790 + 0x10;
  *(undefined **)(this + 0x88) = PTR__default_vertex_data__007e74e8;
  *(undefined4 *)(this + 8) = 0;
  *(PackedMesh **)(this + 0x10) = this + 0x20;
  *(PackedMesh **)(this + 0x38) = this + 0x48;
  *(PackedMesh **)(this + 0x60) = this + 0x70;
                    /* catch() { ... } // from try @ 0043b404 with catch @ 0043b430 */
  *(undefined **)this = puVar1;
                    /* catch() { ... } // from try @ 0043b16c with catch @ 0043b434 */
  *(undefined8 *)(this + 0x18) = uVar2;
  *(undefined8 *)(this + 0x40) = uVar2;
  *(undefined8 *)(this + 0x68) = uVar2;
  *(undefined4 *)(this + 0x90) = 0;
  MergeFrom(this,param_1);
  return;
}


