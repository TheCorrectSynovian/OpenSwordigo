/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000022F1F4
 * Mangled: _ZNK5Caver20OverlayTextComponent5CloneEv
 * Demangled: Caver::OverlayTextComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000022EE70  Caver::OverlayTextComponent::~OverlayTextComponent()
 *
 * Callees: 7
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5810  Caver::OverlayComponent::InitWithComponent(Caver::OverlayComponent const*)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000202B50  Caver::OverlayComponent::OverlayComponent(void)
 *   0x000000000022F2E4  Caver::OverlayTextComponent::ShouldSave(void)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 18
 *   insn=0x000000000022F20C string=0x00000000001F55E0 "P'"
 *   insn=0x000000000022F210 string=0x000000000022F214 "ON"
 *   insn=0x000000000022F218 string=0x000000000022F21C ""
 *   insn=0x000000000022F220 string=0x000000000022F224 ")"
 *   insn=0x000000000022F228 string=0x000000000022F22C ""
 *   insn=0x000000000022F22C string=0x000000000022F230 "\nA"
 *   insn=0x000000000022F230 string=0x000000000022F234 "`"
 *   insn=0x000000000022F234 string=0x000000000022F238 ""
 *   insn=0x000000000022F248 string=0x000000000022F24C "(a"
 *   insn=0x000000000022F268 string=0x000000000022F26C "\t"
 *   insn=0x000000000022F28C string=0x000000000022F290 "`"
 *   insn=0x000000000022F290 string=0x000000000022F294 "a"
 *   insn=0x000000000022F290 string=0x00000000001F5810 "P'"
 *   insn=0x000000000022F29C string=0x000000000022F2A0 "h>@"
 *   insn=0x000000000022F2A0 string=0x000000000022F2A4 "aB"
 *   insn=0x000000000022F2B0 string=0x000000000022F2B4 "hN@"
 *   insn=0x000000000022F2D8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000022F2DC string=0x000000000022F2E0 "yI"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OverlayTextComponent::Clone(Caver::OverlayTextComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  __int64 result; // x0

  v2 = operator new(0xD8u);
  Caver::OverlayComponent::OverlayComponent((Caver::OverlayComponent *)v2);
  *(_QWORD *)&v3 = &off_6BAC10;
  *(_QWORD *)v2 = off_6BAAF0;
  *((_QWORD *)&v3 + 1) = &off_6BAC50;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 112) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 120) = 0;
  *(_WORD *)(v2 + 128) = 1;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 144) = &byte_6FD2F8;
  *(_BYTE *)(v2 + 168) = 1;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 160) = 0;
  *(_DWORD *)(v2 + 172) = 1065353216;
  *(_BYTE *)(v2 + 176) = 0;
  *(_DWORD *)(v2 + 192) = -1;
  *(_QWORD *)(v2 + 200) = 0;
  *(_QWORD *)(v2 + 208) = 0;
  Caver::OverlayComponent::InitWithComponent((Caver::OverlayComponent *)v2, this);
  sub_56A6A8(v2 + 112);
  *(_QWORD *)(v2 + 120) = *((_QWORD *)this + 15);
  sub_56A6A8(v2 + 144);
  result = v2;
  *(_QWORD *)(v2 + 152) = *((_QWORD *)this + 19);
  return result;
}

