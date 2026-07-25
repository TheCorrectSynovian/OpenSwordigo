/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004773BC
 * Mangled: sub_4773BC
 * Demangled: sub_4773BC
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
 *   insn=0x00000000004773C8 string=0x00000000004773CC "T"
 *   insn=0x00000000004773D8 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004773E4 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004773E8 string=0x00000000004773EC ""
 *   insn=0x00000000004773F0 string=0x00000000004773F4 "9@"
 *   insn=0x000000000047740C string=0x0000000000477410 "0""
 *   insn=0x0000000000477438 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4773BC(void *a1)
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
    v4 = *(_QWORD *)(*(_QWORD *)v2 + 112LL);
  else
    v4 = 0;
  v5 = 0;
  Caver::ProgramState::PushVector3(v1, (const Caver::Vector3 *)&v4);
  return 1;
}

