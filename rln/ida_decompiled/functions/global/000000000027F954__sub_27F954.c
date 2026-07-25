/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027F954
 * Mangled: sub_27F954
 * Demangled: sub_27F954
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FFD90  Caver::SceneObject::Activate(void)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x00000000002618B0  Caver::PhysicsObjectComponent::Interface(void)
 *
 * Referenced strings: 10
 *   insn=0x000000000027F960 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000027F96C string=0x00000000001FC790 "0'"
 *   insn=0x000000000027F980 string=0x00000000001F8D80 "0'"
 *   insn=0x000000000027F984 string=0x000000000027F988 "T"
 *   insn=0x000000000027F988 string=0x000000000027F98C "!#"
 *   insn=0x000000000027F98C string=0x000000000027F990 "!pG"
 *   insn=0x000000000027F99C string=0x000000000027F9A0 "\t"
 *   insn=0x000000000027F9A0 string=0x000000000027F9A4 "h"
 *   insn=0x000000000027F9A8 string=0x000000000027F9AC " "
 *   insn=0x000000000027F9AC string=0x000000000027F9B0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_27F954(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  char v4; // w19
  __int64 v5; // x0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    v4 = Caver::ProgramState::BoolAtStackIndex(v1, 2);
    if ( v3 )
    {
      v5 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::PhysicsObjectComponent::Interface);
      if ( v5 )
      {
        if ( (v4 & 1) != *(_BYTE *)(v5 + 112) )
        {
          *(_BYTE *)(v5 + 112) = v4 & 1;
          if ( (v4 & 1) != 0 )
            Caver::SceneObject::Activate(*(Caver::SceneObject **)(v5 + 40));
        }
      }
    }
  }
  else
  {
    Caver::ProgramState::BoolAtStackIndex(v1, 2);
  }
  return 0;
}

