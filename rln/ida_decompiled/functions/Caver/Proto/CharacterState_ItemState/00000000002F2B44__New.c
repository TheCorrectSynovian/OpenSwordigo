/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002F2B44
 * Mangled: _ZNK5Caver5Proto24CharacterState_ItemState3NewEv
 * Demangled: Caver::Proto::CharacterState_ItemState::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 7
 *   insn=0x00000000002F2B50 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002F2B54 string=0x00000000002F2B58 ""
 *   insn=0x00000000002F2B60 string=0x00000000002F2B64 " "
 *   insn=0x00000000002F2B64 string=0x00000000002F2B68 "A"
 *   insn=0x00000000002F2B68 string=0x00000000002F2B6C ""
 *   insn=0x00000000002F2B70 string=0x00000000002F2B74 ")G"
 *   insn=0x00000000002F2B78 string=0x00000000002F2B7C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::CharacterState_ItemState::New(Caver::Proto::CharacterState_ItemState *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x20u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_QWORD *)&result = 1;
  *(_QWORD *)v1 = off_6C7078;
  *(_QWORD *)(v1 + 24) = 1;
  *(_QWORD *)(v1 + 16) = &Caver::Proto::CharacterState_ItemState::_default_name_;
  return result;
}

