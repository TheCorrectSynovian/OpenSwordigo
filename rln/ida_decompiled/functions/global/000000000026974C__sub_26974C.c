/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026974C
 * Mangled: sub_26974C
 * Demangled: sub_26974C
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026168C  Caver::EntityComponent::Interface(void)
 *
 * Referenced strings: 15
 *   insn=0x0000000000269754 string=0x0000000000269758 ""G"
 *   insn=0x0000000000269758 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000269760 string=0x0000000000269764 "L"
 *   insn=0x0000000000269764 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000269774 string=0x0000000000269778 "VI"
 *   insn=0x0000000000269778 string=0x00000000001FBCD0 "0'"
 *   insn=0x000000000026977C string=0x0000000000269780 "4"
 *   insn=0x0000000000269784 string=0x0000000000269788 "!0F"
 *   insn=0x0000000000269788 string=0x000000000026168C " $"
 *   insn=0x0000000000269794 string=0x0000000000269798 "p@"
 *   insn=0x000000000026979C string=0x00000000002697A0 " "
 *   insn=0x00000000002697A0 string=0x00000000002697A4 ""
 *   insn=0x00000000002697A4 string=0x00000000002697A8 "i~"
 *   insn=0x00000000002697AC string=0x00000000002697B0 "\tA"
 *   insn=0x00000000002697BC string=0x00000000002697C0 "DI"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26974C(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  int v4; // w19
  __int64 v5; // x0
  __int64 v6; // x8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    v4 = Caver::ProgramState::IntAtStackIndex(v1, 2);
    if ( v3 )
    {
      v5 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityComponent::Interface);
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 112) != v4 )
        {
          v6 = *(_QWORD *)(v5 + 40);
          *(_DWORD *)(v5 + 112) = v4;
          *(_BYTE *)(v6 + 144) = v4 < 0;
        }
      }
    }
  }
  else
  {
    Caver::ProgramState::IntAtStackIndex(v1, 2);
  }
  return 0;
}

