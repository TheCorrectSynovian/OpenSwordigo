/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241950
 * Mangled: sub_241950
 * Demangled: sub_241950
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
 * Referenced strings: 28
 *   insn=0x0000000000241964 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000241970 string=0x0000000000241974 "`"
 *   insn=0x0000000000241970 string=0x00000000001FC790 "0'"
 *   insn=0x000000000024199C string=0x00000000002419A0 ""
 *   insn=0x000000000024199C string=0x00000000001FABE0 "0'"
 *   insn=0x00000000002419A0 string=0x00000000002419A4 "S"
 *   insn=0x00000000002419A4 string=0x00000000002419A8 "!%"
 *   insn=0x00000000002419A8 string=0x00000000002419AC "!0E"
 *   insn=0x00000000002419AC string=0x0000000000241E78 " %"
 *   insn=0x00000000002419B0 string=0x00000000002419B4 ""
 *   insn=0x00000000002419C0 string=0x00000000002419C4 ""
 *   insn=0x00000000002419C4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002419D4 string=0x00000000002419D8 "(%"
 *   insn=0x00000000002419D8 string=0x00000000002419DC ")%"
 *   insn=0x00000000002419DC string=0x00000000002419E0 ""
 *   insn=0x00000000002419E0 string=0x00000000002419E4 ")MD"
 *   insn=0x00000000002419EC string=0x00000000002419F0 "a"
 *   insn=0x00000000002419F0 string=0x00000000002419F4 "*"
 *   insn=0x00000000002419F4 string=0x00000000002419F8 "@"
 *   insn=0x00000000002419F8 string=0x00000000002419FC "*"
 *   insn=0x0000000000241A04 string=0x0000000000241A08 "@"
 *   insn=0x0000000000241A08 string=0x0000000000241A0C "\n"
 *   insn=0x0000000000241A14 string=0x0000000000241A18 "@"
 *   insn=0x0000000000241A18 string=0x0000000000241A1C ")A"
 *   insn=0x0000000000241A50 string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000241A6C string=0x0000000000241A70 "!9@"
 *   insn=0x0000000000241A70 string=0x0000000000241A74 ""y@"
 *   insn=0x0000000000241A7C string=0x0000000000241A80 "a8""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_241950(void *a1)
{
  Caver::ProgramState *v1; // x21
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x19
  __int64 v4; // x0
  __int64 v5; // x20
  int v6; // s0
  int v7; // s8
  __int64 v8; // x21
  __int128 v9; // q0
  float32x2_t v10; // d0
  float32x2_t *v11; // x9
  float v12; // w8
  float v13; // s1

  v1 = (Caver::ProgramState *)Caver::ProgramState::FromLuaState(a1);
  Caver::ProgramState::PointerAtStackIndex(v1);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  Caver::ProgramState::PointerAtStackIndex(v1);
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
    *(_BYTE *)(v8 + 140) = 1;
    v10.n64_u64[0] = *(unsigned __int64 *)v5;
    v11 = *(float32x2_t **)(v8 + 40);
    *(_QWORD *)(v8 + 144) = *(_QWORD *)v5;
    v12 = *(float *)(v5 + 8);
    *(float *)(v8 + 152) = v12;
    v13 = v12 - v11[15].n64_f32[0];
    *(float32x2_t *)(v8 + 156) = vsub_f32(v10, v11[14]);
    *(float *)(v8 + 164) = v13;
    *(_DWORD *)(v8 + 168) = v7;
  }
  return 0;
}

