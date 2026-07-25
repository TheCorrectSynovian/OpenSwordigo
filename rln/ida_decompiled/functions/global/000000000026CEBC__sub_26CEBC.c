/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CEBC
 * Mangled: sub_26CEBC
 * Demangled: sub_26CEBC
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FD020  Caver::EntityComponent::SetFacingDirection(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 32
 *   insn=0x000000000026CEC8 string=0x000000000026CECC "E9"
 *   insn=0x000000000026CECC string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026CED4 string=0x000000000026CED8 ".>"
 *   insn=0x000000000026CED8 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026CEE8 string=0x000000000026CEEC "!"
 *   insn=0x000000000026CF04 string=0x000000000026CF08 "r;"
 *   insn=0x000000000026CF08 string=0x00000000001FBCD0 "0'"
 *   insn=0x000000000026CF14 string=0x000000000026CF18 "27"
 *   insn=0x000000000026CF18 string=0x00000000001FABE0 "0'"
 *   insn=0x000000000026CF20 string=0x0000000000583734 "o"
 *   insn=0x000000000026CF28 string=0x000000000026CF2C "-"
 *   insn=0x000000000026CF2C string=0x000000000026CF30 "h*A"
 *   insn=0x000000000026CF2C string=0x000000000026CF50 "`B@"
 *   insn=0x000000000026CF38 string=0x000000000026CF3C "a2A"
 *   insn=0x000000000026CF38 string=0x000000000026CFB0 "h"
 *   insn=0x000000000026CF3C string=0x000000000026CF40 "h"
 *   insn=0x000000000026CF40 string=0x000000000026CF44 "   "
 *   insn=0x000000000026CF44 string=0x000000000026CF48 " L "
 *   insn=0x000000000026CF48 string=0x000000000026CF4C ""
 *   insn=0x000000000026CF54 string=0x000000000026CF58 "u*"
 *   insn=0x000000000026CF5C string=0x000000000026CF60 "`"
 *   insn=0x000000000026CF68 string=0x000000000026CF6C "`B@"
 *   insn=0x000000000026CF68 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026CF70 string=0x000000000026CF74 "+@"
 *   insn=0x000000000026CF74 string=0x000000000026CF78 "t"
 *   insn=0x000000000026CF74 string=0x00000000001FD020 "0'"
 *   insn=0x000000000026CF7C string=0x000000000026CF80 "hB@"
 *   insn=0x000000000026CF80 string=0x000000000026CF84 "u\nA"
 *   insn=0x000000000026CF88 string=0x000000000026CF8C "`"
 *   insn=0x000000000026CF88 string=0x000000000026CF9C "q@"
 *   insn=0x000000000026CF94 string=0x000000000026CF98 "hB@"
 *   insn=0x000000000026CFB0 string=0x000000000026CFB4 "u*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26CEBC(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x19
  int v5; // w21
  float v6; // s0
  float *v7; // x8
  Caver::EntityComponent *v8; // x0
  __int64 v9; // x20
  __int64 v10; // x8
  int v11; // w21

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface);
  else
    v4 = 0;
  v5 = Caver::ProgramState::IntAtStackIndex(v1, 2);
  Caver::ProgramState::FloatAtStackIndex(v1, 3);
  if ( v4 )
  {
    if ( v6 <= 0.001 )
    {
      v8 = *(Caver::EntityComponent **)(v4 + 128);
      *(_DWORD *)(v4 + 304) = 0;
      *(_DWORD *)(v4 + 296) = v5;
      if ( !v8 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 112), (const Caver::Component *)v4);
        v8 = *(Caver::EntityComponent **)(v4 + 128);
      }
      Caver::EntityComponent::SetFacingDirection(v8, v5);
      v9 = *(_QWORD *)(v4 + 256);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v4 + 128);
        v11 = *(_DWORD *)(v4 + 264);
        if ( !v10 )
        {
          Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 112), (const Caver::Component *)v4);
          v10 = *(_QWORD *)(v4 + 128);
        }
        *(_BYTE *)(v9 + 57) = v11 != *(_DWORD *)(v10 + 112);
      }
    }
    else
    {
      if ( *(_DWORD *)(v4 + 296) == v5 )
      {
        v7 = (float *)(v4 + 304);
        if ( *(float *)(v4 + 304) < v6 )
          v6 = *(float *)(v4 + 304);
      }
      else
      {
        v7 = (float *)(v4 + 304);
        *(_DWORD *)(v4 + 296) = v5;
      }
      *v7 = v6;
    }
  }
  return 0;
}

