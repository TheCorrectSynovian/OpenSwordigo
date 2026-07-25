/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CFD0
 * Mangled: sub_26CFD0
 * Demangled: sub_26CFD0
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FBCD0  Caver::ProgramState::IntAtStackIndex(int)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 29
 *   insn=0x000000000026CFE0 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026CFEC string=0x00000000001FC790 "0'"
 *   insn=0x000000000026CFFC string=0x000000000026D000 "!"
 *   insn=0x000000000026D000 string=0x000000000026D004 "wM"
 *   insn=0x000000000026D018 string=0x000000000026D01C "-;"
 *   insn=0x000000000026D01C string=0x00000000001FBCD0 "0'"
 *   insn=0x000000000026D02C string=0x000000000026D030 "S"
 *   insn=0x000000000026D02C string=0x00000000001FABE0 "0'"
 *   insn=0x000000000026D034 string=0x0000000000583734 "o"
 *   insn=0x000000000026D03C string=0x000000000026D040 "-"
 *   insn=0x000000000026D040 string=0x000000000026D044 "h.A"
 *   insn=0x000000000026D040 string=0x000000000026D064 "hB@"
 *   insn=0x000000000026D04C string=0x000000000026D050 "a6A"
 *   insn=0x000000000026D04C string=0x000000000026D0CC "h"
 *   insn=0x000000000026D050 string=0x000000000026D054 "h"
 *   insn=0x000000000026D054 string=0x000000000026D058 "   "
 *   insn=0x000000000026D058 string=0x000000000026D05C " L "
 *   insn=0x000000000026D068 string=0x000000000026D06C "t."
 *   insn=0x000000000026D06C string=0x000000000026D070 "t\n"
 *   insn=0x000000000026D074 string=0x000000000026D078 "`"
 *   insn=0x000000000026D074 string=0x000000000026D08C "`"
 *   insn=0x000000000026D080 string=0x000000000026D084 "hB@"
 *   insn=0x000000000026D080 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026D084 string=0x000000000026D088 "t\nA"
 *   insn=0x000000000026D098 string=0x000000000026D09C "u"
 *   insn=0x000000000026D0A4 string=0x000000000026D0A8 "`"
 *   insn=0x000000000026D0A4 string=0x000000000026D0B8 "q@"
 *   insn=0x000000000026D0B0 string=0x000000000026D0B4 "hB@"
 *   insn=0x000000000026D0CC string=0x000000000026D0D0 "t."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26CFD0(void *a1)
{
  Caver::ProgramState *v1; // x21
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x19
  int v5; // w20
  float v6; // s0
  float *v7; // x8
  __int64 v8; // x8
  __int64 v9; // x21

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
      v8 = *(_QWORD *)(v4 + 128);
      *(_DWORD *)(v4 + 308) = 0;
      *(_DWORD *)(v4 + 300) = v5;
      *(_DWORD *)(v4 + 264) = v5;
      if ( !v8 )
      {
        Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 112), (const Caver::Component *)v4);
        v8 = *(_QWORD *)(v4 + 128);
        v5 = *(_DWORD *)(v4 + 264);
      }
      *(float *)(v8 + 176) = *(float *)(v4 + 268) * (float)v5;
      v9 = *(_QWORD *)(v4 + 256);
      if ( v9 )
      {
        if ( !v8 )
        {
          Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 112), (const Caver::Component *)v4);
          v8 = *(_QWORD *)(v4 + 128);
        }
        *(_BYTE *)(v9 + 57) = v5 != *(_DWORD *)(v8 + 112);
      }
    }
    else
    {
      if ( *(_DWORD *)(v4 + 300) == v5 )
      {
        v7 = (float *)(v4 + 308);
        if ( *(float *)(v4 + 308) < v6 )
          v6 = *(float *)(v4 + 308);
      }
      else
      {
        v7 = (float *)(v4 + 308);
        *(_DWORD *)(v4 + 300) = v5;
      }
      *v7 = v6;
    }
  }
  return 0;
}

