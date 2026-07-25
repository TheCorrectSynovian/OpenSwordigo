/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201960
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10LevelStateEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::LevelState> const&)
 *
 * Callers: 1
 *   0x00000000002EB780  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *
 * Callees: 1
 *   0x00000000002F0FA8  google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::LevelState> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201968 string=0x000000000020196C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::LevelState>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto10LevelStateEE9MergeFromERKS5_();
}

