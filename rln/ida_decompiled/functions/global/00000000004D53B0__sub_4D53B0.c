/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D53B0
 * Mangled: sub_4D53B0
 * Demangled: sub_4D53B0
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6DE0  Caver::Vector2::Angle(void)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 10
 *   insn=0x00000000004D53BC string=0x00000000004D53C0 "T"
 *   insn=0x00000000004D53CC string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D53D8 string=0x00000000004D53DC ""
 *   insn=0x00000000004D53D8 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D53E4 string=0x00000000004D53E8 "~"
 *   insn=0x00000000004D53E8 string=0x00000000004D53EC "h"
 *   insn=0x00000000004D53E8 string=0x00000000001F6DE0 "0'"
 *   insn=0x00000000004D53F8 string=0x00000000004D53FC "i"
 *   insn=0x00000000004D53FC string=0x00000000001FC5A0 "0'"
 *   insn=0x00000000004D5424 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D53B0(void *a1)
{
  Caver::ProgramState *v1; // x19
  _QWORD *v2; // x0
  float v3; // s0
  _QWORD v5[2]; // [xsp+0h] [xbp-20h] BYREF

  v5[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  v5[0] = *v2;
  Caver::Vector2::Angle((Caver::Vector2 *)v5);
  Caver::ProgramState::PushFloat(v1, v3 * 57.296);
  return 1;
}

