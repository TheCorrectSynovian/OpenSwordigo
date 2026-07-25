/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBC60
 * Mangled: ._ZN5boost10shared_ptrIN5Caver9QuestTextEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>(Caver::QuestText *)
 *
 * Callers: 2
 *   0x000000000035EB00  sub_35EB00
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *
 * Callees: 1
 *   0x00000000003637F4  boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>(Caver::QuestText *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBC68 string=0x00000000001FBC6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::QuestText>::shared_ptr<Caver::QuestText>()
{
  return _ZN5boost10shared_ptrIN5Caver9QuestTextEEC2IS2_EEPT_();
}

