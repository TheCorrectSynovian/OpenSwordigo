/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D5184
 * Mangled: sub_4D5184
 * Demangled: sub_4D5184
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F40  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 9
 *   insn=0x00000000004D5190 string=0x00000000004D5194 "T"
 *   insn=0x00000000004D51A0 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D51A8 string=0x00000000004D51AC "y"
 *   insn=0x00000000004D51AC string=0x00000000004D51B0 ""
 *   insn=0x00000000004D51AC string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D51C0 string=0x00000000004D51C4 "_"
 *   insn=0x00000000004D51C4 string=0x00000000001F7F40 "0'"
 *   insn=0x00000000004D51D4 string=0x00000000004D51EC "9"
 *   insn=0x00000000004D51EC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D5184(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 *v2; // x0
  __int64 v3; // x8
  const Caver::Vector3 *v4; // x2
  __int64 v6; // [xsp+8h] [xbp-28h] BYREF
  int v7; // [xsp+10h] [xbp-20h]
  __int64 v8; // [xsp+18h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = *v2;
  v7 = 0;
  v6 = v3;
  Caver::ProgramMath::PushVector3(v1, (Caver::ProgramState *)&v6, v4);
  return 1;
}

