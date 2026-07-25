/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8A40
 * Mangled: ._ZN5Caver5Proto34protobuf_AddDesc_GameState_2eprotoEv
 * Demangled: Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Callers: 13
 *   0x0000000000206FB4  sub_206FB4
 *   0x00000000002E8A08  Caver::Proto::PlayerProfile::InitAsDefaultInstance(void)
 *   0x00000000002E8A58  Caver::Proto::GameState::InitAsDefaultInstance(void)
 *   0x00000000002E8AAC  Caver::Proto::LevelState::InitAsDefaultInstance(void)
 *   0x00000000002E8F3C  Caver::Proto::PlayerProfile_Counter::default_instance(void)
 *   0x00000000002E94C4  Caver::Proto::GameState::default_instance(void)
 *   0x00000000002EA08C  Caver::Proto::PlayerProfile::default_instance(void)
 *   0x00000000002EC194  Caver::Proto::StateProperties::default_instance(void)
 *   0x00000000002ECA14  Caver::Proto::QuestState::default_instance(void)
 *   0x00000000002ED2E4  Caver::Proto::QuestText::default_instance(void)
 *   0x00000000002ED98C  Caver::Proto::CharacterState::default_instance(void)
 *   0x00000000002F1DB0  Caver::Proto::LevelState::default_instance(void)
 *   0x00000000002F2B14  Caver::Proto::CharacterState_ItemState::default_instance(void)
 *
 * Callees: 1
 *   0x00000000002E85A0  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F8A44 string=0x00000000002E85A0 " "
 *   insn=0x00000000001F8A48 string=0x00000000001F8A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::protobuf_AddDesc_GameState_2eproto(Caver::Proto *this)
{
  return _ZN5Caver5Proto34protobuf_AddDesc_GameState_2eprotoEv(this);
}

