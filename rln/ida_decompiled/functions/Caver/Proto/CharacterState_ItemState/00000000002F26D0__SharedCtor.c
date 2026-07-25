/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F26D0
 * Mangled: _ZN5Caver5Proto24CharacterState_ItemState10SharedCtorEv
 * Demangled: Caver::Proto::CharacterState_ItemState::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000002F26DC string=0x00000000002F26E0 ")G"
 *   insn=0x00000000002F26E4 string=0x00000000002F26E8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::CharacterState_ItemState::SharedCtor(Caver::Proto::CharacterState_ItemState *this)
{
  double result; // d0

  *(_QWORD *)&result = 1;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 1;
  *((_QWORD *)this + 2) = &Caver::Proto::CharacterState_ItemState::_default_name_;
  return result;
}

