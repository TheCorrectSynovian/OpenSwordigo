/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000221318
 * Mangled: sub_221318
 * Demangled: sub_221318
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *
 * Referenced strings: 13
 *   insn=0x0000000000221324 string=0x0000000000221328 ".h"
 *   insn=0x0000000000221328 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000221334 string=0x0000000000221338 "`"
 *   insn=0x0000000000221334 string=0x00000000001FC790 "0'"
 *   insn=0x000000000022134C string=0x0000000000221350 "`j"
 *   insn=0x0000000000221350 string=0x00000000001FBCD0 "0'"
 *   insn=0x0000000000221360 string=0x00000000001F8D80 "0'"
 *   insn=0x0000000000221364 string=0x0000000000221368 "4"
 *   insn=0x0000000000221374 string=0x0000000000221378 "j\"
 *   insn=0x0000000000221378 string=0x00000000001F8520 "0'"
 *   insn=0x000000000022137C string=0x0000000000221380 "H@"
 *   insn=0x0000000000221380 string=0x0000000000221384 "i"
 *   insn=0x0000000000221384 string=0x0000000000221388 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_221318(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // w21
  char v5; // w19
  __int64 v6; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  v4 = Caver::ProgramState::IntAtStackIndex(v1, 2);
  v5 = Caver::ProgramState::BoolAtStackIndex(v1, 3);
  if ( v3 )
  {
    if ( v4 )
    {
      Caver::SceneObject::ComponentWithIdentifier(v3);
      if ( v6 )
        *(_BYTE *)(*(_QWORD *)(v6 + 144) + 56LL) = v5 & 1;
    }
  }
  return 0;
}

