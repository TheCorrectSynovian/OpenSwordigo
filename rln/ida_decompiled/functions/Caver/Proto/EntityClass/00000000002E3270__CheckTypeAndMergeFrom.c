/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E3270
 * Mangled: _ZN5Caver5Proto11EntityClass21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::EntityClass::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC700  Caver::Proto::EntityClass::MergeFrom(Caver::Proto::EntityClass const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002E3270 string=0x00000000001FC700 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EntityClass::CheckTypeAndMergeFrom(
        Caver::Proto::EntityClass *this,
        const Caver::Proto::EntityClass *a2)
{
  Caver::Proto::EntityClass::MergeFrom(this, a2);
}

