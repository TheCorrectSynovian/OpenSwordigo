/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ED900
 * Mangled: _ZN5Caver5Proto9GameState10SharedCtorEv
 * Demangled: Caver::Proto::GameState::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000002ED900 string=0x00000000002ED904 ""
 *   insn=0x00000000002ED910 string=0x00000000002ED914 "9C"
 *   insn=0x00000000002ED920 string=0x00000000002ED924 ""
 *   insn=0x00000000002ED92C string=0x00000000002ED930 ""
 *   insn=0x00000000002ED938 string=0x00000000002ED93C "UC"
 *   insn=0x00000000002ED948 string=0x00000000002ED94C "aG"
 *   insn=0x00000000002ED954 string=0x00000000002ED958 ""
 *   insn=0x00000000002ED964 string=0x00000000002ED968 ""
 *   insn=0x00000000002ED974 string=0x00000000002ED978 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::GameState::SharedCtor(__n128 *this)
{
  __n128 v1; // q0
  __n128 v2; // q1
  __n128 result; // q0

  this->n128_u32[2] = 0;
  v1.n128_u64[0] = (unsigned __int64)&Caver::Proto::GameState::_default_current_level_;
  this[1].n128_u64[0] = 0;
  v2.n128_u64[0] = (unsigned __int64)&Caver::Proto::GameState::_default_previous_portal_level_;
  v1.n128_u64[1] = (unsigned __int64)&Caver::Proto::GameState::_default_current_spawn_point_;
  v2.n128_u64[1] = (unsigned __int64)&Caver::Proto::GameState::_default_current_map_node_name_;
  this[5] = v1;
  this[6] = v2;
  v1.n128_u64[0] = (unsigned __int64)&Caver::Proto::GameState::_default_carried_object_template_;
  this[11].n128_u64[1] = 0;
  this[12].n128_u64[0] = (unsigned __int64)&Caver::Proto::GameState::_default_selected_menu_tab_;
  this[12].n128_u16[4] = 0;
  v1.n128_u64[1] = (unsigned __int64)&Caver::Proto::GameState::_default_carried_object_identifier_;
  this[7] = v1;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::GameState::_default_flashing_item_name_;
  this[17].n128_u64[1] = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::GameState::_default_flashing_skill_name_;
  this[13] = result;
  return result;
}

