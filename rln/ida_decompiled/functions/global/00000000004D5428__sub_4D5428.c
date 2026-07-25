/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D5428
 * Mangled: sub_4D5428
 * Demangled: sub_4D5428
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 11
 *   insn=0x00000000004D5434 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000004D5440 string=0x00000000001FC790 "0'"
 *   insn=0x00000000004D544C string=0x00000000004D5450 "!!"
 *   insn=0x00000000004D5454 string=0x00000000004D5458 "A""
 *   insn=0x00000000004D545C string=0x00000000004D5460 " "
 *   insn=0x00000000004D5464 string=0x00000000004D5468 "g"
 *   insn=0x00000000004D5468 string=0x00000000004D546C " "
 *   insn=0x00000000004D546C string=0x00000000004D5470 "0"
 *   insn=0x00000000004D5470 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004D5474 string=0x00000000004D5478 "J"
 *   insn=0x00000000004D5478 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_4D5428(void *a1)
{
  Caver::ProgramState *v1; // x19
  float *v2; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  Caver::ProgramState::PushFloat(
    v1,
    sqrtf((float)((float)(*v2 * *v2) + (float)(v2[1] * v2[1])) + (float)(v2[2] * v2[2])));
  return 1;
}

