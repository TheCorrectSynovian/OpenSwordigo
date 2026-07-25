/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002696F0
 * Mangled: sub_2696F0
 * Demangled: sub_2696F0
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F4CE0  Caver::ProgramState::PushInt(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *
 * Referenced strings: 10
 *   insn=0x00000000002696F8 string=0x00000000002696FC "9G"
 *   insn=0x00000000002696FC string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000269704 string=0x0000000000269708 ""L"
 *   insn=0x0000000000269708 string=0x000000000026970C " "
 *   insn=0x0000000000269708 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000269718 string=0x000000000026971C "!0F"
 *   insn=0x000000000026971C string=0x000000000026168C " $"
 *   insn=0x0000000000269720 string=0x0000000000269724 "`"
 *   insn=0x0000000000269734 string=0x0000000000269738 "j-"
 *   insn=0x0000000000269738 string=0x00000000001F4CE0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2696F0(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x0
  int v5; // w1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2
    && (v3 = *v2) != 0
    && (v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityComponent::Interface)) != 0 )
  {
    v5 = *(_DWORD *)(v4 + 112);
  }
  else
  {
    v5 = 0;
  }
  Caver::ProgramState::PushInt(v1, v5);
  return 1;
}

