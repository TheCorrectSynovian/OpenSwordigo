/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E4EFC
 * Mangled: _ZN5Caver5Proto11GuideTarget21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GuideTarget::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F95F0  Caver::Proto::GuideTarget::MergeFrom(Caver::Proto::GuideTarget const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002E4EFC string=0x00000000001F95F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GuideTarget::CheckTypeAndMergeFrom(
        Caver::Proto::GuideTarget *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::GuideTarget::MergeFrom();
}

