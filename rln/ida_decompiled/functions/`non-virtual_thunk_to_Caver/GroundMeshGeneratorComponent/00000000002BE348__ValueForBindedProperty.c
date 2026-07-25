/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE348
 * Mangled: _ZThn16_N5Caver28GroundMeshGeneratorComponent22ValueForBindedPropertyEi
 * Demangled: `non-virtual thunk to'Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4FC0  Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002BE34C string=0x00000000001F4FC0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(
        Caver::GroundMeshGeneratorComponent *this,
        int a2)
{
  return Caver::GroundMeshGeneratorComponent::ValueForBindedProperty(
           (Caver::GroundMeshGeneratorComponent *)((char *)this - 16),
           a2);
}

