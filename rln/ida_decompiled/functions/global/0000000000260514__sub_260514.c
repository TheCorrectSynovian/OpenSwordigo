/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000260514
 * Mangled: sub_260514
 * Demangled: sub_260514
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000201900  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *   0x0000000000261698  Caver::CharControllerComponent::Interface(void)
 *
 * Referenced strings: 11
 *   insn=0x0000000000260524 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000260530 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026053C string=0x0000000000260540 "!$"
 *   insn=0x0000000000260540 string=0x0000000000260544 "!"
 *   insn=0x0000000000260544 string=0x0000000000260548 "&"
 *   insn=0x0000000000260544 string=0x0000000000261698 " $"
 *   insn=0x0000000000260560 string=0x0000000000260564 "`"
 *   insn=0x000000000026057C string=0x0000000000260580 "t"
 *   insn=0x000000000026057C string=0x00000000001F8D80 "0'"
 *   insn=0x0000000000260580 string=0x0000000000260584 "U"
 *   insn=0x000000000026058C string=0x0000000000260590 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_260514(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  Caver::SceneObject **v5; // x0
  Caver::SceneObject *v6; // x21
  char v7; // w0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::CharControllerComponent::Interface);
  else
    v4 = 0;
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v5 )
    v6 = *v5;
  else
    v6 = 0;
  v7 = Caver::ProgramState::BoolAtStackIndex(v1, 3);
  if ( v4 && v6 && (*(_DWORD *)(v4 + 720) != 2 || !*(_QWORD *)(v4 + 664)) )
    Caver::CharControllerComponent::Pickup((Caver::CharControllerComponent *)v4, v6, v7 & 1);
  return 0;
}

