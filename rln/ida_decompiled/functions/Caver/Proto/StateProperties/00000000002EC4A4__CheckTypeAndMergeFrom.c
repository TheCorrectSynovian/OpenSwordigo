/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EC4A4
 * Mangled: _ZN5Caver5Proto15StateProperties21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::StateProperties::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3A60  Caver::Proto::StateProperties::MergeFrom(Caver::Proto::StateProperties const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002EC4A4 string=0x00000000001F3A60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::StateProperties::CheckTypeAndMergeFrom(
        Caver::Proto::StateProperties *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::StateProperties::MergeFrom();
}

