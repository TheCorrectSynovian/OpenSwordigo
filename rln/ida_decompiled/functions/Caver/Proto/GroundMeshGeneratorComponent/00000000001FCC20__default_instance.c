/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCC20
 * Mangled: ._ZN5Caver5Proto28GroundMeshGeneratorComponent16default_instanceEv
 * Demangled: Caver::Proto::GroundMeshGeneratorComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002BC374  Caver::GroundMeshGeneratorComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9AD8  Caver::Proto::GroundMeshGeneratorComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCC28 string=0x00000000001FCC2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GroundMeshGeneratorComponent::default_instance(
        Caver::Proto::GroundMeshGeneratorComponent *this)
{
  return _ZN5Caver5Proto28GroundMeshGeneratorComponent16default_instanceEv(this);
}

