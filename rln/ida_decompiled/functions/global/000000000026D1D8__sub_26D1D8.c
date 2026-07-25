/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026D1D8
 * Mangled: sub_26D1D8
 * Demangled: sub_26D1D8
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F8D80  Caver::ProgramState::BoolAtStackIndex(int)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x000000000026E65C  Caver::EntityControllerComponent::Interface(void)
 *
 * Referenced strings: 19
 *   insn=0x000000000026D1E4 string=0x000000000026D1E8 "~8"
 *   insn=0x000000000026D1E8 string=0x00000000001FB3E0 "0'"
 *   insn=0x000000000026D1F0 string=0x000000000026D1F4 "g="
 *   insn=0x000000000026D1F4 string=0x00000000001FC790 "0'"
 *   insn=0x000000000026D204 string=0x000000000026D208 "!"
 *   insn=0x000000000026D220 string=0x000000000026D224 "o6"
 *   insn=0x000000000026D224 string=0x00000000001FABE0 "0'"
 *   insn=0x000000000026D22C string=0x000000000026D230 ""
 *   insn=0x000000000026D234 string=0x00000000001F8D80 "0'"
 *   insn=0x000000000026D23C string=0x000000000026D240 "hB@"
 *   insn=0x000000000026D240 string=0x000000000026D244 "h"
 *   insn=0x000000000026D248 string=0x000000000026D24C "`"
 *   insn=0x000000000026D248 string=0x000000000026D260 ""
 *   insn=0x000000000026D250 string=0x000000000026D254 "#*"
 *   insn=0x000000000026D254 string=0x000000000026D258 "hB@"
 *   insn=0x000000000026D254 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026D258 string=0x000000000026D25C "H"
 *   insn=0x000000000026D25C string=0x000000000026D264 "T"
 *   insn=0x000000000026D264 string=0x000000000026D268 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_26D1D8(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x0
  __int64 v4; // x19
  int v5; // s0
  int v6; // s8
  char v7; // w20
  __int64 v8; // x8

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 && (v3 = *v2) != 0 )
    v4 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::EntityControllerComponent::Interface);
  else
    v4 = 0;
  Caver::ProgramState::FloatAtStackIndex(v1, 2);
  v6 = v5;
  v7 = Caver::ProgramState::BoolAtStackIndex(v1, 3);
  if ( v4 )
  {
    v8 = *(_QWORD *)(v4 + 128);
    *(_DWORD *)(v4 + 272) = v6;
    if ( v8
      || (Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v4 + 112), (const Caver::Component *)v4),
          (v8 = *(_QWORD *)(v4 + 128)) != 0) )
    {
      *(_DWORD *)(v8 + 180) = v6;
    }
    if ( (v7 & 1) != 0 )
      *(_DWORD *)(v4 + 228) = v6;
  }
  return 0;
}

