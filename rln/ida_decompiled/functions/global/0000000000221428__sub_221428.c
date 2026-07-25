/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221428
 * Mangled: sub_221428
 * Demangled: sub_221428
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 14
 *   insn=0x000000000022143C string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000221448 string=0x000000000022144C "`"
 *   insn=0x0000000000221448 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000221460 string=0x0000000000221464 "j"
 *   insn=0x0000000000221464 string=0x00000000001FBCD0 "0'"
 *   insn=0x0000000000221474 string=0x0000000000221478 ""
 *   insn=0x0000000000221474 string=0x00000000001FABE0 "0'"
 *   insn=0x000000000022147C string=0x0000000000221480 "u"
 *   insn=0x0000000000221488 string=0x000000000022148C "%\"
 *   insn=0x000000000022148C string=0x00000000001F8520 "0'"
 *   insn=0x0000000000221494 string=0x0000000000221498 "h"
 *   insn=0x000000000022149C string=0x00000000002214A0 ""
 *   insn=0x00000000002214A4 string=0x00000000002214A8 "h"
 *   insn=0x00000000002214B0 string=0x00000000002214B4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_221428(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // w21
  float v5; // s0
  float v6; // s8
  __int64 v7; // x0
  __int64 v8; // x19
  __int64 v9; // x20
  __int64 v10; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  v4 = Caver::ProgramState::IntAtStackIndex(v1, 2);
  Caver::ProgramState::FloatAtStackIndex(v1, 3);
  v6 = v5;
  if ( v3 )
  {
    if ( v4 )
    {
      Caver::SceneObject::ComponentWithIdentifier(v3);
      v8 = v7;
      if ( v7 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 264LL))(v7);
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 264LL))(v8);
        *(float *)(v9 + 12) = v6 * (float)(*(float *)(v10 + 48) * *(float *)(v10 + 52));
      }
    }
  }
  return 0;
}

