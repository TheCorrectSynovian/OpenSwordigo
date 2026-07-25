/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEAE0
 * Mangled: _ZN5Caver5Proto7Vector321CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Vector3::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3800  Caver::Proto::Vector3::MergeFrom(Caver::Proto::Vector3 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002CEAE0 string=0x00000000001F3800 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Vector3::CheckTypeAndMergeFrom(
        Caver::Proto::Vector3 *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::Vector3::MergeFrom();
}

