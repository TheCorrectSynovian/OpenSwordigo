/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000236310
 * Mangled: _ZNK5Caver15ShadowComponent5CloneEv
 * Demangled: Caver::ShadowComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000236150  Caver::ShadowComponent::~ShadowComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 15
 *   insn=0x0000000000236324 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000236330 string=0x0000000000236334 "h%"
 *   insn=0x0000000000236334 string=0x0000000000236338 ""
 *   insn=0x0000000000236338 string=0x000000000023633C "j%"
 *   insn=0x000000000023633C string=0x0000000000236340 "J"
 *   insn=0x0000000000236344 string=0x0000000000236348 "a"
 *   insn=0x000000000023634C string=0x0000000000236350 ""
 *   insn=0x0000000000236350 string=0x0000000000236354 "H"
 *   insn=0x0000000000236360 string=0x0000000000236364 " "
 *   insn=0x0000000000236368 string=0x000000000023636C "H"
 *   insn=0x000000000023636C string=0x0000000000236370 "KA"
 *   insn=0x00000000002363A0 string=0x00000000002363A4 "h"@"
 *   insn=0x00000000002363A4 string=0x00000000002363A8 "a"
 *   insn=0x00000000002363B0 string=0x00000000002363B4 "`"
 *   insn=0x00000000002363C0 string=0x00000000002363C4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShadowComponent::Clone(Caver::ShadowComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q1
  __int64 result; // x0

  v2 = operator new(0xE0u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_OWORD *)(v2 + 32) = 0u;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)&v3 = &off_6BB388;
  *(_OWORD *)(v2 + 72) = 0u;
  *(_BYTE *)(v2 + 120) = 1;
  *((_QWORD *)&v3 + 1) = &off_6BB3C8;
  *(_QWORD *)v2 = off_6BB270;
  *(_OWORD *)(v2 + 104) = 0u;
  *(_QWORD *)(v2 + 216) = 0;
  *(_DWORD *)(v2 + 156) = 0;
  *(_OWORD *)(v2 + 140) = 0u;
  *(_OWORD *)(v2 + 124) = 0u;
  *(_BYTE *)(v2 + 188) = 0;
  *(_QWORD *)(v2 + 172) = 0;
  *(_QWORD *)(v2 + 180) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_OWORD *)(v2 + 16) = v3;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  result = v2;
  *(_OWORD *)(v2 + 124) = *(_OWORD *)((char *)this + 124);
  *(_DWORD *)(v2 + 140) = *((_DWORD *)this + 35);
  return result;
}

