/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBB10
 * Mangled: _ZN5Caver5Proto9Component21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Component::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAB70  Caver::Proto::Component::MergeFrom(Caver::Proto::Component const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002FBB10 string=0x00000000001FAB70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Component::CheckTypeAndMergeFrom(
        Caver::Proto::Component *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::Component::MergeFrom();
}

