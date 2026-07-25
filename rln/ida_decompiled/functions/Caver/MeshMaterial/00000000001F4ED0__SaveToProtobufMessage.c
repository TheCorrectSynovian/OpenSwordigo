/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4ED0
 * Mangled: ._ZNK5Caver12MeshMaterial21SaveToProtobufMessageEPNS_5Proto12MeshMaterialE
 * Demangled: Caver::MeshMaterial::SaveToProtobufMessage(Caver::Proto::MeshMaterial *)
 *
 * Callers: 1
 *   0x0000000000444C48  Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh *)
 *
 * Callees: 1
 *   0x0000000000443F08  Caver::MeshMaterial::LoadFromProtobufMessage(Caver::Proto::MeshMaterial const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4ED8 string=0x00000000001F4EDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MeshMaterial::SaveToProtobufMessage(Caver::MeshMaterial *this, Caver::Proto::MeshMaterial *a2)
{
  JUMPOUT(0x4440D8);
}

