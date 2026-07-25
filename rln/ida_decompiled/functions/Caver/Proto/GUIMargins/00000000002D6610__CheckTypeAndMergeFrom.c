/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6610
 * Mangled: _ZN5Caver5Proto10GUIMargins21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GUIMargins::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD960  Caver::Proto::GUIMargins::MergeFrom(Caver::Proto::GUIMargins const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002D6610 string=0x00000000001FD960 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GUIMargins::CheckTypeAndMergeFrom(
        Caver::Proto::GUIMargins *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::GUIMargins::MergeFrom();
}

