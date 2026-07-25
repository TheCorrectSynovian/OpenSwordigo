/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DB3E0
 * Mangled: _ZN5Caver5Proto38protobuf_ShutdownFile_GameData_2eprotoEv
 * Demangled: Caver::Proto::protobuf_ShutdownFile_GameData_2eproto(void)
 *
 * Callers: 1
 *   0x00000000002DB544  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *
 * Callees: 0
 *
 * Referenced strings: 48
 *   insn=0x00000000002DB3E4 string=0x00000000002DB3E8 "H "
 *   insn=0x00000000002DB3E8 string=0x00000000002DB3EC ""
 *   insn=0x00000000002DB3F4 string=0x00000000002DB3F8 ""
 *   insn=0x00000000002DB3F4 string=0x00000000002DB404 "h "
 *   insn=0x00000000002DB3F8 string=0x00000000002DB3FC ""
 *   insn=0x00000000002DB404 string=0x00000000002DB408 "C"
 *   insn=0x00000000002DB410 string=0x00000000002DB414 ""
 *   insn=0x00000000002DB410 string=0x00000000002DB420 "H "
 *   insn=0x00000000002DB414 string=0x00000000002DB418 ""
 *   insn=0x00000000002DB420 string=0x00000000002DB424 "EC"
 *   insn=0x00000000002DB42C string=0x00000000002DB430 ""
 *   insn=0x00000000002DB42C string=0x00000000002DB43C "H "
 *   insn=0x00000000002DB430 string=0x00000000002DB434 ""
 *   insn=0x00000000002DB43C string=0x00000000002DB440 ""
 *   insn=0x00000000002DB448 string=0x00000000002DB44C ""
 *   insn=0x00000000002DB448 string=0x00000000002DB458 "H "
 *   insn=0x00000000002DB44C string=0x00000000002DB450 ""
 *   insn=0x00000000002DB458 string=0x00000000002DB45C ""
 *   insn=0x00000000002DB464 string=0x00000000002DB468 ""
 *   insn=0x00000000002DB464 string=0x00000000002DB474 "H "
 *   insn=0x00000000002DB468 string=0x00000000002DB46C ""
 *   insn=0x00000000002DB474 string=0x00000000002DB478 "AB"
 *   insn=0x00000000002DB480 string=0x00000000002DB484 ""
 *   insn=0x00000000002DB480 string=0x00000000002DB490 "H "
 *   insn=0x00000000002DB484 string=0x00000000002DB488 ""
 *   insn=0x00000000002DB490 string=0x00000000002DB494 ""
 *   insn=0x00000000002DB49C string=0x00000000002DB4A0 ""
 *   insn=0x00000000002DB49C string=0x00000000002DB4AC "h "
 *   insn=0x00000000002DB4A0 string=0x00000000002DB4A4 ""
 *   insn=0x00000000002DB4AC string=0x00000000002DB4B0 ""
 *   insn=0x00000000002DB4B8 string=0x00000000002DB4BC ""
 *   insn=0x00000000002DB4B8 string=0x00000000002DB4C8 "h "
 *   insn=0x00000000002DB4BC string=0x00000000002DB4C0 ""
 *   insn=0x00000000002DB4C8 string=0x00000000002DB4CC ""
 *   insn=0x00000000002DB4D4 string=0x00000000002DB4D8 ""
 *   insn=0x00000000002DB4D4 string=0x00000000002DB4E4 "H "
 *   insn=0x00000000002DB4D8 string=0x00000000002DB4DC ""
 *   insn=0x00000000002DB4E4 string=0x00000000002DB4E8 ""
 *   insn=0x00000000002DB4F0 string=0x00000000002DB4F4 ""
 *   insn=0x00000000002DB4F0 string=0x00000000002DB500 "H "
 *   insn=0x00000000002DB4F4 string=0x00000000002DB4F8 ""
 *   insn=0x00000000002DB500 string=0x00000000002DB504 ""
 *   insn=0x00000000002DB50C string=0x00000000002DB510 ""
 *   insn=0x00000000002DB50C string=0x00000000002DB51C "H "
 *   insn=0x00000000002DB510 string=0x00000000002DB514 ""
 *   insn=0x00000000002DB51C string=0x00000000002DB520 "1G"
 *   insn=0x00000000002DB528 string=0x00000000002DB52C ""
 *   insn=0x00000000002DB534 string=0x00000000002DB538 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::protobuf_ShutdownFile_GameData_2eproto(Caver::Proto *this)
{
  __int64 result; // x0

  if ( Caver::Proto::MapNode::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MapNode::default_instance_ + 8LL))(Caver::Proto::MapNode::default_instance_);
  if ( Caver::Proto::MapNode_Portal::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MapNode_Portal::default_instance_ + 8LL))(Caver::Proto::MapNode_Portal::default_instance_);
  if ( Caver::Proto::MapZone::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::MapZone::default_instance_ + 8LL))(Caver::Proto::MapZone::default_instance_);
  if ( Caver::Proto::Map::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Map::default_instance_ + 8LL))(Caver::Proto::Map::default_instance_);
  if ( Caver::Proto::Item::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Item::default_instance_ + 8LL))(Caver::Proto::Item::default_instance_);
  if ( Caver::Proto::Skill::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Skill::default_instance_ + 8LL))(Caver::Proto::Skill::default_instance_);
  if ( Caver::Proto::Quest::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::Quest::default_instance_ + 8LL))(Caver::Proto::Quest::default_instance_);
  if ( Caver::Proto::EntityClass::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::EntityClass::default_instance_ + 8LL))(Caver::Proto::EntityClass::default_instance_);
  if ( Caver::Proto::GuideTarget::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GuideTarget::default_instance_ + 8LL))(Caver::Proto::GuideTarget::default_instance_);
  if ( Caver::Proto::GuideTarget_LevelObject::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GuideTarget_LevelObject::default_instance_ + 8LL))(Caver::Proto::GuideTarget_LevelObject::default_instance_);
  if ( Caver::Proto::GameOptions::default_instance_ )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GameOptions::default_instance_ + 8LL))(Caver::Proto::GameOptions::default_instance_);
  result = Caver::Proto::GameData::default_instance_;
  if ( Caver::Proto::GameData::default_instance_ )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)Caver::Proto::GameData::default_instance_ + 8LL))(Caver::Proto::GameData::default_instance_);
  return result;
}

