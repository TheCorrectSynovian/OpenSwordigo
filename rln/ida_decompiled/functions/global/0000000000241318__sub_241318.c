/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241318
 * Mangled: sub_241318
 * Demangled: sub_241318
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000241E78  Caver::TransformControllerComponent::Interface(void)
 *
 * Referenced strings: 23
 *   insn=0x0000000000241324 string=0x0000000000241328 "."
 *   insn=0x0000000000241328 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000241334 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000241350 string=0x0000000000241354 "!%"
 *   insn=0x0000000000241354 string=0x0000000000241358 "!0E"
 *   insn=0x0000000000241358 string=0x0000000000241E78 " %"
 *   insn=0x0000000000241368 string=0x0000000000241400 "h"
 *   insn=0x0000000000241370 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000241380 string=0x0000000000241384 "(%"
 *   insn=0x0000000000241384 string=0x0000000000241388 ")%"
 *   insn=0x0000000000241388 string=0x000000000024138C ""
 *   insn=0x000000000024138C string=0x0000000000241390 ")MD"
 *   insn=0x0000000000241398 string=0x000000000024139C "a"
 *   insn=0x000000000024139C string=0x00000000002413A0 "*"
 *   insn=0x00000000002413A0 string=0x00000000002413A4 "@"
 *   insn=0x00000000002413A4 string=0x00000000002413A8 "*"
 *   insn=0x00000000002413B0 string=0x00000000002413B4 "@"
 *   insn=0x00000000002413B4 string=0x00000000002413B8 "\n"
 *   insn=0x00000000002413C0 string=0x00000000002413C4 "@"
 *   insn=0x00000000002413C4 string=0x00000000002413C8 ")A"
 *   insn=0x00000000002413F8 string=0x00000000002413FC "i"
 *   insn=0x00000000002413FC string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000241404 string=0x0000000000241408 "h\n@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_241318(void *a1)
{
  Caver::ProgramState *v1; // x19
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x19
  __int64 v6; // x21
  __int128 v7; // q0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
  {
    v3 = *v2;
    Caver::ProgramState::PointerAtStackIndex(v1);
    v5 = v4;
    if ( v3 )
    {
      v6 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::TransformControllerComponent::Interface);
      if ( !v6 )
      {
        v6 = operator new(0xC0u);
        *(_DWORD *)(v6 + 8) = 0;
        *(_QWORD *)(v6 + 32) = 0;
        *(_QWORD *)(v6 + 40) = 0;
        *(_BYTE *)(v6 + 48) = 0;
        *(_QWORD *)&v7 = &off_6BC538;
        *(_QWORD *)(v6 + 56) = &byte_6FD2F8;
        *((_QWORD *)&v7 + 1) = &off_6BC578;
        *(_QWORD *)(v6 + 72) = 0;
        *(_OWORD *)(v6 + 16) = v7;
        *(_QWORD *)(v6 + 80) = 0;
        *(_QWORD *)(v6 + 88) = v6 + 72;
        *(_QWORD *)(v6 + 104) = 0;
        *(_QWORD *)(v6 + 112) = 0;
        *(_QWORD *)v6 = off_6BC420;
        *(_QWORD *)(v6 + 117) = 0;
        *(_QWORD *)(v6 + 133) = 0;
        *(_QWORD *)(v6 + 128) = 0;
        *(_QWORD *)(v6 + 144) = 0;
        *(_QWORD *)(v6 + 152) = 0;
        *(_QWORD *)(v6 + 165) = 0;
        *(_QWORD *)(v6 + 160) = 0;
        *(_QWORD *)(v6 + 96) = v6 + 72;
        *(_QWORD *)(v6 + 176) = 1065353216;
        *(_QWORD *)(v6 + 184) = 0;
        Caver::SceneObject::AddComponent(v3, (Caver::Component *)v6);
      }
      *(_QWORD *)(v6 + 112) = *(_QWORD *)v5;
      *(_DWORD *)(v6 + 120) = *(_DWORD *)(v5 + 8);
    }
  }
  else
  {
    Caver::ProgramState::PointerAtStackIndex(v1);
  }
  return 0;
}

