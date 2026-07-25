/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202650
 * Mangled: ._ZN5Caver5Proto12MeshMaterial9MergeFromERKS1_
 * Demangled: Caver::Proto::MeshMaterial::MergeFrom(Caver::Proto::MeshMaterial const&)
 *
 * Callers: 4
 *   0x0000000000338310  Caver::Proto::MeshMaterial::MeshMaterial(Caver::Proto::MeshMaterial const&)
 *   0x0000000000338FA8  Caver::Proto::MeshMaterial::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000338FAC  Caver::Proto::MeshMaterial::CopyFrom(Caver::Proto::MeshMaterial const&)
 *   0x0000000000339178  Caver::Proto::Mesh::Mesh(Caver::Proto::Mesh const&)
 *
 * Callees: 1
 *   0x0000000000338310  Caver::Proto::MeshMaterial::MeshMaterial(Caver::Proto::MeshMaterial const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202658 string=0x000000000020265C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MeshMaterial::MergeFrom(
        Caver::Proto::MeshMaterial *this,
        const Caver::Proto::MeshMaterial *a2)
{
  JUMPOUT(0x338370);
}

