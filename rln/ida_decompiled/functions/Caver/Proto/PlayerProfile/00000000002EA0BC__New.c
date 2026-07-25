/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EA0BC
 * Mangled: _ZNK5Caver5Proto13PlayerProfile3NewEv
 * Demangled: Caver::Proto::PlayerProfile::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 20
 *   insn=0x00000000002EA0C4 string=0x00000000002EA0C8 "F-"
 *   insn=0x00000000002EA0C8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002EA0CC string=0x00000000002EA0D0 "\t"
 *   insn=0x00000000002EA0D0 string=0x00000000002EA0D4 "]B"
 *   insn=0x00000000002EA0D4 string=0x00000000002EA0D8 "\t|"
 *   insn=0x00000000002EA0E4 string=0x00000000002EA0E8 ")"
 *   insn=0x00000000002EA0E8 string=0x00000000002EA0EC "\np"
 *   insn=0x00000000002EA0F0 string=0x00000000002EA0F4 "J"
 *   insn=0x00000000002EA0F4 string=0x00000000002EA0F8 " "
 *   insn=0x00000000002EA0FC string=0x00000000002EA100 ")"
 *   insn=0x00000000002EA100 string=0x00000000002EA104 "A"
 *   insn=0x00000000002EA108 string=0x00000000002EA10C "JuF"
 *   insn=0x00000000002EA10C string=0x00000000002EA110 "A"
 *   insn=0x00000000002EA110 string=0x00000000002EA114 "\nP"
 *   insn=0x00000000002EA118 string=0x00000000002EA11C "JQ@"
 *   insn=0x00000000002EA120 string=0x00000000002EA124 ""
 *   insn=0x00000000002EA128 string=0x00000000002EA12C "QG"
 *   insn=0x00000000002EA134 string=0x00000000002EA138 ""
 *   insn=0x00000000002EA13C string=0x00000000002EA140 "\t|"
 *   insn=0x00000000002EA140 string=0x00000000002EA144 "\n|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::PlayerProfile::New(Caver::Proto::PlayerProfile *this)
{
  __int64 v1; // x0
  __int128 v2; // q1
  __n128 result; // q0

  v1 = operator new(0xB0u);
  *(_QWORD *)(v1 + 96) = v1 + 120;
  *(_QWORD *)(v1 + 104) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 112) = 4;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::PlayerProfile::_default_equipped_weapon_name_;
  *(_QWORD *)&v2 = &Caver::Proto::PlayerProfile::_default_weapon_trinket_name_;
  *(_QWORD *)(v1 + 160) = &Caver::Proto::PlayerProfile::_default_identifier_;
  *(_QWORD *)(v1 + 48) = 0;
  *(_QWORD *)(v1 + 56) = 0;
  *(_QWORD *)v1 = off_6C6DA8;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::PlayerProfile::_default_equipped_armor_name_;
  *(_BYTE *)(v1 + 152) = 0;
  *(_QWORD *)(v1 + 16) = &Caver::Proto::PlayerProfile::_default_name_;
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 32) = &Caver::Proto::PlayerProfile::_default_current_level_title_;
  *(_QWORD *)(v1 + 40) = 0;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::PlayerProfile::_default_armor_trinket_name_;
  *(__n128 *)(v1 + 64) = result;
  *(_OWORD *)(v1 + 80) = v2;
  *(_DWORD *)(v1 + 168) = 0;
  return result;
}

