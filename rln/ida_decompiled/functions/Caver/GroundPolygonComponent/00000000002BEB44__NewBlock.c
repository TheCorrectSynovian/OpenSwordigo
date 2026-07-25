/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002BEB44
 * Mangled: _ZN5Caver22GroundPolygonComponent8NewBlockEv
 * Demangled: Caver::GroundPolygonComponent::NewBlock(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34F0  Caver::GroundPolygonComponent::SetDefaultValues(void)
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 30
 *   insn=0x00000000002BEB54 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002BEB60 string=0x00000000002BEB64 "H!"
 *   insn=0x00000000002BEB64 string=0x00000000002BEB68 "AC"
 *   insn=0x00000000002BEB68 string=0x00000000002BEB6C "*!"
 *   insn=0x00000000002BEB6C string=0x00000000002BEB70 "J"
 *   insn=0x00000000002BEB74 string=0x00000000002BEB78 "\t"
 *   insn=0x00000000002BEB78 string=0x00000000002BEB7C "!"
 *   insn=0x00000000002BEB7C string=0x00000000002BEB80 "\t"
 *   insn=0x00000000002BEB80 string=0x00000000002BEB84 "!"
 *   insn=0x00000000002BEB84 string=0x00000000002BEB88 "I"
 *   insn=0x00000000002BEB88 string=0x00000000002BEB8C "a"
 *   insn=0x00000000002BEB8C string=0x00000000002BEB90 "!"
 *   insn=0x00000000002BEB94 string=0x00000000002BEB98 "Ja"
 *   insn=0x00000000002BEB98 string=0x00000000002BEB9C "A"
 *   insn=0x00000000002BEB9C string=0x00000000002BEBA0 "j"
 *   insn=0x00000000002BEBA0 string=0x00000000002BEBA4 "`"
 *   insn=0x00000000002BEBA4 string=0x00000000002BEBA8 "h"
 *   insn=0x00000000002BEBAC string=0x00000000002BEBB0 "hF"
 *   insn=0x00000000002BEBB0 string=0x00000000002BEBB4 "h"
 *   insn=0x00000000002BEBB8 string=0x00000000002BEBBC "`"
 *   insn=0x00000000002BEBC4 string=0x00000000002BEBC8 "`"
 *   insn=0x00000000002BEBCC string=0x00000000002BEBD0 "`"
 *   insn=0x00000000002BEBD0 string=0x00000000002BEBD4 "h"
 *   insn=0x00000000002BEBD8 string=0x00000000002BEBDC "jb"
 *   insn=0x00000000002BEBDC string=0x00000000002BEBE0 "`"
 *   insn=0x00000000002BEBE0 string=0x00000000002BEBE4 "k"
 *   insn=0x00000000002BEBE4 string=0x00000000002BEBE8 "aV"
 *   insn=0x00000000002BEBE8 string=0x00000000002BEBEC "`"
 *   insn=0x00000000002BEBEC string=0x00000000002BEBF0 "@"
 *   insn=0x00000000002BEBF0 string=0x00000000001F34F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GroundPolygonComponent::NewBlock(Caver::GroundPolygonComponent *this)
{
  __int64 v1; // x19
  __int128 v2; // q1

  v1 = operator new(0xE8u);
  *(_DWORD *)(v1 + 8) = 0;
  *(_BYTE *)(v1 + 48) = 0;
  *(_QWORD *)&v2 = &off_6C4E98;
  *((_QWORD *)&v2 + 1) = &off_6C4ED8;
  *(_OWORD *)(v1 + 16) = v2;
  *(_OWORD *)(v1 + 32) = 0u;
  *(_QWORD *)(v1 + 56) = &byte_6FD2F8;
  *(_OWORD *)(v1 + 72) = 0u;
  *(_QWORD *)v1 = off_6C4D80;
  *(_BYTE *)(v1 + 145) = 1;
  *(_BYTE *)(v1 + 176) = 1;
  *(_OWORD *)(v1 + 96) = 0u;
  *(_DWORD *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 136) = 0;
  *(_OWORD *)(v1 + 120) = 0u;
  *(_BYTE *)(v1 + 144) = 0;
  *(_OWORD *)(v1 + 152) = 0u;
  *(_DWORD *)(v1 + 180) = 1065353216;
  *(_BYTE *)(v1 + 184) = 0;
  *(_QWORD *)(v1 + 192) = &byte_6FD2F8;
  *(_OWORD *)(v1 + 216) = 0u;
  *(_QWORD *)(v1 + 88) = v1 + 72;
  *(_QWORD *)(v1 + 96) = v1 + 72;
  *(_QWORD *)(v1 + 168) = 0x42480000C2480000LL;
  *(_OWORD *)(v1 + 200) = 0u;
  Caver::GroundPolygonComponent::SetDefaultValues((Caver::GroundPolygonComponent *)v1);
  return v1;
}

