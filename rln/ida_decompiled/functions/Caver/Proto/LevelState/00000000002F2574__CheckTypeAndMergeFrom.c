/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2574
 * Mangled: _ZN5Caver5Proto10LevelState21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::LevelState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB0C0  Caver::Proto::LevelState::MergeFrom(Caver::Proto::LevelState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002F2574 string=0x00000000001FB0C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::LevelState::CheckTypeAndMergeFrom(
        Caver::Proto::LevelState *this,
        const Caver::Proto::LevelState *a2)
{
  Caver::Proto::LevelState::MergeFrom(this, a2);
}

