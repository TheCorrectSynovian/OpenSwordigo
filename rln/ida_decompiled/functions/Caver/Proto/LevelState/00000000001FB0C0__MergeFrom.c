/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB0C0
 * Mangled: ._ZN5Caver5Proto10LevelState9MergeFromERKS1_
 * Demangled: Caver::Proto::LevelState::MergeFrom(Caver::Proto::LevelState const&)
 *
 * Callers: 4
 *   0x00000000002F0FA8  google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::LevelState> const&)
 *   0x00000000002F1920  Caver::Proto::LevelState::LevelState(Caver::Proto::LevelState const&)
 *   0x00000000002F2574  Caver::Proto::LevelState::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002F2578  Caver::Proto::LevelState::CopyFrom(Caver::Proto::LevelState const&)
 *
 * Callees: 1
 *   0x00000000002F1920  Caver::Proto::LevelState::LevelState(Caver::Proto::LevelState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB0C8 string=0x00000000001FB0CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::LevelState::MergeFrom(Caver::Proto::LevelState *this, const Caver::Proto::LevelState *a2)
{
  JUMPOUT(0x2F198C);
}

