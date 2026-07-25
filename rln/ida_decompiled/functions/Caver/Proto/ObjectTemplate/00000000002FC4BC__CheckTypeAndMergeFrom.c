/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FC4BC
 * Mangled: _ZN5Caver5Proto14ObjectTemplate21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ObjectTemplate::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC7D0  Caver::Proto::ObjectTemplate::MergeFrom(Caver::Proto::ObjectTemplate const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002FC4BC string=0x00000000001FC7D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ObjectTemplate::CheckTypeAndMergeFrom(
        Caver::Proto::ObjectTemplate *this,
        const Caver::Proto::ObjectTemplate *a2)
{
  Caver::Proto::ObjectTemplate::MergeFrom(this, a2);
}

