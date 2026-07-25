/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4FC0
 * Mangled: ._ZN5Caver28GroundMeshGeneratorComponent22ValueForBindedPropertyEi
 * Demangled: Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002BE348  `non-virtual thunk to'Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002BE2E0  Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4FC4 string=0x00000000002BE2E0 ")"
 *   insn=0x00000000001F4FC8 string=0x00000000001F4FCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(
        Caver::GroundMeshGeneratorComponent *this,
        int a2)
{
  return _ZN5Caver28GroundMeshGeneratorComponent22ValueForBindedPropertyEi(this, a2);
}

