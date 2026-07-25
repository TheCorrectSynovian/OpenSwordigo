/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB0D0
 * Mangled: ._ZN5Caver28GroundMeshGeneratorComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x00000000002BE420  `non-virtual thunk to'Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x00000000002BE350  Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB0D8 string=0x00000000001FB0DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GroundMeshGeneratorComponent::SetValueForBindedProperty(
        Caver::GroundMeshGeneratorComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  return _ZN5Caver28GroundMeshGeneratorComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE(this, a2, a3);
}

