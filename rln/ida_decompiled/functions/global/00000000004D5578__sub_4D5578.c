/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D5578
 * Mangled: sub_4D5578
 * Demangled: sub_4D5578
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7F40  Caver::ProgramMath::PushVector3(Caver::ProgramState *,Caver::Vector3 const&)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 12
 *   insn=0x00000000004D5588 string=0x00000000004D558C "U"
 *   insn=0x00000000004D5598 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D55A0 string=0x00000000004D55A4 "{"
 *   insn=0x00000000004D55A4 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D55B0 string=0x00000000004D55B4 "w"
 *   insn=0x00000000004D55C8 string=0x00000000004D55CC "&""
 *   insn=0x00000000004D55CC string=0x00000000004D55D0 "B "
 *   insn=0x00000000004D55DC string=0x00000000004D55E0 "!#"
 *   insn=0x00000000004D55F8 string=0x00000000004D55FC "Q"
 *   insn=0x00000000004D55FC string=0x00000000001F7F40 "0'"
 *   insn=0x00000000004D560C string=0x00000000004D5628 "*"
 *   insn=0x00000000004D5628 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D5578(void *a1)
{
  Caver::ProgramState *v1; // x19
  float *v2; // x0
  float *v3; // x20
  float v4; // s1
  float *v5; // x0
  float v6; // s2
  float v7; // s4
  float v8; // s5
  float v9; // s6
  float v10; // s2
  float v11; // s0
  const Caver::Vector3 *v12; // x2
  float v14[4]; // [xsp+8h] [xbp-38h] BYREF
  __int64 v15; // [xsp+18h] [xbp-28h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v3 = v2;
  Caver::ProgramState::PointerAtStackIndex(v1);
  v4 = v3[1];
  v7 = v5[1];
  v6 = v5[2];
  v8 = v3[2];
  v9 = v4 * v6;
  v10 = (float)(v8 * *v5) - (float)(v6 * *v3);
  v11 = (float)(v7 * *v3) - (float)(v4 * *v5);
  v14[0] = v9 - (float)(v8 * v7);
  v14[1] = v10;
  v14[2] = v11;
  Caver::ProgramMath::PushVector3(v1, (Caver::ProgramState *)v14, v12);
  return 1;
}

