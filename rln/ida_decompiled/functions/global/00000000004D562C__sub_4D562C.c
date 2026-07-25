/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D562C
 * Mangled: sub_4D562C
 * Demangled: sub_4D562C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F40  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *
 * Referenced strings: 11
 *   insn=0x00000000004D5638 string=0x00000000004D563C "T"
 *   insn=0x00000000004D5644 string=0x00000000004D5648 "f"
 *   insn=0x00000000004D5648 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D5650 string=0x00000000004D5654 "O"
 *   insn=0x00000000004D5654 string=0x00000000004D5658 ""
 *   insn=0x00000000004D5654 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D565C string=0x00000000004D5660 "@"
 *   insn=0x00000000004D5668 string=0x00000000004D566C "1"
 *   insn=0x00000000004D5674 string=0x00000000004D5678 "2"
 *   insn=0x00000000004D5678 string=0x00000000001F7F40 "0'"
 *   insn=0x00000000004D56A0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D562C(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 *v2; // x0
  const Caver::Vector3 *v3; // x2
  __int64 v5; // [xsp+8h] [xbp-28h] BYREF
  int v6; // [xsp+10h] [xbp-20h]
  __int64 v7; // [xsp+18h] [xbp-18h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v5 = *v2;
  v6 = *((_DWORD *)v2 + 2);
  Caver::Vector3::Normalize((Caver::Vector3 *)&v5);
  Caver::ProgramMath::PushVector3(v1, (Caver::ProgramState *)&v5, v3);
  return 1;
}

