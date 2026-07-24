/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004382c8
 * Function: Caver::Proto::MeshMaterial::MeshMaterial
 * Signature: undefined __thiscall MeshMaterial(MeshMaterial * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::MeshMaterial() */

void __thiscall Caver::Proto::MeshMaterial::MeshMaterial(MeshMaterial *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5a10;
                    /* try { // try from 004382d0 to 00538383 has its CatchHandler @ 004382d0
                       catch() { ... } // from try @ 004382d0 with catch @ 004382d0
                       catch() { ... } // from try @ 004383d8 with catch @ 004382d0
                       catch() { ... } // from try @ 00438550 with catch @ 004382d0 */
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


