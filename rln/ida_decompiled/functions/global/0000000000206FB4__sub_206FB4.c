/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000206FB4
 * Mangled: sub_206FB4
 * Demangled: sub_206FB4
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F4C40  .__cxa_atexit
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *   0x0000000000566F50  sub_566F50
 *
 * Referenced strings: 60
 *   insn=0x0000000000206FC4 string=0x00000000001F8A40 "0'"
 *   insn=0x0000000000206FC8 string=0x0000000000206FCC ""
 *   insn=0x0000000000206FD0 string=0x0000000000206FD4 "!"
 *   insn=0x0000000000206FE0 string=0x0000000000206FE4 "5"
 *   insn=0x0000000000206FE8 string=0x0000000000206FEC "s"
 *   insn=0x0000000000206FF8 string=0x00000000001F4C40 "P'"
 *   insn=0x0000000000206FFC string=0x0000000000207000 "!"
 *   insn=0x0000000000207008 string=0x000000000020700C "5"
 *   insn=0x0000000000207014 string=0x0000000000207018 "!P@"
 *   insn=0x0000000000207020 string=0x0000000000207024 "5"
 *   insn=0x000000000020702C string=0x0000000000207030 "!"
 *   insn=0x0000000000207038 string=0x000000000020703C "5"
 *   insn=0x0000000000207044 string=0x0000000000207048 "!PG"
 *   insn=0x0000000000207050 string=0x0000000000207054 "5"
 *   insn=0x000000000020705C string=0x0000000000207060 "!"
 *   insn=0x0000000000207068 string=0x000000000020706C "5"
 *   insn=0x0000000000207074 string=0x0000000000207078 "!"
 *   insn=0x0000000000207080 string=0x0000000000207084 "5"
 *   insn=0x000000000020708C string=0x0000000000207090 "!tF"
 *   insn=0x0000000000207098 string=0x000000000020709C "5"
 *   insn=0x00000000002070A4 string=0x00000000002070A8 "!"
 *   insn=0x00000000002070B0 string=0x00000000002070B4 "5"
 *   insn=0x00000000002070BC string=0x00000000002070C0 "!"
 *   insn=0x00000000002070C8 string=0x00000000002070CC "5"
 *   insn=0x00000000002070D4 string=0x00000000002070D8 "!"
 *   insn=0x00000000002070E0 string=0x00000000002070E4 "5"
 *   insn=0x00000000002070EC string=0x00000000002070F0 "!"
 *   insn=0x00000000002070F8 string=0x00000000002070FC "5"
 *   insn=0x0000000000207104 string=0x0000000000207108 "!8C"
 *   insn=0x0000000000207110 string=0x0000000000207114 "5"
 *   insn=0x000000000020711C string=0x0000000000207120 "!"
 *   insn=0x0000000000207128 string=0x000000000020712C "5"
 *   insn=0x0000000000207134 string=0x0000000000207138 "!TC"
 *   insn=0x0000000000207140 string=0x0000000000207144 "5"
 *   insn=0x000000000020714C string=0x0000000000207150 "!"
 *   insn=0x0000000000207158 string=0x000000000020715C "5"
 *   insn=0x0000000000207164 string=0x0000000000207168 "!`G"
 *   insn=0x0000000000207170 string=0x0000000000207174 "5"
 *   insn=0x000000000020717C string=0x0000000000207180 "!"
 *   insn=0x0000000000207188 string=0x000000000020718C "5"
 *   insn=0x0000000000207194 string=0x0000000000207198 "!"
 *   insn=0x00000000002071A0 string=0x00000000002071A4 "5"
 *   insn=0x00000000002071AC string=0x00000000002071B0 "!L@"
 *   insn=0x00000000002071B8 string=0x00000000002071BC "5"
 *   insn=0x00000000002071C4 string=0x00000000002071C8 "!(G"
 *   insn=0x00000000002071D0 string=0x00000000002071D4 "5"
 *   insn=0x00000000002071DC string=0x00000000002071E0 "!xC"
 *   insn=0x00000000002071E8 string=0x00000000002071EC "5"
 *   insn=0x00000000002071F4 string=0x00000000002071F8 "!"
 *   insn=0x0000000000207200 string=0x0000000000207204 "5"
 *   insn=0x000000000020720C string=0x0000000000207210 "!t@"
 *   insn=0x0000000000207218 string=0x000000000020721C "5"
 *   insn=0x0000000000207224 string=0x0000000000207228 "!"
 *   insn=0x0000000000207230 string=0x0000000000207234 "5"
 *   insn=0x000000000020723C string=0x0000000000207240 "!"
 *   insn=0x0000000000207248 string=0x000000000020724C "5"
 *   insn=0x000000000020724C string=0x0000000000207250 "|"
 *   insn=0x0000000000207254 string=0x0000000000207258 "!"
 *   insn=0x0000000000207260 string=0x0000000000207264 "5"
 *   insn=0x0000000000207270 string=0x0000000000207274 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_206FB4(Caver::Proto *a1)
{
  Caver::Proto::protobuf_AddDesc_GameState_2eproto(a1);
  Caver::Proto::PlayerProfile_Counter::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::PlayerProfile_Counter::_default_name_, &off_6E8000);
  Caver::Proto::PlayerProfile::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::PlayerProfile::_default_name_, &off_6E8000);
  Caver::Proto::PlayerProfile::_default_current_level_title_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::PlayerProfile::_default_current_level_title_, &off_6E8000);
  Caver::Proto::PlayerProfile::_default_equipped_weapon_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::PlayerProfile::_default_equipped_weapon_name_, &off_6E8000);
  Caver::Proto::PlayerProfile::_default_equipped_armor_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::PlayerProfile::_default_equipped_armor_name_, &off_6E8000);
  Caver::Proto::PlayerProfile::_default_weapon_trinket_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::PlayerProfile::_default_weapon_trinket_name_, &off_6E8000);
  Caver::Proto::PlayerProfile::_default_armor_trinket_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::PlayerProfile::_default_armor_trinket_name_, &off_6E8000);
  Caver::Proto::PlayerProfile::_default_identifier_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::PlayerProfile::_default_identifier_, &off_6E8000);
  Caver::Proto::QuestState::_default_quest_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::QuestState::_default_quest_name_, &off_6E8000);
  Caver::Proto::QuestText::_default_quest_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::QuestText::_default_quest_name_, &off_6E8000);
  Caver::Proto::GameState::_default_current_level_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GameState::_default_current_level_, &off_6E8000);
  Caver::Proto::GameState::_default_current_spawn_point_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GameState::_default_current_spawn_point_, &off_6E8000);
  Caver::Proto::GameState::_default_previous_portal_level_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GameState::_default_previous_portal_level_, &off_6E8000);
  Caver::Proto::GameState::_default_current_map_node_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GameState::_default_current_map_node_name_, &off_6E8000);
  Caver::Proto::GameState::_default_carried_object_template_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GameState::_default_carried_object_template_, &off_6E8000);
  Caver::Proto::GameState::_default_carried_object_identifier_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GameState::_default_carried_object_identifier_, &off_6E8000);
  Caver::Proto::GameState::_default_selected_menu_tab_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GameState::_default_selected_menu_tab_, &off_6E8000);
  Caver::Proto::GameState::_default_flashing_item_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GameState::_default_flashing_item_name_, &off_6E8000);
  Caver::Proto::GameState::_default_flashing_skill_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::GameState::_default_flashing_skill_name_, &off_6E8000);
  Caver::Proto::LevelState::_default_level_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::LevelState::_default_level_name_, &off_6E8000);
  Caver::Proto::CharacterState_ItemState::_default_name_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::CharacterState_ItemState::_default_name_, &off_6E8000);
  Caver::Proto::CharacterState::_default_equipped_weapon_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::CharacterState::_default_equipped_weapon_, &off_6E8000);
  Caver::Proto::CharacterState::_default_equipped_armor_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::CharacterState::_default_equipped_armor_, &off_6E8000);
  Caver::Proto::CharacterState::_default_current_skill_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::CharacterState::_default_current_skill_, &off_6E8000);
  Caver::Proto::CharacterState::_default_weapon_trinket_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::CharacterState::_default_weapon_trinket_, &off_6E8000);
  Caver::Proto::CharacterState::_default_armor_trinket_ = (__int64)&byte_6FD2F8;
  __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::CharacterState::_default_armor_trinket_, &off_6E8000);
  Caver::Proto::CharacterState::_default_skill_trinket_ = (__int64)&byte_6FD2F8;
  return __cxa_atexit((void (*)(void *))sub_566F50, &Caver::Proto::CharacterState::_default_skill_trinket_, &off_6E8000);
}

