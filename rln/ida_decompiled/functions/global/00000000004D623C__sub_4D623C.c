/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D623C
 * Mangled: sub_4D623C
 * Demangled: sub_4D623C
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F4CE0  Caver::ProgramState::PushInt(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FCE30  Caver::fastrandom(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000004D6248 string=0x00000000004D624C "e"
 *   insn=0x00000000004D624C string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D625C string=0x00000000001FBCD0 "0'"
 *   insn=0x00000000004D6274 string=0x00000000001FCE30 "0'"
 *   insn=0x00000000004D6278 string=0x00000000004D627C ""
 *   insn=0x00000000004D627C string=0x00000000004D6280 "\t"
 *   insn=0x00000000004D6280 string=0x00000000004D6284 "("
 *   insn=0x00000000004D6290 string=0x00000000001F4CE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D623C(void *a1)
{
  Caver::ProgramState *v1; // x19
  int v2; // w20
  Caver *v3; // x0
  int v4; // w21
  int v5; // w0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  v2 = Caver::ProgramState::IntAtStackIndex(v1, 1);
  v3 = (Caver *)Caver::ProgramState::IntAtStackIndex(v1, 2);
  v4 = (int)v3;
  v5 = Caver::fastrandom(v3);
  Caver::ProgramState::PushInt(v1, v5 % (1 - v2 + v4) + v2);
  return 1;
}

