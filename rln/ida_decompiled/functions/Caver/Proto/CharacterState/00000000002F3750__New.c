/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F3750
 * Mangled: _ZNK5Caver5Proto14CharacterState3NewEv
 * Demangled: Caver::Proto::CharacterState::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 21
 *   insn=0x00000000002F375C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F3760 string=0x00000000002F3764 "\t"
 *   insn=0x00000000002F3764 string=0x00000000002F3768 ""
 *   insn=0x00000000002F376C string=0x00000000002F3770 "\t"
 *   insn=0x00000000002F3774 string=0x00000000002F3778 "\t4"
 *   insn=0x00000000002F377C string=0x00000000002F3780 ")yC"
 *   insn=0x00000000002F3784 string=0x00000000002F3788 "\n0"
 *   insn=0x00000000002F3788 string=0x00000000002F378C "\nx"
 *   insn=0x00000000002F3790 string=0x00000000002F3794 "!"
 *   insn=0x00000000002F3798 string=0x00000000002F379C "J"
 *   insn=0x00000000002F379C string=0x00000000002F37A0 ")u@"
 *   insn=0x00000000002F37AC string=0x00000000002F37B0 " "
 *   insn=0x00000000002F37B4 string=0x00000000002F37B8 "A"
 *   insn=0x00000000002F37BC string=0x00000000002F37C0 ")"
 *   insn=0x00000000002F37C0 string=0x00000000002F37C4 "J"
 *   insn=0x00000000002F37C8 string=0x00000000002F37CC "A"
 *   insn=0x00000000002F37CC string=0x00000000002F37D0 " "
 *   insn=0x00000000002F37D0 string=0x00000000002F37D4 "A"
 *   insn=0x00000000002F37D8 string=0x00000000002F37DC "J"
 *   insn=0x00000000002F37DC string=0x00000000002F37E0 "|"
 *   insn=0x00000000002F37E4 string=0x00000000002F37E8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::CharacterState::New(Caver::Proto::CharacterState *this)
{
  __int64 v1; // x0
  __int128 v2; // q1
  __n128 result; // q0

  v1 = operator new(0xD0u);
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 32) = v1 + 56;
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 104) = v1 + 128;
  *(_DWORD *)(v1 + 48) = 4;
  *(_DWORD *)(v1 + 120) = 4;
  *(_QWORD *)&v2 = &Caver::Proto::CharacterState::_default_equipped_weapon_;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 112) = 0;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::CharacterState::_default_current_skill_;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::CharacterState::_default_equipped_armor_;
  *(_OWORD *)(v1 + 88) = v2;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::CharacterState::_default_weapon_trinket_;
  *(_QWORD *)&v2 = &Caver::Proto::CharacterState::_default_armor_trinket_;
  *(_QWORD *)v1 = off_6C70F0;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 192) = 0;
  *(_QWORD *)(v1 + 200) = 0;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::CharacterState::_default_skill_trinket_;
  *(__n128 *)(v1 + 160) = result;
  *(_OWORD *)(v1 + 176) = v2;
  return result;
}

