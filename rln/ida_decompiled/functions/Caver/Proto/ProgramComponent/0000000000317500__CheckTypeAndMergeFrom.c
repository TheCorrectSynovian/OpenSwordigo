/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000317500
 * Mangled: _ZN5Caver5Proto16ProgramComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ProgramComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F91A0  Caver::Proto::ProgramComponent::MergeFrom(Caver::Proto::ProgramComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000317500 string=0x00000000001F91A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ProgramComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ProgramComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ProgramComponent::MergeFrom();
}

