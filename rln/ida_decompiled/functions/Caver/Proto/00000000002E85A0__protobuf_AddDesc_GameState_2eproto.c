/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E85A0
 * Mangled: _ZN5Caver5Proto34protobuf_AddDesc_GameState_2eprotoEv
 * Demangled: Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Callers: 2
 *   0x00000000001F8A40  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *   0x00000000002E85A0  Caver::Proto::protobuf_AddDesc_GameState_2eproto(void)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F7D70  google::protobuf::internal::OnShutdown(void (*)(void))
 *   0x00000000001FF6C0  Caver::Proto::protobuf_AddDesc_Common_2eproto(void)
 *   0x0000000000201A40  google::protobuf::internal::VerifyVersion(int,int,char const*)
 *   0x00000000002036D0  Caver::Proto::DateTime::default_instance(void)
 *   0x00000000002E8490  Caver::Proto::protobuf_ShutdownFile_GameState_2eproto(void)
 *
 * Referenced strings: 128
 *   insn=0x00000000002E85A0 string=0x00000000002E85A4 "\ta{9I"
 *   insn=0x00000000002E85A4 string=0x00000000002E85A8 "I"
 *   insn=0x00000000002E85C8 string=0x000000000058B0FC "./../../../../Source/Caver/Content/Proto/GameState.pb.cc"
 *   insn=0x00000000002E85D4 string=0x00000000002E85D8 "B"
 *   insn=0x00000000002E85E0 string=0x00000000002E85E4 "\ta;9"
 *   insn=0x00000000002E85E8 string=0x00000000002E85EC "5\"
 *   insn=0x00000000002E85F4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002E85F8 string=0x00000000002E85FC "]B"
 *   insn=0x00000000002E85FC string=0x00000000002E8600 "\t"
 *   insn=0x00000000002E8608 string=0x00000000002E860C "J"
 *   insn=0x00000000002E860C string=0x00000000002E8610 "\t0"
 *   insn=0x00000000002E8614 string=0x00000000002E8618 ")"
 *   insn=0x00000000002E8618 string=0x00000000002E861C "@"
 *   insn=0x00000000002E8620 string=0x00000000002E8624 "J"
 *   insn=0x00000000002E8624 string=0x00000000002E8628 "!"
 *   insn=0x00000000002E862C string=0x00000000002E8630 ")uF"
 *   insn=0x00000000002E8630 string=0x00000000002E8634 "A"
 *   insn=0x00000000002E8638 string=0x00000000002E863C ""
 *   insn=0x00000000002E863C string=0x00000000002E8640 "\tP"
 *   insn=0x00000000002E8644 string=0x00000000002E8648 ")Q@"
 *   insn=0x00000000002E864C string=0x00000000002E8650 ""
 *   insn=0x00000000002E8654 string=0x00000000002E8658 "QG"
 *   insn=0x00000000002E8664 string=0x00000000002E8668 ""
 *   insn=0x00000000002E8678 string=0x00000000002E867C "4"
 *   insn=0x00000000002E8680 string=0x00000000002E8684 "\n|"
 *   insn=0x00000000002E8684 string=0x00000000002E8688 "\t|"
 *   insn=0x00000000002E869C string=0x00000000002E86A0 ""
 *   insn=0x00000000002E86A8 string=0x00000000002E86AC ")"
 *   insn=0x00000000002E86AC string=0x00000000002E86B0 ""
 *   insn=0x00000000002E86B4 string=0x00000000002E86B8 "J"
 *   insn=0x00000000002E86B8 string=0x00000000002E86BC "A"
 *   insn=0x00000000002E86BC string=0x00000000002E86C0 "\t"
 *   insn=0x00000000002E86C0 string=0x00000000002E86C4 ""
 *   insn=0x00000000002E86C4 string=0x00000000002E86C8 "@"
 *   insn=0x00000000002E86D4 string=0x00000000002E86D8 "IA"
 *   insn=0x00000000002E86D8 string=0x00000000002E86DC ""
 *   insn=0x00000000002E86EC string=0x00000000002E86F0 "s"
 *   insn=0x00000000002E86F0 string=0x00000000002E86F4 "\t"
 *   insn=0x00000000002E86F4 string=0x00000000002E86F8 "A"
 *   insn=0x00000000002E86F8 string=0x00000000002E86FC "\t"
 *   insn=0x00000000002E86FC string=0x00000000002E8700 ""
 *   insn=0x00000000002E8700 string=0x00000000002E8704 "`"
 *   insn=0x00000000002E8710 string=0x00000000002E8714 ""
 *   insn=0x00000000002E871C string=0x00000000002E8720 ")"
 *   insn=0x00000000002E872C string=0x00000000002E8730 "J"
 *   insn=0x00000000002E8730 string=0x00000000002E8734 "A"
 *   insn=0x00000000002E8734 string=0x00000000002E8738 "\t"
 *   insn=0x00000000002E8738 string=0x00000000002E873C ""
 *   insn=0x00000000002E873C string=0x00000000002E8740 "@"
 *   insn=0x00000000002E874C string=0x00000000002E8750 ""
 *   insn=0x00000000002E8750 string=0x00000000002E8754 ""
 *   insn=0x00000000002E8760 string=0x00000000002E8764 "J"
 *   insn=0x00000000002E876C string=0x00000000002E8770 "k"
 *   insn=0x00000000002E8770 string=0x00000000002E8774 "\t"
 *   insn=0x00000000002E8774 string=0x00000000002E8778 "A"
 *   insn=0x00000000002E8778 string=0x00000000002E877C "\n$"
 *   insn=0x00000000002E877C string=0x00000000002E8780 ""
 *   insn=0x00000000002E8780 string=0x00000000002E8784 "`"
 *   insn=0x00000000002E878C string=0x00000000002E8790 ""
 *   insn=0x00000000002E8798 string=0x00000000002E879C ""
 *   insn=0x00000000002E879C string=0x00000000002E87A0 "\t`"
 *   insn=0x00000000002E87A0 string=0x00000000002E87A4 "\n"
 *   insn=0x00000000002E87A8 string=0x00000000002E87AC ""
 *   insn=0x00000000002E87B0 string=0x00000000002E87B4 ""
 *   insn=0x00000000002E87B4 string=0x00000000002E87B8 "\np"
 *   insn=0x00000000002E87BC string=0x00000000002E87C0 ")"
 *   insn=0x00000000002E87C0 string=0x00000000002E87C4 "("
 *   insn=0x00000000002E87C8 string=0x00000000002E87CC "9C"
 *   insn=0x00000000002E87CC string=0x00000000002E87D0 " "
 *   insn=0x00000000002E87D8 string=0x00000000002E87DC ""
 *   insn=0x00000000002E87E8 string=0x00000000002E87EC "aG"
 *   insn=0x00000000002E87F4 string=0x00000000002E87F8 "UC"
 *   insn=0x00000000002E8800 string=0x00000000002E8804 ""
 *   insn=0x00000000002E8810 string=0x00000000002E8814 "MD"
 *   insn=0x00000000002E8814 string=0x00000000002E8818 ""
 *   insn=0x00000000002E881C string=0x00000000002E8820 "D"
 *   insn=0x00000000002E8820 string=0x00000000002E8824 "A"
 *   insn=0x00000000002E8828 string=0x00000000002E882C "t"
 *   insn=0x00000000002E8838 string=0x00000000002E883C ""
 *   insn=0x00000000002E8840 string=0x00000000002E8844 ""
 *   insn=0x00000000002E885C string=0x00000000002E8860 "`3"
 *   insn=0x00000000002E8864 string=0x00000000002E8868 "1E"
 *   insn=0x00000000002E8870 string=0x00000000002E8874 ")M@"
 *   insn=0x00000000002E888C string=0x00000000002E8890 "A"
 *   insn=0x00000000002E8890 string=0x00000000002E8894 "\t"
 *   insn=0x00000000002E8898 string=0x00000000002E889C ""
 *   insn=0x00000000002E88A4 string=0x00000000002E88A8 "N3"
 *   insn=0x00000000002E88AC string=0x00000000002E88B0 "\t"
 *   insn=0x00000000002E88B0 string=0x00000000002E88B4 ""
 *   insn=0x00000000002E88B4 string=0x00000000002E88B8 ""
 *   insn=0x00000000002E88C0 string=0x00000000002E88C4 "8"
 *   insn=0x00000000002E88C8 string=0x00000000002E88CC "\t"
 *   insn=0x00000000002E88D0 string=0x00000000002E88D4 ")yC"
 *   insn=0x00000000002E88D4 string=0x00000000002E88D8 "\n"
 *   insn=0x00000000002E88D8 string=0x00000000002E88DC "\n4"
 *   insn=0x00000000002E88E0 string=0x00000000002E88E4 " "
 *   insn=0x00000000002E88E8 string=0x00000000002E88EC "Ju@"
 *   insn=0x00000000002E88EC string=0x00000000002E88F0 ")"
 *   insn=0x00000000002E88F4 string=0x00000000002E88F8 "A"
 *   insn=0x00000000002E88F8 string=0x00000000002E88FC "A"
 *   insn=0x00000000002E8900 string=0x00000000002E8904 " "
 *   insn=0x00000000002E8908 string=0x00000000002E890C "J"
 *   insn=0x00000000002E890C string=0x00000000002E8910 ")"
 *   insn=0x00000000002E8914 string=0x00000000002E8918 "A"
 *   insn=0x00000000002E8918 string=0x00000000002E891C " "
 *   insn=0x00000000002E8920 string=0x00000000002E8924 ")"
 *   insn=0x00000000002E892C string=0x00000000002E8930 "|"
 *   insn=0x00000000002E8930 string=0x00000000002E8934 " "
 *   insn=0x00000000002E8940 string=0x00000000002E8944 "'3"
 *   insn=0x00000000002E8948 string=0x00000000002E894C ""
 *   insn=0x00000000002E8954 string=0x00000000002E8958 "\n"
 *   insn=0x00000000002E895C string=0x00000000002E8960 "))G"
 *   insn=0x00000000002E8960 string=0x00000000002E8964 "k"
 *   insn=0x00000000002E8964 string=0x00000000002E8968 "@"
 *   insn=0x00000000002E896C string=0x00000000002E8970 "A"
 *   insn=0x00000000002E8970 string=0x00000000002E8974 "\t"
 *   insn=0x00000000002E8974 string=0x00000000002E8978 ""
 *   insn=0x00000000002E897C string=0x00000000002E8980 "`"
 *   insn=0x00000000002E8980 string=0x00000000002E8984 "Sk"
 *   insn=0x00000000002E898C string=0x00000000002E8990 "t"
 *   insn=0x00000000002E8994 string=0x00000000002E85A0 " "
 *   insn=0x00000000002E89A0 string=0x00000000002E89A4 "h"
 *   insn=0x00000000002E89B0 string=0x00000000002E89B4 "h"
 *   insn=0x00000000002E89C0 string=0x00000000002E89C4 ""
 *   insn=0x00000000002E89C8 string=0x00000000002E89CC "h"
 *   insn=0x00000000002E89D4 string=0x00000000002E89D8 "h"
 *   insn=0x00000000002E89DC string=0x00000000002E89E0 "h"
 *   insn=0x00000000002E8A04 string=0x00000000001F7D70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::protobuf_AddDesc_GameState_2eproto(
        Caver::Proto *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Caver::Proto *v4; // x0
  __int64 v5; // x0
  __int128 v6; // q0
  __int128 v7; // q1
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int128 v13; // q0
  __int64 v14; // x0
  __int64 v15; // x0
  __int128 v16; // q0
  __int128 v17; // q1
  __int64 v18; // x0
  __int64 v19; // x24
  Caver::Proto *v20; // x0
  void (*v21)(void); // x1
  __int64 v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x20
  Caver::Proto *v26; // x0

  if ( (byte_6E8ED8 & 1) == 0 )
  {
    byte_6E8ED8 = 1;
    v4 = (Caver::Proto *)google::protobuf::internal::VerifyVersion(
                           (google::protobuf::internal *)&stru_1E9030.r_info,
                           2003000,
                           (int)"./../../../../Source/Caver/Content/Proto/GameState.pb.cc",
                           a4);
    Caver::Proto::protobuf_AddDesc_Common_2eproto(v4);
    v5 = operator new(0xB0u);
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)(v5 + 96) = v5 + 120;
    *(_QWORD *)&v6 = &Caver::Proto::PlayerProfile::_default_equipped_weapon_name_;
    *(_QWORD *)&v7 = &Caver::Proto::PlayerProfile::_default_weapon_trinket_name_;
    *(_QWORD *)(v5 + 160) = &Caver::Proto::PlayerProfile::_default_identifier_;
    *(_QWORD *)(v5 + 48) = 0;
    *(_QWORD *)(v5 + 56) = 0;
    *(_QWORD *)v5 = off_6C6DA8;
    *((_QWORD *)&v6 + 1) = &Caver::Proto::PlayerProfile::_default_equipped_armor_name_;
    *(_BYTE *)(v5 + 152) = 0;
    *(_DWORD *)(v5 + 168) = 0;
    *((_QWORD *)&v7 + 1) = &Caver::Proto::PlayerProfile::_default_armor_trinket_name_;
    *(_QWORD *)(v5 + 104) = 0;
    *(_DWORD *)(v5 + 112) = 4;
    *(_QWORD *)(v5 + 16) = &Caver::Proto::PlayerProfile::_default_name_;
    *(_QWORD *)(v5 + 24) = 0;
    *(_QWORD *)(v5 + 32) = &Caver::Proto::PlayerProfile::_default_current_level_title_;
    *(_QWORD *)(v5 + 40) = 0;
    *(_OWORD *)(v5 + 64) = v6;
    *(_OWORD *)(v5 + 80) = v7;
    Caver::Proto::PlayerProfile::default_instance_ = v5;
    v8 = operator new(0x20u);
    *(_DWORD *)(v8 + 8) = 0;
    *(_QWORD *)(v8 + 24) = 0;
    *(_QWORD *)(v8 + 16) = &Caver::Proto::PlayerProfile_Counter::_default_name_;
    *(_QWORD *)v8 = off_6C6D30;
    Caver::Proto::PlayerProfile_Counter::default_instance_ = v8;
    v9 = operator new(0x50u);
    *(_QWORD *)(v9 + 24) = 0;
    *(_DWORD *)(v9 + 32) = 4;
    *(_DWORD *)(v9 + 8) = 0;
    *(_DWORD *)(v9 + 72) = 0;
    *(_QWORD *)(v9 + 16) = v9 + 40;
    *(_QWORD *)v9 = off_6C6E20;
    Caver::Proto::StateProperties::default_instance_ = v9;
    v10 = operator new(0x20u);
    *(_DWORD *)(v10 + 8) = 0;
    *(_BYTE *)(v10 + 24) = 0;
    *(_DWORD *)(v10 + 28) = 0;
    *(_QWORD *)(v10 + 16) = &Caver::Proto::QuestState::_default_quest_name_;
    *(_QWORD *)v10 = off_6C6E98;
    Caver::Proto::QuestState::default_instance_ = v10;
    v11 = operator new(0x58u);
    *(_QWORD *)(v11 + 32) = 0;
    *(_DWORD *)(v11 + 40) = 4;
    *(_DWORD *)(v11 + 8) = 0;
    *(_DWORD *)(v11 + 80) = 0;
    *(_QWORD *)(v11 + 16) = &Caver::Proto::QuestText::_default_quest_name_;
    *(_QWORD *)(v11 + 24) = v11 + 48;
    *(_QWORD *)v11 = off_6C6F10;
    Caver::Proto::QuestText::default_instance_ = v11;
    v12 = operator new(0x120u);
    *(_QWORD *)(v12 + 16) = 0;
    *(_QWORD *)(v12 + 24) = v12 + 48;
    *(_QWORD *)(v12 + 120) = &Caver::Proto::GameState::_default_carried_object_identifier_;
    *(_QWORD *)(v12 + 128) = v12 + 152;
    *(_QWORD *)(v12 + 224) = v12 + 248;
    *(_QWORD *)(v12 + 80) = &Caver::Proto::GameState::_default_current_level_;
    *(_QWORD *)&v13 = &Caver::Proto::GameState::_default_current_spawn_point_;
    *((_QWORD *)&v13 + 1) = &Caver::Proto::GameState::_default_previous_portal_level_;
    *(_OWORD *)(v12 + 88) = v13;
    *(_QWORD *)&v13 = &Caver::Proto::GameState::_default_current_map_node_name_;
    *(_QWORD *)(v12 + 184) = 0;
    *(_QWORD *)(v12 + 192) = &Caver::Proto::GameState::_default_selected_menu_tab_;
    *((_QWORD *)&v13 + 1) = &Caver::Proto::GameState::_default_carried_object_template_;
    *(_OWORD *)(v12 + 104) = v13;
    *(_QWORD *)&v13 = &Caver::Proto::GameState::_default_flashing_item_name_;
    *(_QWORD *)(v12 + 32) = 0;
    *(_DWORD *)(v12 + 40) = 4;
    *(_QWORD *)(v12 + 136) = 0;
    *(_DWORD *)(v12 + 144) = 4;
    *(_QWORD *)(v12 + 232) = 0;
    *(_DWORD *)(v12 + 240) = 4;
    *(_DWORD *)(v12 + 8) = 0;
    *(_WORD *)(v12 + 200) = 0;
    *(_QWORD *)v12 = off_6C6F88;
    *(_QWORD *)(v12 + 280) = 0;
    *((_QWORD *)&v13 + 1) = &Caver::Proto::GameState::_default_flashing_skill_name_;
    *(_OWORD *)(v12 + 208) = v13;
    Caver::Proto::GameState::default_instance_ = v12;
    v14 = operator new(0x38u);
    *(_DWORD *)(v14 + 8) = 0;
    *(_BYTE *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 32) = 0;
    *(_DWORD *)(v14 + 48) = 0;
    *(_QWORD *)(v14 + 16) = &Caver::Proto::LevelState::_default_level_name_;
    *(_QWORD *)(v14 + 40) = 0xFFFFFFFFLL;
    *(_QWORD *)v14 = off_6C7000;
    Caver::Proto::LevelState::default_instance_ = v14;
    v15 = operator new(0xD0u);
    *(_QWORD *)(v15 + 40) = 0;
    *(_DWORD *)(v15 + 48) = 4;
    *(_DWORD *)(v15 + 120) = 4;
    *(_QWORD *)(v15 + 112) = 0;
    *(_QWORD *)(v15 + 16) = 0;
    *(_QWORD *)(v15 + 24) = 0;
    *(_QWORD *)(v15 + 32) = v15 + 56;
    *(_QWORD *)(v15 + 104) = v15 + 128;
    *(_QWORD *)&v16 = &Caver::Proto::CharacterState::_default_equipped_weapon_;
    *(_QWORD *)&v17 = &Caver::Proto::CharacterState::_default_current_skill_;
    *((_QWORD *)&v16 + 1) = &Caver::Proto::CharacterState::_default_equipped_armor_;
    *(_OWORD *)(v15 + 88) = v16;
    *((_QWORD *)&v17 + 1) = &Caver::Proto::CharacterState::_default_weapon_trinket_;
    *(_QWORD *)&v16 = &Caver::Proto::CharacterState::_default_armor_trinket_;
    *(_QWORD *)(v15 + 192) = 0;
    *(_QWORD *)(v15 + 200) = 0;
    *(_QWORD *)v15 = off_6C70F0;
    *(_QWORD *)(v15 + 8) = 0;
    *((_QWORD *)&v16 + 1) = &Caver::Proto::CharacterState::_default_skill_trinket_;
    *(_OWORD *)(v15 + 160) = v17;
    *(_OWORD *)(v15 + 176) = v16;
    Caver::Proto::CharacterState::default_instance_ = v15;
    v18 = operator new(0x20u);
    *(_DWORD *)(v18 + 8) = 0;
    v19 = Caver::Proto::PlayerProfile::default_instance_;
    *(_QWORD *)(v18 + 16) = &Caver::Proto::CharacterState_ItemState::_default_name_;
    *(_QWORD *)v18 = off_6C7078;
    *(_QWORD *)(v18 + 24) = 1;
    Caver::Proto::CharacterState_ItemState::default_instance_ = v18;
    v20 = (Caver::Proto *)Caver::Proto::DateTime::default_instance((Caver::Proto::DateTime *)v18);
    *(_QWORD *)(v19 + 24) = v20;
    v22 = Caver::Proto::GameState::default_instance_;
    if ( !Caver::Proto::GameState::default_instance_ )
    {
      v20 = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_GameState_2eproto(v20);
      v22 = Caver::Proto::GameState::default_instance_;
    }
    *(_QWORD *)(v19 + 56) = v22;
    v23 = Caver::Proto::CharacterState::default_instance_;
    if ( !Caver::Proto::CharacterState::default_instance_ )
    {
      v20 = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_GameState_2eproto(v20);
      v23 = Caver::Proto::CharacterState::default_instance_;
    }
    *(_QWORD *)(v22 + 16) = v23;
    v24 = Caver::Proto::StateProperties::default_instance_;
    if ( Caver::Proto::StateProperties::default_instance_ )
    {
      *(_QWORD *)(v22 + 184) = Caver::Proto::StateProperties::default_instance_;
      v25 = Caver::Proto::LevelState::default_instance_;
    }
    else
    {
      v26 = (Caver::Proto *)Caver::Proto::protobuf_AddDesc_GameState_2eproto(v20);
      v24 = Caver::Proto::StateProperties::default_instance_;
      *(_QWORD *)(v22 + 184) = Caver::Proto::StateProperties::default_instance_;
      v25 = Caver::Proto::LevelState::default_instance_;
      if ( !v24 )
      {
        Caver::Proto::protobuf_AddDesc_GameState_2eproto(v26);
        v24 = Caver::Proto::StateProperties::default_instance_;
      }
    }
    *(_QWORD *)(v25 + 32) = v24;
    google::protobuf::internal::OnShutdown(
      (google::protobuf::internal *)Caver::Proto::protobuf_ShutdownFile_GameState_2eproto,
      v21);
  }
}

