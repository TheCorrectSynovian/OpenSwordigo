/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F0FA4
 * Mangled: _ZN5Caver5Proto9GameState21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GameState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5940  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002F0FA4 string=0x00000000001F5940 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GameState::CheckTypeAndMergeFrom(
        Caver::Proto::GameState *this,
        const google::protobuf::MessageLite *a2)
{
  return Caver::Proto::GameState::MergeFrom(this, a2);
}

