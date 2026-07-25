/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4620
 * Mangled: ._ZN5Caver8GameData8AddQuestERKN5boost10shared_ptrINS_5QuestEEE
 * Demangled: Caver::GameData::AddQuest(boost::shared_ptr<Caver::Quest> const&)
 *
 * Callers: 1
 *   0x00000000003AF808  Caver::GameData::LoadFromProtobufMessage(Caver::Proto::GameData const&)
 *
 * Callees: 1
 *   0x00000000003B0084  Caver::GameData::AddQuest(boost::shared_ptr<Caver::Quest> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4628 string=0x00000000001F462C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameData::AddQuest()
{
  return _ZN5Caver8GameData8AddQuestERKN5boost10shared_ptrINS_5QuestEEE();
}

