/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000206D08
 * Mangled: sub_206D08
 * Demangled: sub_206D08
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001FBA80  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *   0x0000000000566F50  sub_566F50
 *
 * Referenced strings: 72
 *   insn=0x0000000000206D14 string=0x0000000000206D18 "Z"
 *   insn=0x0000000000206D18 string=0x00000000001FBA80 "0'"
 *   insn=0x0000000000206D1C string=0x0000000000206D20 ""
 *   insn=0x0000000000206D24 string=0x0000000000206D28 "!"
 *   insn=0x0000000000206D34 string=0x0000000000206D38 "5"
 *   insn=0x0000000000206D3C string=0x0000000000206D40 "s"
 *   insn=0x0000000000206D4C string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000206D50 string=0x0000000000206D54 "!<D"
 *   insn=0x0000000000206D5C string=0x0000000000206D60 "5"
 *   insn=0x0000000000206D68 string=0x0000000000206D6C "!"
 *   insn=0x0000000000206D74 string=0x0000000000206D78 "5"
 *   insn=0x0000000000206D80 string=0x0000000000206D84 "!"
 *   insn=0x0000000000206D8C string=0x0000000000206D90 "5"
 *   insn=0x0000000000206D98 string=0x0000000000206D9C "!"
 *   insn=0x0000000000206DA4 string=0x0000000000206DA8 "5"
 *   insn=0x0000000000206DB0 string=0x0000000000206DB4 "!"
 *   insn=0x0000000000206DBC string=0x0000000000206DC0 "5"
 *   insn=0x0000000000206DC8 string=0x0000000000206DCC "!"
 *   insn=0x0000000000206DD4 string=0x0000000000206DD8 "5"
 *   insn=0x0000000000206DE0 string=0x0000000000206DE4 "!DD"
 *   insn=0x0000000000206DEC string=0x0000000000206DF0 "5"
 *   insn=0x0000000000206DF8 string=0x0000000000206DFC "!"
 *   insn=0x0000000000206E04 string=0x0000000000206E08 "5"
 *   insn=0x0000000000206E10 string=0x0000000000206E14 "!"
 *   insn=0x0000000000206E1C string=0x0000000000206E20 "5"
 *   insn=0x0000000000206E28 string=0x0000000000206E2C "!G"
 *   insn=0x0000000000206E34 string=0x0000000000206E38 "5"
 *   insn=0x0000000000206E40 string=0x0000000000206E44 "!"
 *   insn=0x0000000000206E4C string=0x0000000000206E50 "5"
 *   insn=0x0000000000206E50 string=0x0000000000206E54 "{"
 *   insn=0x0000000000206E58 string=0x0000000000206E5C "!"
 *   insn=0x0000000000206E64 string=0x0000000000206E68 "5"
 *   insn=0x0000000000206E68 string=0x0000000000206E6C "u"
 *   insn=0x0000000000206E70 string=0x0000000000206E74 "!"
 *   insn=0x0000000000206E7C string=0x0000000000206E80 "5"
 *   insn=0x0000000000206E80 string=0x0000000000206E84 "o"
 *   insn=0x0000000000206E88 string=0x0000000000206E8C "!"
 *   insn=0x0000000000206E94 string=0x0000000000206E98 "5"
 *   insn=0x0000000000206E98 string=0x0000000000206E9C "i"
 *   insn=0x0000000000206EA0 string=0x0000000000206EA4 "!"
 *   insn=0x0000000000206EAC string=0x0000000000206EB0 "5"
 *   insn=0x0000000000206EB0 string=0x0000000000206EB4 "c"
 *   insn=0x0000000000206EB8 string=0x0000000000206EBC "!"
 *   insn=0x0000000000206EC4 string=0x0000000000206EC8 "5"
 *   insn=0x0000000000206EC8 string=0x0000000000206ECC "]"
 *   insn=0x0000000000206ED0 string=0x0000000000206ED4 "!@F"
 *   insn=0x0000000000206EDC string=0x0000000000206EE0 "5"
 *   insn=0x0000000000206EE0 string=0x0000000000206EE4 "W"
 *   insn=0x0000000000206EE8 string=0x0000000000206EEC "!"
 *   insn=0x0000000000206EF4 string=0x0000000000206EF8 "5"
 *   insn=0x0000000000206EF8 string=0x0000000000206EFC "Q"
 *   insn=0x0000000000206F00 string=0x0000000000206F04 "!|C"
 *   insn=0x0000000000206F0C string=0x0000000000206F10 "5"
 *   insn=0x0000000000206F10 string=0x0000000000206F14 "K"
 *   insn=0x0000000000206F18 string=0x0000000000206F1C "!"
 *   insn=0x0000000000206F24 string=0x0000000000206F28 "5"
 *   insn=0x0000000000206F28 string=0x0000000000206F2C "E"
 *   insn=0x0000000000206F30 string=0x0000000000206F34 "!"
 *   insn=0x0000000000206F3C string=0x0000000000206F40 "5"
 *   insn=0x0000000000206F40 string=0x0000000000206F44 "?"
 *   insn=0x0000000000206F48 string=0x0000000000206F4C "!"
 *   insn=0x0000000000206F54 string=0x0000000000206F58 "5"
 *   insn=0x0000000000206F58 string=0x0000000000206F5C "9"
 *   insn=0x0000000000206F60 string=0x0000000000206F64 "!"
 *   insn=0x0000000000206F6C string=0x0000000000206F70 "5"
 *   insn=0x0000000000206F70 string=0x0000000000206F74 "3"
 *   insn=0x0000000000206F78 string=0x0000000000206F7C "!"
 *   insn=0x0000000000206F84 string=0x0000000000206F88 "5"
 *   insn=0x0000000000206F88 string=0x0000000000206F8C "-"
 *   insn=0x0000000000206F90 string=0x0000000000206F94 "!"
 *   insn=0x0000000000206F9C string=0x0000000000206FA0 "5"
 *   insn=0x0000000000206FAC string=0x0000000000206FB0 "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_206D08(Caver::Proto *a1)
{
  Caver::Proto::protobuf_AddDesc_GameData_2eproto(a1);
  Caver::Proto::MapNode_Portal::_default_destination_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::MapNode_Portal::_default_destination_name_, &off_6E8000);
  Caver::Proto::MapNode::_default_level_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::MapNode::_default_level_name_, &off_6E8000);
  Caver::Proto::MapNode::_default_title_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::MapNode::_default_title_, &off_6E8000);
  Caver::Proto::MapNode::_default_music_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::MapNode::_default_music_, &off_6E8000);
  Caver::Proto::MapZone::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::MapZone::_default_name_, &off_6E8000);
  Caver::Proto::MapZone::_default_title_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::MapZone::_default_title_, &off_6E8000);
  Caver::Proto::MapZone::_default_music_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::MapZone::_default_music_, &off_6E8000);
  Caver::Proto::Item::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Item::_default_name_, &off_6E8000);
  Caver::Proto::Item::_default_title_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Item::_default_title_, &off_6E8000);
  Caver::Proto::Item::_default_short_description_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Item::_default_short_description_, &off_6E8000);
  Caver::Proto::Item::_default_description_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Item::_default_description_, &off_6E8000);
  Caver::Proto::Skill::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Skill::_default_name_, &off_6E8000);
  Caver::Proto::Skill::_default_title_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Skill::_default_title_, &off_6E8000);
  Caver::Proto::Skill::_default_description_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Skill::_default_description_, &off_6E8000);
  Caver::Proto::Quest::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Quest::_default_name_, &off_6E8000);
  Caver::Proto::Quest::_default_title_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Quest::_default_title_, &off_6E8000);
  Caver::Proto::Quest::_default_follow_up_quest_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Quest::_default_follow_up_quest_, &off_6E8000);
  Caver::Proto::Quest::_default_map_location_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::Quest::_default_map_location_, &off_6E8000);
  Caver::Proto::EntityClass::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::EntityClass::_default_name_, &off_6E8000);
  Caver::Proto::EntityClass::_default_title_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::EntityClass::_default_title_, &off_6E8000);
  Caver::Proto::GuideTarget_LevelObject::_default_level_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GuideTarget_LevelObject::_default_level_name_, &off_6E8000);
  Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_ = (__int64)&byte_6FD2F8;
  __cxa_atexit(
    (void (*)(void *))sub_566F50,
    &Caver::Proto::GuideTarget_LevelObject::_default_object_identifier_,
    &off_6E8000);
  Caver::Proto::GuideTarget::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GuideTarget::_default_name_, &off_6E8000);
  Caver::Proto::GuideTarget::_default_level_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GuideTarget::_default_level_name_, &off_6E8000);
  Caver::Proto::GuideTarget::_default_object_identifier_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GuideTarget::_default_object_identifier_, &off_6E8000);
  Caver::Proto::GuideTarget::_default_carry_object_identifier_ = (__int64)&byte_6FD2F8;
  return __cxa_atexit(
           (void (*)(void *))sub_566F50,
           &Caver::Proto::GuideTarget::_default_carry_object_identifier_,
           &off_6E8000);
}

