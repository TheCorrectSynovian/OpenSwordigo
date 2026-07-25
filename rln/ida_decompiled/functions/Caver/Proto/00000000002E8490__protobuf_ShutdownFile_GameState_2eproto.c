/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E8490
 * Mangled: _ZN5Caver5Proto39protobuf_ShutdownFile_GameState_2eprotoEv
 * Demangled: Caver::Proto::protobuf_ShutdownFile_GameState_2eproto(void)
 *
 * Callers: 1
 *   0x00000000002E85A0  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Callees: 0
 *
 * Referenced strings: 27
 *   insn=0x00000000002E8498 string=0x00000000002E849C ""
 *   insn=0x00000000002E84A4 string=0x00000000002E84A8 ""
 *   insn=0x00000000002E84A8 string=0x00000000002E84AC ""
 *   insn=0x00000000002E84B4 string=0x00000000002E84B8 ""
 *   insn=0x00000000002E84C0 string=0x00000000002E84C4 ""
 *   insn=0x00000000002E84C4 string=0x00000000002E84C8 ""
 *   insn=0x00000000002E84D0 string=0x00000000002E84D4 ""
 *   insn=0x00000000002E84DC string=0x00000000002E84E0 ""
 *   insn=0x00000000002E84E0 string=0x00000000002E84E4 ""
 *   insn=0x00000000002E84EC string=0x00000000002E84F0 ""
 *   insn=0x00000000002E84F8 string=0x00000000002E84FC ""
 *   insn=0x00000000002E84FC string=0x00000000002E8500 ""
 *   insn=0x00000000002E8508 string=0x00000000002E850C ""
 *   insn=0x00000000002E8514 string=0x00000000002E8518 ""
 *   insn=0x00000000002E8518 string=0x00000000002E851C ""
 *   insn=0x00000000002E8524 string=0x00000000002E8528 ""
 *   insn=0x00000000002E8530 string=0x00000000002E8534 ""
 *   insn=0x00000000002E8534 string=0x00000000002E8538 ""
 *   insn=0x00000000002E8540 string=0x00000000002E8544 "!A"
 *   insn=0x00000000002E854C string=0x00000000002E8550 ""
 *   insn=0x00000000002E8550 string=0x00000000002E8554 ""
 *   insn=0x00000000002E855C string=0x00000000002E8560 ""
 *   insn=0x00000000002E8568 string=0x00000000002E856C ""
 *   insn=0x00000000002E856C string=0x00000000002E8570 ""
 *   insn=0x00000000002E8578 string=0x00000000002E857C ""
 *   insn=0x00000000002E8584 string=0x00000000002E8588 ""
 *   insn=0x00000000002E8590 string=0x00000000002E8594 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::protobuf_ShutdownFile_GameState_2eproto(Caver::Proto *this)
{
  __int64 result; // x0

  if ( Caver::Proto::PlayerProfile::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::PlayerProfile::default_instance_ + 8LL))(Caver::Proto::PlayerProfile::default_instance_);
  if ( Caver::Proto::PlayerProfile_Counter::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::PlayerProfile_Counter::default_instance_ + 8LL))(Caver::Proto::PlayerProfile_Counter::default_instance_);
  if ( Caver::Proto::StateProperties::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::StateProperties::default_instance_ + 8LL))(Caver::Proto::StateProperties::default_instance_);
  if ( Caver::Proto::QuestState::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::QuestState::default_instance_ + 8LL))(Caver::Proto::QuestState::default_instance_);
  if ( Caver::Proto::QuestText::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::QuestText::default_instance_ + 8LL))(Caver::Proto::QuestText::default_instance_);
  if ( Caver::Proto::GameState::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GameState::default_instance_ + 8LL))(Caver::Proto::GameState::default_instance_);
  if ( Caver::Proto::LevelState::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::LevelState::default_instance_ + 8LL))(Caver::Proto::LevelState::default_instance_);
  if ( Caver::Proto::CharacterState::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::CharacterState::default_instance_ + 8LL))(Caver::Proto::CharacterState::default_instance_);
  result = Caver::Proto::CharacterState_ItemState::default_instance_;
  if ( Caver::Proto::CharacterState_ItemState::default_instance_ )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::CharacterState_ItemState::default_instance_
                                              + 8LL))(Caver::Proto::CharacterState_ItemState::default_instance_);
  return result;
}

