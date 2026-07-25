/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E9458
 * Mangled: _ZN5Caver5Proto13PlayerProfile10SharedCtorEv
 * Demangled: Caver::Proto::PlayerProfile::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x00000000002E9460 string=0x00000000002E9464 ""
 *   insn=0x00000000002E9464 string=0x00000000002E9468 ")"
 *   insn=0x00000000002E946C string=0x00000000002E9470 "JQ@"
 *   insn=0x00000000002E9470 string=0x00000000002E9474 " "
 *   insn=0x00000000002E9478 string=0x00000000002E947C ")"
 *   insn=0x00000000002E9480 string=0x00000000002E9484 "!"
 *   insn=0x00000000002E9488 string=0x00000000002E948C ")uF"
 *   insn=0x00000000002E948C string=0x00000000002E9490 "\tP"
 *   insn=0x00000000002E9494 string=0x00000000002E9498 ")QG"
 *   insn=0x00000000002E9498 string=0x00000000002E949C " "
 *   insn=0x00000000002E94A0 string=0x00000000002E94A4 ")"
 *   insn=0x00000000002E94A8 string=0x00000000002E94AC "|"
 *   insn=0x00000000002E94AC string=0x00000000002E94B0 "\n|"
 *   insn=0x00000000002E94B0 string=0x00000000002E94B4 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::PlayerProfile::SharedCtor(__n128 *this)
{
  __n128 v1; // q1
  __n128 result; // q0

  this->n128_u32[2] = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::PlayerProfile::_default_equipped_weapon_name_;
  this[3].n128_u64[0] = 0;
  this[3].n128_u64[1] = 0;
  v1.n128_u64[0] = (unsigned __int64)&Caver::Proto::PlayerProfile::_default_weapon_trinket_name_;
  this[10].n128_u64[0] = (unsigned __int64)&Caver::Proto::PlayerProfile::_default_identifier_;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::PlayerProfile::_default_equipped_armor_name_;
  this[9].n128_u8[8] = 0;
  this[1].n128_u64[0] = (unsigned __int64)&Caver::Proto::PlayerProfile::_default_name_;
  this[1].n128_u64[1] = 0;
  this[2].n128_u64[0] = (unsigned __int64)&Caver::Proto::PlayerProfile::_default_current_level_title_;
  this[2].n128_u64[1] = 0;
  v1.n128_u64[1] = (unsigned __int64)&Caver::Proto::PlayerProfile::_default_armor_trinket_name_;
  this[4] = result;
  this[5] = v1;
  this[10].n128_u32[2] = 0;
  return result;
}

