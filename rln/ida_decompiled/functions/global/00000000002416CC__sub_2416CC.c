/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002416CC
 * Mangled: sub_2416CC
 * Demangled: sub_2416CC
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
 * Referenced strings: 33
 *   insn=0x00000000002416D8 string=0x00000000002416DC "A"
 *   insn=0x00000000002416DC string=0x00000000001FB3E0 "0'"
 *   insn=0x00000000002416E4 string=0x00000000002416E8 "*"
 *   insn=0x00000000002416E8 string=0x00000000002416EC "`"
 *   insn=0x00000000002416E8 string=0x00000000001FC790 "0'"
 *   insn=0x0000000000241700 string=0x0000000000241704 "7"
 *   insn=0x0000000000241704 string=0x00000000001FABE0 "0'"
 *   insn=0x000000000024170C string=0x0000000000241710 "\t"
 *   insn=0x0000000000241710 string=0x0000000000241714 "3"
 *   insn=0x0000000000241714 string=0x0000000000241718 ""
 *   insn=0x0000000000241718 string=0x000000000024171C "3"
 *   insn=0x000000000024171C string=0x0000000000241720 "!%"
 *   insn=0x0000000000241720 string=0x0000000000241724 "!0E"
 *   insn=0x0000000000241724 string=0x0000000000241E78 " %"
 *   insn=0x000000000024173C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000024174C string=0x0000000000241750 "(%"
 *   insn=0x0000000000241750 string=0x0000000000241754 ")%"
 *   insn=0x0000000000241754 string=0x0000000000241758 ""
 *   insn=0x0000000000241758 string=0x000000000024175C ")MD"
 *   insn=0x0000000000241764 string=0x0000000000241768 "a"
 *   insn=0x0000000000241768 string=0x000000000024176C "*"
 *   insn=0x000000000024176C string=0x0000000000241770 "@"
 *   insn=0x0000000000241770 string=0x0000000000241774 "*"
 *   insn=0x000000000024177C string=0x0000000000241780 "@"
 *   insn=0x0000000000241780 string=0x0000000000241784 "\n"
 *   insn=0x000000000024178C string=0x0000000000241790 "@"
 *   insn=0x0000000000241790 string=0x0000000000241794 ")A"
 *   insn=0x00000000002417C4 string=0x00000000002417C8 "v"
 *   insn=0x00000000002417C8 string=0x00000000001F45A0 "P'"
 *   insn=0x00000000002417CC string=0x00000000002417D0 ""
 *   insn=0x00000000002417D0 string=0x0000000000583734 "o"
 *   insn=0x00000000002417DC string=0x00000000002417E0 " \t "
 *   insn=0x00000000002417E4 string=0x00000000002417E8 "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_2416CC(void *a1)
{
  Caver::ProgramState *v1; // x20
  Caver::SceneObject **v2; // x0
  Caver::SceneObject *v3; // x19
  float v4; // s0
  float v5; // s9
  float v6; // s0
  float v7; // s8
  __int64 v8; // x20
  __int128 v9; // q0
  float *v10; // x0
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
    v10 = *(float **)(v8 + 40);
    v11 = v5 * v10[34];
    *(float *)(v8 + 176) = v11;
    if ( v7 >= 0.001 )
    {
      *(_BYTE *)(v8 + 172) = 1;
      *(float *)(v8 + 180) = v7;
    }
    else
    {
      Caver::SceneObject::SetInstanceScaling((Caver::SceneObject *)v10, v11);
    }
  }
  return 0;
}

