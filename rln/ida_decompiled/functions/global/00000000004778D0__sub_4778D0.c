/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004778D0
 * Mangled: sub_4778D0
 * Demangled: sub_4778D0
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x0000000000202FD0  Caver::Vector2::Vector2(Caver::Vector3 const&)
 *
 * Referenced strings: 6
 *   insn=0x00000000004778E0 string=0x00000000004778E4 "T"
 *   insn=0x00000000004778F0 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004778FC string=0x0000000000477900 "`"
 *   insn=0x00000000004778FC string=0x00000000001FC790 "0'"
 *   insn=0x0000000000477948 string=0x0000000000477964 "["
 *   insn=0x0000000000477964 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4778D0(void *a1)
{
  Caver::ProgramState *v1; // x19
  __int64 *v2; // x0
  __int64 v3; // x21
  const Caver::Vector3 *v4; // x0
  _QWORD v6[2]; // [xsp+0h] [xbp-30h] BYREF

  v6[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v3 && v4 )
  {
    Caver::Vector2::Vector2((Caver::Vector2 *)v6, v4);
    *(_QWORD *)(v3 + 104) = v6[0];
  }
  return 0;
}

