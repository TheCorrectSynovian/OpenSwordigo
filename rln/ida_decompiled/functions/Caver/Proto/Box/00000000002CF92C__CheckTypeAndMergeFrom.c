/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF92C
 * Mangled: _ZN5Caver5Proto3Box21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Box::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201AD0  Caver::Proto::Box::MergeFrom(Caver::Proto::Box const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Box::CheckTypeAndMergeFrom(Caver::Proto::Box *this, const Caver::Proto::Box *a2)
{
  Caver::Proto::Box::MergeFrom(this, a2);
}

