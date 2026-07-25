/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000338FA8
 * Mangled: _ZN5Caver5Proto12MeshMaterial21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MeshMaterial::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202650  Caver::Proto::MeshMaterial::MergeFrom(Caver::Proto::MeshMaterial const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MeshMaterial::CheckTypeAndMergeFrom(
        Caver::Proto::MeshMaterial *this,
        const Caver::Proto::MeshMaterial *a2)
{
  Caver::Proto::MeshMaterial::MergeFrom(this, a2);
}

