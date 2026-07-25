/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000266898
 * Mangled: _ZNK5Caver15DamageComponent5CloneEv
 * Demangled: Caver::DamageComponent::Clone(void)
 *
 * Callers: 1
 *   0x0000000000266860  Caver::DamageComponent::~DamageComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 23
 *   insn=0x00000000002668A8 string=0x00000000002668AC "M;"
 *   insn=0x00000000002668AC string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002668C4 string=0x00000000002668C8 ""
 *   insn=0x00000000002668C8 string=0x00000000002668CC ")"
 *   insn=0x00000000002668CC string=0x00000000002668D0 "a"
 *   insn=0x00000000002668D0 string=0x00000000002668D4 "a"
 *   insn=0x00000000002668D4 string=0x00000000002668D8 "*"
 *   insn=0x00000000002668D8 string=0x00000000002668DC "@"
 *   insn=0x00000000002668DC string=0x00000000002668E0 "*"
 *   insn=0x00000000002668E0 string=0x00000000002668E4 ""
 *   insn=0x00000000002668E8 string=0x00000000002668EC "@"
 *   insn=0x00000000002668F8 string=0x00000000002668FC "@"
 *   insn=0x00000000002668FC string=0x0000000000266900 ")A"
 *   insn=0x0000000000266944 string=0x0000000000266948 "h"@"
 *   insn=0x000000000026694C string=0x0000000000266950 "V"
 *   insn=0x0000000000266950 string=0x0000000000266954 "h"
 *   insn=0x0000000000266960 string=0x0000000000266964 "`"
 *   insn=0x0000000000266968 string=0x000000000026696C "h"
 *   insn=0x0000000000266970 string=0x0000000000266974 "h"
 *   insn=0x0000000000266978 string=0x000000000026697C "hBC9"
 *   insn=0x0000000000266980 string=0x0000000000266984 "hf@"
 *   insn=0x0000000000266988 string=0x000000000026698C "h"
 *   insn=0x0000000000266990 string=0x0000000000266994 "hFC9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::DamageComponent::Clone(Caver::DamageComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0
  long double result; // q0

  v2 = operator new(0xD8u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)&v3 = &off_6BE668;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *((_QWORD *)&v3 + 1) = &off_6BE6A8;
  *(_QWORD *)(v2 + 72) = 0;
  *(_OWORD *)(v2 + 16) = v3;
  *(_QWORD *)v2 = off_6BE550;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 144) = 0;
  *(_QWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 136) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_BYTE *)(v2 + 160) = 0;
  *(_QWORD *)(v2 + 180) = 0;
  *(_QWORD *)(v2 + 172) = 0;
  *(_QWORD *)(v2 + 164) = 0;
  *(_BYTE *)(v2 + 188) = 1;
  *(_QWORD *)(v2 + 192) = 0;
  *(_BYTE *)(v2 + 208) = 0;
  *(_BYTE *)(v2 + 209) = 1;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 200) = 1065353216;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  *(_DWORD *)(v2 + 164) = *((_DWORD *)this + 41);
  result = *(long double *)((char *)this + 168);
  *(long double *)(v2 + 168) = result;
  *(_DWORD *)(v2 + 184) = *((_DWORD *)this + 46);
  *(_DWORD *)(v2 + 192) = *((_DWORD *)this + 48);
  *(_BYTE *)(v2 + 208) = *((_BYTE *)this + 208);
  *(_QWORD *)(v2 + 200) = *((_QWORD *)this + 25);
  *(_BYTE *)(v2 + 160) = *((_BYTE *)this + 160);
  *(_BYTE *)(v2 + 209) = *((_BYTE *)this + 209);
  return result;
}

