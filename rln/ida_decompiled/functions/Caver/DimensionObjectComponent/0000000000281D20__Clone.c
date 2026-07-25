/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000281D20
 * Mangled: _ZNK5Caver24DimensionObjectComponent5CloneEv
 * Demangled: Caver::DimensionObjectComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002819C0  Caver::DimensionObjectComponent::Prepare(void)
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 15
 *   insn=0x0000000000281D30 string=0x0000000000281D34 "+"
 *   insn=0x0000000000281D34 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000281D44 string=0x0000000000281D48 "(#"
 *   insn=0x0000000000281D48 string=0x0000000000281D4C ""
 *   insn=0x0000000000281D4C string=0x0000000000281D50 "*#"
 *   insn=0x0000000000281D50 string=0x0000000000281D54 "J"
 *   insn=0x0000000000281D58 string=0x0000000000281D5C "a"
 *   insn=0x0000000000281D5C string=0x0000000000281D60 ""
 *   insn=0x0000000000281D60 string=0x0000000000281D64 "H"
 *   insn=0x0000000000281D68 string=0x0000000000281D6C "H"
 *   insn=0x0000000000281D6C string=0x0000000000281D70 "KA"
 *   insn=0x0000000000281D70 string=0x0000000000281D74 "?"
 *   insn=0x0000000000281D88 string=0x0000000000281D8C "h"@"
 *   insn=0x0000000000281D8C string=0x0000000000281D90 "a"
 *   insn=0x0000000000281D94 string=0x0000000000281D98 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::DimensionObjectComponent::Clone(Caver::DimensionObjectComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = operator new(0x70u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)&v3 = &off_6BFE68;
  *(_QWORD *)(v2 + 72) = 0;
  *((_QWORD *)&v3 + 1) = &off_6BFEA8;
  *(_QWORD *)v2 = off_6BFD50;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_OWORD *)(v2 + 16) = v3;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  return v2;
}

