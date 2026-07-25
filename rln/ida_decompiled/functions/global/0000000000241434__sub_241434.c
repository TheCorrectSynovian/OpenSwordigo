/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241434
 * Mangled: sub_241434
 * Demangled: sub_241434
 *
 * Callers: 0
 *
 * Callees: 7
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000241E78  Caver::TransformControllerComponent::Interface(void)
 *
 * Referenced strings: 30
 *   insn=0x0000000000241444 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000241450 string=0x0000000000241454 "`"
 *   insn=0x0000000000241450 string=0x00000000001FC790 "0'"
 *   insn=0x000000000024146C string=0x00000000001FABE0 "0'"
 *   insn=0x0000000000241474 string=0x0000000000241478 "\t"
 *   insn=0x000000000024147C string=0x0000000000241480 ""
 *   insn=0x0000000000241484 string=0x0000000000241488 ""
 *   insn=0x0000000000241488 string=0x000000000024148C "!%"
 *   insn=0x0000000000241488 string=0x0000000000584004 "5"
 *   insn=0x0000000000241490 string=0x0000000000241494 "!0E"
 *   insn=0x0000000000241494 string=0x0000000000241E78 " %"
 *   insn=0x0000000000241498 string=0x000000000024149C ")\t "
 *   insn=0x000000000024149C string=0x00000000002414A0 "P"
 *   insn=0x00000000002414AC string=0x00000000002414B0 "L"
 *   insn=0x00000000002414B0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002414C0 string=0x00000000002414C4 "(%"
 *   insn=0x00000000002414C4 string=0x00000000002414C8 ")%"
 *   insn=0x00000000002414C8 string=0x00000000002414CC ""
 *   insn=0x00000000002414CC string=0x00000000002414D0 ")MD"
 *   insn=0x00000000002414D8 string=0x00000000002414DC "a"
 *   insn=0x00000000002414DC string=0x00000000002414E0 "*"
 *   insn=0x00000000002414E0 string=0x00000000002414E4 "@"
 *   insn=0x00000000002414E4 string=0x00000000002414E8 "*"
 *   insn=0x00000000002414F0 string=0x00000000002414F4 "@"
 *   insn=0x00000000002414F4 string=0x00000000002414F8 "\n"
 *   insn=0x0000000000241500 string=0x0000000000241504 "@"
 *   insn=0x0000000000241504 string=0x0000000000241508 ")A"
 *   insn=0x000000000024153C string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000241550 string=0x0000000000241554 "!) "
 *   insn=0x0000000000241554 string=0x0000000000241558 " 8 "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_241434(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x19
  float v4; // s0
  float v5; // s9
  int v6; // s0
  int v7; // s8
  float v8; // s9
  __int64 v9; // x20
  __int128 v10; // q0
  float v11; // s0

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  Caver::ProgramState::FloatAtStackIndex(v1, 2);
  v5 = v4;
  Caver::ProgramState::FloatAtStackIndex(v1, 3);
  v7 = v6;
  if ( v3 )
  {
    v8 = v5 * 0.017453;
    v9 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::TransformControllerComponent::Interface);
    if ( !v9 )
    {
      v9 = operator new(0xC0u);
      *(_DWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 32) = 0;
      *(_QWORD *)(v9 + 40) = 0;
      *(_BYTE *)(v9 + 48) = 0;
      *(_QWORD *)&v10 = &off_6BC538;
      *(_QWORD *)(v9 + 56) = &byte_6FD2F8;
      *((_QWORD *)&v10 + 1) = &off_6BC578;
      *(_QWORD *)(v9 + 72) = 0;
      *(_OWORD *)(v9 + 16) = v10;
      *(_QWORD *)(v9 + 80) = 0;
      *(_QWORD *)(v9 + 88) = v9 + 72;
      *(_QWORD *)(v9 + 104) = 0;
      *(_QWORD *)(v9 + 112) = 0;
      *(_QWORD *)v9 = off_6BC420;
      *(_QWORD *)(v9 + 117) = 0;
      *(_QWORD *)(v9 + 133) = 0;
      *(_QWORD *)(v9 + 128) = 0;
      *(_QWORD *)(v9 + 144) = 0;
      *(_QWORD *)(v9 + 152) = 0;
      *(_QWORD *)(v9 + 165) = 0;
      *(_QWORD *)(v9 + 160) = 0;
      *(_QWORD *)(v9 + 96) = v9 + 72;
      *(_QWORD *)(v9 + 176) = 1065353216;
      *(_QWORD *)(v9 + 184) = 0;
      Caver::SceneObject::AddComponent(v3, (Caver::Component *)v9);
    }
    v11 = *(float *)(*(_QWORD *)(v9 + 40) + 128LL);
    *(_BYTE *)(v9 + 124) = 1;
    *(_DWORD *)(v9 + 136) = v7;
    *(float *)(v9 + 128) = v8 + v11;
    *(float *)(v9 + 132) = (float)(v8 + v11) - v11;
  }
  return 0;
}

