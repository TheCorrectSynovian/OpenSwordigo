/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3A60
 * Mangled: ._ZN5Caver5Proto15StateProperties9MergeFromERKS1_
 * Demangled: Caver::Proto::StateProperties::MergeFrom(Caver::Proto::StateProperties const&)
 *
 * Callers: 5
 *   0x00000000002EB780  Caver::Proto::GameState::MergeFrom(Caver::Proto::GameState const&)
 *   0x00000000002EBF5C  Caver::Proto::StateProperties::StateProperties(Caver::Proto::StateProperties const&)
 *   0x00000000002EC4A4  Caver::Proto::StateProperties::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002EC4A8  Caver::Proto::StateProperties::CopyFrom(Caver::Proto::StateProperties const&)
 *   0x00000000002F1920  Caver::Proto::LevelState::LevelState(Caver::Proto::LevelState const&)
 *
 * Callees: 1
 *   0x00000000002EBF5C  Caver::Proto::StateProperties::StateProperties(Caver::Proto::StateProperties const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3A68 string=0x00000000001F3A6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::StateProperties::MergeFrom()
{
  JUMPOUT(0x2EC00C);
}

