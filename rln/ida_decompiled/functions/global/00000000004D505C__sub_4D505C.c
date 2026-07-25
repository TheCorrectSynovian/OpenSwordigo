/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D505C
 * Mangled: sub_4D505C
 * Demangled: sub_4D505C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F5730  Caver::Vector2::FromAngle(float)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F40  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *
 * Referenced strings: 9
 *   insn=0x00000000004D5068 string=0x00000000004D506C "T"
 *   insn=0x00000000004D5078 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D5084 string=0x00000000004D5088 "h"
 *   insn=0x00000000004D5084 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000004D5088 string=0x0000000000584004 "5"
 *   insn=0x00000000004D5098 string=0x00000000001F5730 "P'"
 *   insn=0x00000000004D50B0 string=0x00000000001F7F40 "0'"
 *   insn=0x00000000004D50C0 string=0x00000000004D50D8 "~"
 *   insn=0x00000000004D50D8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D505C(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::Vector2 *v2; // x0
  float v3; // s0
  const Caver::Vector3 *v4; // x2
  __int64 v6; // [xsp+0h] [xbp-30h] BYREF
  __int64 v7; // [xsp+8h] [xbp-28h] BYREF
  int v8; // [xsp+10h] [xbp-20h]
  __int64 v9; // [xsp+18h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  v2 = (Caver::Vector2 *)Caver::ProgramState::FloatAtStackIndex(v1, 1);
  Caver::Vector2::FromAngle(&v6, v2, v3 * 0.017453);
  v8 = 0;
  v7 = v6;
  Caver::ProgramMath::PushVector3(v1, (Caver::ProgramState *)&v7, v4);
  return 1;
}

