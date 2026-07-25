/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202D10
 * Mangled: ._ZNK5Caver4Mesh21SaveToProtobufMessageEPNS_5Proto4MeshE
 * Demangled: Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Callers: 1
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202D18 string=0x0000000000202D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Mesh::SaveToProtobufMessage(Caver::Mesh *this, Caver::Proto::Mesh *a2)
{
  return _ZNK5Caver4Mesh21SaveToProtobufMessageEPNS_5Proto4MeshE(this, a2);
}

