/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EF39C
 * Mangled: _ZNK5Caver5Proto9GameState3NewEv
 * Demangled: Caver::Proto::GameState::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 28
 *   insn=0x00000000002EF3A8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002EF3AC string=0x00000000002EF3B0 "\t"
 *   insn=0x00000000002EF3B0 string=0x00000000002EF3B4 "MD"
 *   insn=0x00000000002EF3BC string=0x00000000002EF3C0 ")"
 *   insn=0x00000000002EF3C0 string=0x00000000002EF3C4 "\n`"
 *   insn=0x00000000002EF3CC string=0x00000000002EF3D0 "\t"
 *   insn=0x00000000002EF3D0 string=0x00000000002EF3D4 "\t"
 *   insn=0x00000000002EF3D4 string=0x00000000002EF3D8 "\tp"
 *   insn=0x00000000002EF3DC string=0x00000000002EF3E0 "\t("
 *   insn=0x00000000002EF3E0 string=0x00000000002EF3E4 "\t"
 *   insn=0x00000000002EF3E4 string=0x00000000002EF3E8 "\t"
 *   insn=0x00000000002EF3EC string=0x00000000002EF3F0 ")"
 *   insn=0x00000000002EF3F0 string=0x00000000002EF3F4 "A"
 *   insn=0x00000000002EF3F4 string=0x00000000002EF3F8 "\t("
 *   insn=0x00000000002EF3FC string=0x00000000002EF400 ")"
 *   insn=0x00000000002EF40C string=0x00000000002EF410 " "
 *   insn=0x00000000002EF414 string=0x00000000002EF418 ")9C"
 *   insn=0x00000000002EF418 string=0x00000000002EF41C " "
 *   insn=0x00000000002EF420 string=0x00000000002EF424 ")"
 *   insn=0x00000000002EF428 string=0x00000000002EF42C " "
 *   insn=0x00000000002EF430 string=0x00000000002EF434 ")aG"
 *   insn=0x00000000002EF43C string=0x00000000002EF440 ")UC"
 *   insn=0x00000000002EF444 string=0x00000000002EF448 " "
 *   insn=0x00000000002EF44C string=0x00000000002EF450 ")"
 *   insn=0x00000000002EF454 string=0x00000000002EF458 " "
 *   insn=0x00000000002EF45C string=0x00000000002EF460 ")"
 *   insn=0x00000000002EF460 string=0x00000000002EF464 ""
 *   insn=0x00000000002EF468 string=0x00000000002EF46C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::GameState::New(Caver::Proto::GameState *this)
{
  __int64 v1; // x0
  __int128 v2; // q0
  __n128 result; // q0

  v1 = operator new(0x120u);
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 24) = v1 + 48;
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 120) = &Caver::Proto::GameState::_default_carried_object_identifier_;
  *(_QWORD *)(v1 + 128) = v1 + 152;
  *(_QWORD *)(v1 + 224) = v1 + 248;
  *(_DWORD *)(v1 + 40) = 4;
  *(_DWORD *)(v1 + 144) = 4;
  *(_DWORD *)(v1 + 240) = 4;
  *(_QWORD *)(v1 + 80) = &Caver::Proto::GameState::_default_current_level_;
  *(_QWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 136) = 0;
  *(_QWORD *)(v1 + 232) = 0;
  *(_QWORD *)&v2 = &Caver::Proto::GameState::_default_current_spawn_point_;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::GameState::_default_previous_portal_level_;
  *(_OWORD *)(v1 + 88) = v2;
  *(_QWORD *)&v2 = &Caver::Proto::GameState::_default_current_map_node_name_;
  *(_QWORD *)(v1 + 184) = 0;
  *(_QWORD *)(v1 + 192) = &Caver::Proto::GameState::_default_selected_menu_tab_;
  *(_WORD *)(v1 + 200) = 0;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::GameState::_default_carried_object_template_;
  *(_OWORD *)(v1 + 104) = v2;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::GameState::_default_flashing_item_name_;
  *(_QWORD *)v1 = off_6C6F88;
  *(_QWORD *)(v1 + 280) = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::GameState::_default_flashing_skill_name_;
  *(__n128 *)(v1 + 208) = result;
  return result;
}

