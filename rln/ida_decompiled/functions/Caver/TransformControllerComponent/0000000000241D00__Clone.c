/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000241D00
 * Mangled: _ZNK5Caver28TransformControllerComponent5CloneEv
 * Demangled: Caver::TransformControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000241BE8  Caver::TransformControllerComponent::~TransformControllerComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 18
 *   insn=0x0000000000241D10 string=0x0000000000241D14 "3"
 *   insn=0x0000000000241D14 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000241D24 string=0x0000000000241D28 "(%"
 *   insn=0x0000000000241D28 string=0x0000000000241D2C ")%"
 *   insn=0x0000000000241D2C string=0x0000000000241D30 ""
 *   insn=0x0000000000241D30 string=0x0000000000241D34 ")MD"
 *   insn=0x0000000000241D34 string=0x0000000000241D38 "a"
 *   insn=0x0000000000241D38 string=0x0000000000241D3C "a"
 *   insn=0x0000000000241D3C string=0x0000000000241D40 "*"
 *   insn=0x0000000000241D40 string=0x0000000000241D44 "@"
 *   insn=0x0000000000241D44 string=0x0000000000241D48 "*"
 *   insn=0x0000000000241D48 string=0x0000000000241D4C ""
 *   insn=0x0000000000241D50 string=0x0000000000241D54 "@"
 *   insn=0x0000000000241D54 string=0x0000000000241D58 "\n"
 *   insn=0x0000000000241D60 string=0x0000000000241D64 "@"
 *   insn=0x0000000000241D64 string=0x0000000000241D68 ")A"
 *   insn=0x0000000000241D98 string=0x0000000000241D9C "h"@"
 *   insn=0x0000000000241DA0 string=0x0000000000241DA4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TransformControllerComponent::Clone(Caver::TransformControllerComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = operator new(0xC0u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)&v3 = &off_6BC538;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *((_QWORD *)&v3 + 1) = &off_6BC578;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)v2 = off_6BC420;
  *(_QWORD *)(v2 + 117) = 0;
  *(_QWORD *)(v2 + 133) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 165) = 0;
  *(_QWORD *)(v2 + 160) = 0;
  *(_QWORD *)(v2 + 184) = 0;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 176) = 1065353216;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  return v2;
}

