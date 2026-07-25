/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A4C28
 * Mangled: _ZNK5Caver24OrbitControllerComponent5CloneEv
 * Demangled: Caver::OrbitControllerComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002A4B10  Caver::OrbitControllerComponent::~OrbitControllerComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 21
 *   insn=0x00000000002A4C38 string=0x00000000002A4C3C "iB"
 *   insn=0x00000000002A4C3C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002A4C4C string=0x00000000002A4C50 """
 *   insn=0x00000000002A4C50 string=0x00000000002A4C54 "\t""
 *   insn=0x00000000002A4C54 string=0x00000000002A4C58 ""
 *   insn=0x00000000002A4C58 string=0x00000000002A4C5C ")"
 *   insn=0x00000000002A4C5C string=0x00000000002A4C60 "a"
 *   insn=0x00000000002A4C60 string=0x00000000002A4C64 "a"
 *   insn=0x00000000002A4C64 string=0x00000000002A4C68 "*"
 *   insn=0x00000000002A4C68 string=0x00000000002A4C6C "@"
 *   insn=0x00000000002A4C6C string=0x00000000002A4C70 "*"
 *   insn=0x00000000002A4C70 string=0x00000000002A4C74 ""
 *   insn=0x00000000002A4C78 string=0x00000000002A4C7C "@"
 *   insn=0x00000000002A4C7C string=0x00000000002A4C80 "*"
 *   insn=0x00000000002A4C88 string=0x00000000002A4C8C "@"
 *   insn=0x00000000002A4C8C string=0x00000000002A4C90 ")A"
 *   insn=0x00000000002A4CAC string=0x00000000002A4CB0 "h"@"
 *   insn=0x00000000002A4CB4 string=0x00000000002A4CB8 "|"
 *   insn=0x00000000002A4CB8 string=0x00000000002A4CBC "h"
 *   insn=0x00000000002A4CC8 string=0x00000000002A4CCC "h"
 *   insn=0x00000000002A4CD0 string=0x00000000002A4CD4 "hF@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OrbitControllerComponent::Clone(Caver::OrbitControllerComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  __int64 result; // x0

  v2 = operator new(0xC0u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)&v3 = &off_6C3328;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *((_QWORD *)&v3 + 1) = &off_6C3368;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)v2 = off_6C3210;
  *(_QWORD *)(v2 + 120) = 0;
  *(_DWORD *)(v2 + 156) = 0;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_OWORD *)(v2 + 128) = xmmword_589650;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  result = v2;
  *(_QWORD *)(v2 + 124) = *(_QWORD *)((char *)this + 124);
  *(_DWORD *)(v2 + 132) = *((_DWORD *)this + 33);
  *(_QWORD *)(v2 + 136) = *((_QWORD *)this + 17);
  return result;
}

