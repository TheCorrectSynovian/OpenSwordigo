/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002214E4
 * Mangled: sub_2214E4
 * Demangled: sub_2214E4
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 9
 *   insn=0x00000000002214F4 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000221500 string=0x0000000000221504 "`"
 *   insn=0x0000000000221500 string=0x00000000001FC790 "0'"
 *   insn=0x000000000022151C string=0x00000000001FBCD0 "0'"
 *   insn=0x0000000000221538 string=0x00000000001F8520 "0'"
 *   insn=0x000000000022153C string=0x0000000000221540 ""
 *   insn=0x0000000000221540 string=0x0000000000221544 ""
 *   insn=0x0000000000221554 string=0x0000000000221558 "H"
 *   insn=0x0000000000221564 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2214E4(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // w8
  float v5; // s8
  __int64 v6; // x0
  float *v7; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  v4 = Caver::ProgramState::IntAtStackIndex(v1, 2);
  v5 = 0.0;
  if ( v3 )
  {
    if ( v4 )
    {
      Caver::SceneObject::ComponentWithIdentifier(v3);
      if ( v6 )
      {
        v7 = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6);
        v5 = v7[10] / (float)(v7[12] * v7[13]);
      }
    }
  }
  Caver::ProgramState::PushFloat(v1, v5);
  return 1;
}

