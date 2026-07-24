/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00408abc
 * Function: Caver::Proto::GroundMeshGeneratorComponent::Clear
 * Signature: undefined __thiscall Clear(GroundMeshGeneratorComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshGeneratorComponent::Clear() */

void __thiscall
Caver::Proto::GroundMeshGeneratorComponent::Clear(GroundMeshGeneratorComponent *this)

{
  if ((*(uint *)(this + 0x38) & 0xff) != 0) {
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x1c) = 0;
    *(undefined8 *)(this + 0x14) = 0;
    *(undefined8 *)(this + 0xc) = 0;
  }
  if ((*(uint *)(this + 0x38) & 0xff00) != 0) {
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


