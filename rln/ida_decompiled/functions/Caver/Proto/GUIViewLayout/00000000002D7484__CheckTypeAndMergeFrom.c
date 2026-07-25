/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7484
 * Mangled: _ZN5Caver5Proto13GUIViewLayout21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GUIViewLayout::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA6C0  Caver::Proto::GUIViewLayout::MergeFrom(Caver::Proto::GUIViewLayout const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002D7484 string=0x00000000001FA6C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GUIViewLayout::CheckTypeAndMergeFrom(
        Caver::Proto::GUIViewLayout *this,
        const Caver::Proto::GUIViewLayout *a2)
{
  Caver::Proto::GUIViewLayout::MergeFrom(this, a2);
}

