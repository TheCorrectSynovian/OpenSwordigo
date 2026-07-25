/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023F228
 * Mangled: _ZNK5Caver23TextureMappingComponent5CloneEv
 * Demangled: Caver::TextureMappingComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000023F084  Caver::TextureMappingComponent::~TextureMappingComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 19
 *   insn=0x000000000023F240 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000023F250 string=0x000000000023F254 "(%"
 *   insn=0x000000000023F254 string=0x000000000023F258 ""
 *   insn=0x000000000023F258 string=0x000000000023F25C "*%"
 *   insn=0x000000000023F25C string=0x000000000023F260 "J"
 *   insn=0x000000000023F264 string=0x000000000023F268 "\t"
 *   insn=0x000000000023F268 string=0x000000000023F26C " "
 *   insn=0x000000000023F26C string=0x000000000023F270 "\t"
 *   insn=0x000000000023F270 string=0x000000000023F274 " "
 *   insn=0x000000000023F274 string=0x000000000023F278 ")"
 *   insn=0x000000000023F278 string=0x000000000023F27C "Ja"
 *   insn=0x000000000023F27C string=0x000000000023F280 "\n"
 *   insn=0x000000000023F288 string=0x000000000023F28C " \tE"
 *   insn=0x000000000023F28C string=0x000000000023F290 "A"
 *   insn=0x000000000023F2B0 string=0x000000000023F2B4 "h"@"
 *   insn=0x000000000023F2B4 string=0x000000000023F2B8 "a"
 *   insn=0x000000000023F2C0 string=0x000000000023F2C4 "a"
 *   insn=0x000000000023F2CC string=0x000000000023F2D0 "hB@"
 *   insn=0x000000000023F2DC string=0x000000000023F2E0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TextureMappingComponent::Clone(Caver::TextureMappingComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  __int64 result; // x0

  v2 = operator new(0x90u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)&v3 = &off_6BC038;
  *((_QWORD *)&v3 + 1) = &off_6BC078;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)v2 = off_6BBF20;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = &byte_6FD2F8;
  *(_QWORD *)(v2 + 120) = 0;
  *(_DWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 128) = 1132068864;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  sub_56A6A8(v2 + 112);
  result = v2;
  *(_QWORD *)(v2 + 128) = *((_QWORD *)this + 16);
  *(_DWORD *)(v2 + 136) = *((_DWORD *)this + 34);
  return result;
}

