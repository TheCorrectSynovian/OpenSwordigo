/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022157C
 * Mangled: sub_22157C
 * Demangled: sub_22157C
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC5A0  Caver::ProgramState::PushFloat(float)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 16
 *   insn=0x0000000000221590 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000221598 string=0x000000000022159C "}l"
 *   insn=0x000000000022159C string=0x00000000002215A0 "`"
 *   insn=0x000000000022159C string=0x00000000001FC790 "0'"
 *   insn=0x00000000002215B8 string=0x00000000001FBCD0 "0'"
 *   insn=0x00000000002215C8 string=0x00000000002215CC ""
 *   insn=0x00000000002215C8 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000002215E4 string=0x00000000002215E8 "@"
 *   insn=0x00000000002215E4 string=0x00000000001F8520 "0'"
 *   insn=0x00000000002215E8 string=0x00000000002215EC ""
 *   insn=0x00000000002215EC string=0x00000000002215F0 ""
 *   insn=0x00000000002215F4 string=0x00000000002215F8 ""
 *   insn=0x0000000000221624 string=0x0000000000221628 "a$"
 *   insn=0x0000000000221628 string=0x000000000022162C "\t"
 *   insn=0x0000000000221630 string=0x0000000000221634 " "
 *   insn=0x0000000000221638 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_22157C(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // w21
  float v5; // s0
  float v6; // s8
  float v7; // s9
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x8
  float v11; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  v4 = Caver::ProgramState::IntAtStackIndex(v1, 2);
  Caver::ProgramState::FloatAtStackIndex(v1, 3);
  v6 = v5;
  v7 = 0.0;
  if ( v3 )
  {
    if ( v4 )
    {
      Caver::SceneObject::ComponentWithIdentifier(v3);
      if ( v8 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 264LL))(v8);
        v10 = *(_QWORD *)(v9 + 24);
        if ( v10 )
          v11 = (float)*(int *)(v10 + 8);
        else
          v11 = 0.0;
        v7 = (float)((float)((float)(v6 / v11) * *(float *)(v9 + 40)) - *(float *)(v9 + 12))
           / (float)(*(float *)(v9 + 48) * *(float *)(v9 + 52));
      }
    }
  }
  Caver::ProgramState::PushFloat(v1, v7);
  return 1;
}

