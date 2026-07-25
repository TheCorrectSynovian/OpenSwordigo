/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002605C0
 * Mangled: sub_2605C0
 * Demangled: sub_2605C0
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
 * Referenced strings: 10
 *   insn=0x00000000002605CC string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002605D4 string=0x00000000002605D8 "np"
 *   insn=0x00000000002605D8 string=0x00000000001FC790 "0'"
 *   insn=0x00000000002605E0 string=0x00000000002605E4 "`"
 *   insn=0x00000000002605E4 string=0x00000000002605E8 "!$"
 *   insn=0x00000000002605E8 string=0x00000000002605EC "!"
 *   insn=0x00000000002605EC string=0x0000000000261698 " $"
 *   insn=0x0000000000260600 string=0x00000000001F8D80 "0'"
 *   insn=0x000000000026060C string=0x0000000000260610 "a"
 *   insn=0x0000000000260614 string=0x0000000000260618 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2605C0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x20
  char v5; // w0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
  {
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::CharControllerComponent::Interface);
    v5 = Caver::ProgramState::BoolAtStackIndex(v1, 2);
    if ( v4 && *(_DWORD *)(v4 + 720) == 2 && *(_QWORD *)(v4 + 664) )
      Caver::CharControllerComponent::Pickup((Caver::CharControllerComponent *)v4, 0, v5 & 1);
  }
  else
  {
    Caver::ProgramState::BoolAtStackIndex(v1, 2);
  }
  return 0;
}

