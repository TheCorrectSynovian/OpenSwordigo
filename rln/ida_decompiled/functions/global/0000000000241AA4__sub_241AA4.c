/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241AA4
 * Mangled: sub_241AA4
 * Demangled: sub_241AA4
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F45A0  Caver::SceneObject::AddComponent(Caver::Component *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001FABE0  Caver::ProgramState::FloatAtStackIndex(int)
 *   0x00000000001FB3E0  Caver::ProgramState::FromLuaState(lua_State *)
 *   0x00000000001FC790  Caver::ProgramState::PointerAtStackIndex(int)
 *   0x00000000001FF760  Caver::SceneObject::SetInstanceScaling(float)
 *   0x00000000002005E0  Caver::SceneObject::ComponentWithInterface(long)
 *   0x0000000000241E78  Caver::TransformControllerComponent::Interface(void)
 *
 * Referenced strings: 30
 *   insn=0x0000000000241AB0 string=0x0000000000241AB4 "K"
 *   insn=0x0000000000241AB4 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000241ABC string=0x0000000000241AC0 "4"
 *   insn=0x0000000000241AC0 string=0x0000000000241AC4 "`"
 *   insn=0x0000000000241AC0 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000241AD8 string=0x0000000000241ADC "A"
 *   insn=0x0000000000241ADC string=0x00000000001FABE0 "0'"
 *   insn=0x0000000000241AE4 string=0x0000000000241AE8 ""
 *   insn=0x0000000000241AE8 string=0x0000000000241AEC "="
 *   insn=0x0000000000241AEC string=0x0000000000241AF0 "\t"
 *   insn=0x0000000000241AF4 string=0x0000000000241AF8 "!%"
 *   insn=0x0000000000241AF8 string=0x0000000000241AFC "!0E"
 *   insn=0x0000000000241AFC string=0x0000000000241E78 " %"
 *   insn=0x0000000000241B0C string=0x0000000000241BA4 ""
 *   insn=0x0000000000241B14 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000241B24 string=0x0000000000241B28 "(%"
 *   insn=0x0000000000241B28 string=0x0000000000241B2C ")%"
 *   insn=0x0000000000241B2C string=0x0000000000241B30 ""
 *   insn=0x0000000000241B30 string=0x0000000000241B34 ")MD"
 *   insn=0x0000000000241B3C string=0x0000000000241B40 "a"
 *   insn=0x0000000000241B40 string=0x0000000000241B44 "*"
 *   insn=0x0000000000241B44 string=0x0000000000241B48 "@"
 *   insn=0x0000000000241B48 string=0x0000000000241B4C "*"
 *   insn=0x0000000000241B54 string=0x0000000000241B58 "@"
 *   insn=0x0000000000241B58 string=0x0000000000241B5C "\n"
 *   insn=0x0000000000241B64 string=0x0000000000241B68 "@"
 *   insn=0x0000000000241B68 string=0x0000000000241B6C ")A"
 *   insn=0x0000000000241BA0 string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000241BA4 string=0x0000000000583734 "o"
 *   insn=0x0000000000241BAC string=0x0000000000241BB0 " ! "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_241AA4(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x19
  float v4; // s0
  float v5; // s8
  float v6; // s0
  float v7; // s9
  __int64 v8; // x20
  __int128 v9; // q0

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
    v8 = Caver::SceneObject::ComponentWithInterface(v3, (__int64)Caver::TransformControllerComponent::Interface);
    if ( !v8 )
    {
      v8 = operator new(0xC0u);
      *(_DWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 32) = 0;
      *(_QWORD *)(v8 + 40) = 0;
      *(_BYTE *)(v8 + 48) = 0;
      *(_QWORD *)&v9 = &off_6BC538;
      *(_QWORD *)(v8 + 56) = &byte_6FD2F8;
      *((_QWORD *)&v9 + 1) = &off_6BC578;
      *(_QWORD *)(v8 + 72) = 0;
      *(_OWORD *)(v8 + 16) = v9;
      *(_QWORD *)(v8 + 80) = 0;
      *(_QWORD *)(v8 + 88) = v8 + 72;
      *(_QWORD *)(v8 + 104) = 0;
      *(_QWORD *)(v8 + 112) = 0;
      *(_QWORD *)v8 = off_6BC420;
      *(_QWORD *)(v8 + 117) = 0;
      *(_QWORD *)(v8 + 133) = 0;
      *(_QWORD *)(v8 + 128) = 0;
      *(_QWORD *)(v8 + 144) = 0;
      *(_QWORD *)(v8 + 152) = 0;
      *(_QWORD *)(v8 + 165) = 0;
      *(_QWORD *)(v8 + 160) = 0;
      *(_QWORD *)(v8 + 96) = v8 + 72;
      *(_QWORD *)(v8 + 176) = 1065353216;
      *(_QWORD *)(v8 + 184) = 0;
      Caver::SceneObject::AddComponent(v3, (Caver::Component *)v8);
    }
    *(float *)(v8 + 176) = v5;
    if ( v7 >= 0.001 )
    {
      *(_BYTE *)(v8 + 172) = 1;
      *(float *)(v8 + 180) = v7;
    }
    else
    {
      Caver::SceneObject::SetInstanceScaling(*(Caver::SceneObject **)(v8 + 40), v5);
    }
  }
  return 0;
}

