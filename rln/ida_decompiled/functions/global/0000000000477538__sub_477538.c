/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477538
 * Mangled: sub_477538
 * Demangled: sub_477538
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FFCD0  Caver::ProgramState::PushVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 7
 *   insn=0x0000000000477544 string=0x0000000000477548 "T"
 *   insn=0x0000000000477554 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000477560 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000477564 string=0x0000000000477568 ""
 *   insn=0x000000000047756C string=0x0000000000477570 "\t9@"
 *   insn=0x00000000004775A4 string=0x00000000004775BC "E"
 *   insn=0x00000000004775BC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_477538(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 *v2; // x0
  __int64 v3; // x8
  int v4; // s0
  __int64 v6; // [xsp+8h] [xbp-28h] BYREF
  int v7; // [xsp+10h] [xbp-20h]
  __int64 v8; // [xsp+18h] [xbp-18h]

  v8 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = *(_DWORD *)(v3 + 120);
    v6 = *(_QWORD *)(v3 + 112);
  }
  else
  {
    v4 = 0;
    v6 = 0;
  }
  v7 = v4;
  Caver::ProgramState::PushVector3(v1, (const Caver::Vector3 *)&v6);
  return 1;
}

