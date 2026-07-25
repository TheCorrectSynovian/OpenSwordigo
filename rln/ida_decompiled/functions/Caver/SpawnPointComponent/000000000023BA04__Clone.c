/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023BA04
 * Mangled: _ZNK5Caver19SpawnPointComponent5CloneEv
 * Demangled: Caver::SpawnPointComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000023B9CC  Caver::SpawnPointComponent::~SpawnPointComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 18
 *   insn=0x000000000023BA18 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023BA28 string=0x000000000023BA2C "H%"
 *   insn=0x000000000023BA2C string=0x000000000023BA30 ""
 *   insn=0x000000000023BA30 string=0x000000000023BA34 "J%"
 *   insn=0x000000000023BA34 string=0x000000000023BA38 "J"
 *   insn=0x000000000023BA3C string=0x000000000023BA40 "a"
 *   insn=0x000000000023BA40 string=0x000000000023BA44 ""
 *   insn=0x000000000023BA44 string=0x000000000023BA48 "H"
 *   insn=0x000000000023BA48 string=0x000000000023BA4C "KA"
 *   insn=0x000000000023BA50 string=0x000000000023BA54 "J"
 *   insn=0x000000000023BA54 string=0x000000000023BA58 "?"
 *   insn=0x000000000023BA5C string=0x000000000023BA60 "@"
 *   insn=0x000000000023BA78 string=0x000000000023BA7C "h"@"
 *   insn=0x000000000023BA7C string=0x000000000023BA80 "a"
 *   insn=0x000000000023BA84 string=0x000000000023BA88 ""
 *   insn=0x000000000023BA88 string=0x000000000023BA8C "hr@"
 *   insn=0x000000000023BA98 string=0x000000000023BA9C "hBG"
 *   insn=0x000000000023BAA0 string=0x000000000023BAA4 "h~@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SpawnPointComponent::Clone(Caver::SpawnPointComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  __int64 result; // x0

  v2 = operator new(0x80u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)&v3 = &off_6BBAC8;
  *(_QWORD *)(v2 + 72) = 0;
  *((_QWORD *)&v3 + 1) = &off_6BBB08;
  *(_QWORD *)v2 = off_6BB9B0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 112) = 1;
  *(_DWORD *)(v2 + 116) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  result = v2;
  *(_DWORD *)(v2 + 112) = *((_DWORD *)this + 28);
  *(_QWORD *)(v2 + 116) = *(_QWORD *)((char *)this + 116);
  *(_DWORD *)(v2 + 124) = *((_DWORD *)this + 31);
  return result;
}

