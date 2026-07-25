/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BE420
 * Mangled: _ZThn16_N5Caver28GroundMeshGeneratorComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB0D0  Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000002BE420 string=0x00000000002BE424 "+"
 *   insn=0x00000000002BE424 string=0x00000000001FB0D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(
        Caver::GroundMeshGeneratorComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(
           (Caver::GroundMeshGeneratorComponent *)((char *)this - 16),
           a2,
           a3);
}

