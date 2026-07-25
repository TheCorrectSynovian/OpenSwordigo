/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000477850
 * Mangled: sub_477850
 * Demangled: sub_477850
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
 *   insn=0x000000000047785C string=0x0000000000477860 "T"
 *   insn=0x000000000047786C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000477878 string=0x00000000001FC790 "0'"
 *   insn=0x000000000047787C string=0x0000000000477880 ""
 *   insn=0x0000000000477884 string=0x0000000000477888 "5@"
 *   insn=0x00000000004778A0 string=0x00000000004778A4 "!"
 *   insn=0x00000000004778CC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_477850(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 v2; // x0
  __int64 v4; // [xsp+8h] [xbp-28h] BYREF
  int v5; // [xsp+10h] [xbp-20h]
  __int64 v6; // [xsp+18h] [xbp-18h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && *(_QWORD *)v2 )
    v4 = *(_QWORD *)(*(_QWORD *)v2 + 104LL);
  else
    v4 = 0;
  v5 = 0;
  Caver::ProgramState::PushVector3(v1, (const Caver::Vector3 *)&v4);
  return 1;
}

