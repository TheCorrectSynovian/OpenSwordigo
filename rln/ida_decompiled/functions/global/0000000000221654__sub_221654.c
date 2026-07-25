/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221654
 * Mangled: sub_221654
 * Demangled: sub_221654
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
 * Referenced strings: 15
 *   insn=0x0000000000221660 string=0x0000000000221664 "_g"
 *   insn=0x0000000000221664 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000022166C string=0x0000000000221670 "Hl"
 *   insn=0x0000000000221670 string=0x0000000000221674 "`"
 *   insn=0x0000000000221670 string=0x00000000001FC790 "0'"
 *   insn=0x000000000022168C string=0x00000000001FBCD0 "0'"
 *   insn=0x0000000000221694 string=0x0000000000221698 "4"
 *   insn=0x0000000000221698 string=0x000000000022169C ""
 *   insn=0x00000000002216A8 string=0x00000000001F8520 "0'"
 *   insn=0x00000000002216AC string=0x00000000002216B0 ""
 *   insn=0x00000000002216B0 string=0x00000000002216B4 ""
 *   insn=0x00000000002216B8 string=0x00000000002216BC ""
 *   insn=0x00000000002216D0 string=0x00000000002216D4 "A#"
 *   insn=0x00000000002216D4 string=0x00000000002216D8 ""
 *   insn=0x00000000002216E4 string=0x00000000001FC5A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_221654(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // w8
  float v5; // s8
  __int64 v6; // x0
  __int64 v7; // x0

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
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 264LL))(v6);
        if ( !*(_BYTE *)(v7 + 44) )
          v5 = (float)(*(float *)(v7 + 40) - *(float *)(v7 + 12)) / (float)(*(float *)(v7 + 48) * *(float *)(v7 + 52));
      }
    }
  }
  Caver::ProgramState::PushFloat(v1, v5);
  return 1;
}

