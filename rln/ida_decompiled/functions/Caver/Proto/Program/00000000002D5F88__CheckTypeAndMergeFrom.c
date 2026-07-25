/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D5F88
 * Mangled: _ZN5Caver5Proto7Program21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Program::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F37A0  Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002D5F88 string=0x00000000001F37A0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Program::CheckTypeAndMergeFrom(
        Caver::Proto::Program *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::Program::MergeFrom();
}

