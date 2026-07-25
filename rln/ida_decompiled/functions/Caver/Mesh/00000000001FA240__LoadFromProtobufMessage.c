/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA240
 * Mangled: ._ZN5Caver4Mesh23LoadFromProtobufMessageERKNS_5Proto4MeshE
 * Demangled: Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *
 * Callers: 1
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x0000000000444214  Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA248 string=0x00000000001FA24C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::LoadFromProtobufMessage(Caver::Mesh *this, const Caver::Proto::Mesh *a2)
{
  return _ZN5Caver4Mesh23LoadFromProtobufMessageERKNS_5Proto4MeshE(this, a2);
}

