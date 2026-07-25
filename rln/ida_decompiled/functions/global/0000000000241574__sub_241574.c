/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241574
 * Mangled: sub_241574
 * Demangled: sub_241574
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
 * Referenced strings: 27
 *   insn=0x0000000000241588 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000241594 string=0x0000000000241598 "`"
 *   insn=0x0000000000241594 string=0x00000000001FC790 "0'"
 *   insn=0x00000000002415AC string=0x00000000002415B0 "x"
 *   insn=0x00000000002415C0 string=0x00000000002415C4 ""
 *   insn=0x00000000002415C0 string=0x00000000001FABE0 "0'"
 *   insn=0x00000000002415C4 string=0x00000000002415C8 "s"
 *   insn=0x00000000002415C8 string=0x00000000002415CC "!%"
 *   insn=0x00000000002415CC string=0x00000000002415D0 "!0E"
 *   insn=0x00000000002415D0 string=0x0000000000241E78 " %"
 *   insn=0x00000000002415E8 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002415F8 string=0x00000000002415FC "(%"
 *   insn=0x00000000002415FC string=0x0000000000241600 ")%"
 *   insn=0x0000000000241600 string=0x0000000000241604 ""
 *   insn=0x0000000000241604 string=0x0000000000241608 ")MD"
 *   insn=0x0000000000241610 string=0x0000000000241614 "a"
 *   insn=0x0000000000241614 string=0x0000000000241618 "*"
 *   insn=0x0000000000241618 string=0x000000000024161C "@"
 *   insn=0x000000000024161C string=0x0000000000241620 "*"
 *   insn=0x0000000000241628 string=0x000000000024162C "@"
 *   insn=0x000000000024162C string=0x0000000000241630 "\n"
 *   insn=0x0000000000241638 string=0x000000000024163C "@"
 *   insn=0x000000000024163C string=0x0000000000241640 ")A"
 *   insn=0x0000000000241674 string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000241690 string=0x0000000000241694 "@"
 *   insn=0x0000000000241694 string=0x0000000000241698 "a(!"
 *   insn=0x00000000002416A4 string=0x00000000002416A8 "!8#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_241574(void *a1)
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
  float32x2_t *v10; // x8
  float32x2_t v11; // d0
  float v12; // s1
  float32x2_t v13; // d2
  float v14; // s3
  float32x2_t v15; // d0
  float v16; // s1

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
    v10 = *(float32x2_t **)(v8 + 40);
    v11.n64_u64[0] = *(unsigned __int64 *)v5;
    v12 = *(float *)(v5 + 8);
    v13.n64_u64[0] = v10[14].n64_u64[0];
    v14 = v10[15].n64_f32[0];
    *(_BYTE *)(v8 + 140) = 1;
    v15.n64_u64[0] = vadd_f32(v13, v11).n64_u64[0];
    v16 = v14 + v12;
    *(float32x2_t *)(v8 + 144) = v15;
    *(float *)(v8 + 152) = v16;
    *(float32x2_t *)(v8 + 156) = vsub_f32(v15, v13);
    *(float *)(v8 + 164) = v16 - v14;
    *(_DWORD *)(v8 + 168) = v7;
  }
  return 0;
}

