/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241814
 * Mangled: sub_241814
 * Demangled: sub_241814
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
 *   insn=0x0000000000241824 string=0x00000000001FB3E0 "0'"
 *   insn=0x0000000000241830 string=0x0000000000241834 "`"
 *   insn=0x0000000000241830 string=0x00000000001FC790 "0'"
 *   insn=0x000000000024184C string=0x00000000001FABE0 "0'"
 *   insn=0x0000000000241854 string=0x0000000000241858 "\t"
 *   insn=0x000000000024185C string=0x0000000000241860 ""
 *   insn=0x0000000000241864 string=0x0000000000241868 ""
 *   insn=0x0000000000241868 string=0x000000000024186C "!%"
 *   insn=0x0000000000241868 string=0x0000000000584004 "5"
 *   insn=0x0000000000241870 string=0x0000000000241874 "!0E"
 *   insn=0x0000000000241874 string=0x0000000000241E78 " %"
 *   insn=0x0000000000241878 string=0x000000000024187C ")\t "
 *   insn=0x000000000024187C string=0x0000000000241880 "X"
 *   insn=0x000000000024188C string=0x0000000000241890 "T"
 *   insn=0x0000000000241890 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002418A0 string=0x00000000002418A4 "(%"
 *   insn=0x00000000002418A4 string=0x00000000002418A8 ")%"
 *   insn=0x00000000002418A8 string=0x00000000002418AC ""
 *   insn=0x00000000002418AC string=0x00000000002418B0 ")MD"
 *   insn=0x00000000002418B8 string=0x00000000002418BC "a"
 *   insn=0x00000000002418BC string=0x00000000002418C0 "*"
 *   insn=0x00000000002418C0 string=0x00000000002418C4 "@"
 *   insn=0x00000000002418C4 string=0x00000000002418C8 "*"
 *   insn=0x00000000002418D0 string=0x00000000002418D4 "@"
 *   insn=0x00000000002418D4 string=0x00000000002418D8 "\n"
 *   insn=0x00000000002418E0 string=0x00000000002418E4 "@"
 *   insn=0x00000000002418E4 string=0x00000000002418E8 ")A"
 *   insn=0x0000000000241918 string=0x000000000024191C "!"
 *   insn=0x000000000024191C string=0x00000000001F45A0 "P'"
 *   insn=0x0000000000241930 string=0x0000000000241934 " 9 "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_241814(void *a1)
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
  __int64 v11; // x8

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
    v11 = *(_QWORD *)(v9 + 40);
    *(float *)(v9 + 128) = v8;
    *(_BYTE *)(v9 + 124) = 1;
    *(float *)(v9 + 132) = v8 - *(float *)(v11 + 128);
    *(_DWORD *)(v9 + 136) = v7;
  }
  return 0;
}

