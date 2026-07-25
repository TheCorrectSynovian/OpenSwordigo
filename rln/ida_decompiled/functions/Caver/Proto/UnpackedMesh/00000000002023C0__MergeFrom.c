/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002023C0
 * Mangled: ._ZN5Caver5Proto12UnpackedMesh9MergeFromERKS1_
 * Demangled: Caver::Proto::UnpackedMesh::MergeFrom(Caver::Proto::UnpackedMesh const&)
 *
 * Callers: 3
 *   0x000000000033C74C  Caver::Proto::UnpackedMesh::UnpackedMesh(Caver::Proto::UnpackedMesh const&)
 *   0x000000000033D588  Caver::Proto::UnpackedMesh::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x000000000033D58C  Caver::Proto::UnpackedMesh::CopyFrom(Caver::Proto::UnpackedMesh const&)
 *
 * Callees: 1
 *   0x000000000033C74C  Caver::Proto::UnpackedMesh::UnpackedMesh(Caver::Proto::UnpackedMesh const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002023C8 string=0x00000000002023CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::UnpackedMesh::MergeFrom(
        Caver::Proto::UnpackedMesh *this,
        const Caver::Proto::UnpackedMesh *a2)
{
  JUMPOUT(0x33C81C);
}

