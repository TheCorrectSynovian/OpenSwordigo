/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F3048
 * Mangled: _ZN5Caver5Proto14CharacterState10SharedCtorEv
 * Demangled: Caver::Proto::CharacterState::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000002F3048 string=0x00000000002F304C "yC"
 *   insn=0x00000000002F3058 string=0x00000000002F305C "u@"
 *   insn=0x00000000002F3068 string=0x00000000002F306C ""
 *   insn=0x00000000002F3074 string=0x00000000002F3078 ""
 *   insn=0x00000000002F3084 string=0x00000000002F3088 ""
 *   insn=0x00000000002F3090 string=0x00000000002F3094 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::Proto::CharacterState::SharedCtor(Caver::Proto::CharacterState *this)
{
  __int128 v1; // q0
  __int128 v2; // q1
  __n128 result; // q0

  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *(_QWORD *)&v1 = &Caver::Proto::CharacterState::_default_equipped_weapon_;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)&v2 = &Caver::Proto::CharacterState::_default_current_skill_;
  *((_QWORD *)&v1 + 1) = &Caver::Proto::CharacterState::_default_equipped_armor_;
  *(_OWORD *)((char *)this + 88) = v1;
  result.n128_u64[0] = (unsigned __int64)&Caver::Proto::CharacterState::_default_armor_trinket_;
  *((_QWORD *)&v2 + 1) = &Caver::Proto::CharacterState::_default_weapon_trinket_;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 25) = 0;
  result.n128_u64[1] = (unsigned __int64)&Caver::Proto::CharacterState::_default_skill_trinket_;
  *((_OWORD *)this + 10) = v2;
  *((__n128 *)this + 11) = result;
  return result;
}

