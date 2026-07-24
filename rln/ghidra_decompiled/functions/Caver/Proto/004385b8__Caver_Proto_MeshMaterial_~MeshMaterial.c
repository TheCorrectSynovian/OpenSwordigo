/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004385b8
 * Function: Caver::Proto::MeshMaterial::~MeshMaterial
 * Signature: undefined __thiscall ~MeshMaterial(MeshMaterial * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::~MeshMaterial() */

void __thiscall Caver::Proto::MeshMaterial::~MeshMaterial(MeshMaterial *this)

{
                    /* catch() { ... } // from try @ 00438588 with catch @ 004385b8 */
  *(undefined **)this = PTR_vtable_007e5a10 + 0x10;
  if (*(MeshMaterial **)PTR_default_instance__007e6c30 != this) {
    if (*(long **)(this + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x10) + 8))();
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    if (*(long **)(this + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x20) + 8))();
    }
    if (*(long **)(this + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x30) + 8))();
    }
  }
  google::protobuf::MessageLite::~MessageLite((MessageLite *)this);
  return;
}


