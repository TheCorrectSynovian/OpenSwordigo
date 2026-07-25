/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002213A0
 * Mangled: sub_2213A0
 * Demangled: sub_2213A0
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
 *   insn=0x00000000002213B0 string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002213BC string=0x00000000002213C0 "`"
 *   insn=0x00000000002213BC string=0x00000000001FC790 "0'"
 *   insn=0x00000000002213D4 string=0x00000000002213D8 ">j"
 *   insn=0x00000000002213D8 string=0x00000000001FBCD0 "0'"
 *   insn=0x00000000002213E4 string=0x00000000002213E8 "f^"
 *   insn=0x00000000002213E8 string=0x00000000001F8D80 "0'"
 *   insn=0x00000000002213EC string=0x00000000002213F0 "4"
 *   insn=0x00000000002213FC string=0x0000000000221400 "H\"
 *   insn=0x0000000000221400 string=0x00000000001F8520 "0'"
 *   insn=0x0000000000221404 string=0x0000000000221408 "H@"
 *   insn=0x0000000000221408 string=0x000000000022140C "i"
 *   insn=0x000000000022140C string=0x0000000000221410 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2213A0(void *a1)
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
        *(_BYTE *)(*(_QWORD *)(v6 + 144) + 57LL) = v5 & 1;
    }
  }
  return 0;
}

