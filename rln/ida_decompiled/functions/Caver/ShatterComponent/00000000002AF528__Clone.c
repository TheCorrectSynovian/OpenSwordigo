/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AF528
 * Mangled: _ZNK5Caver16ShatterComponent5CloneEv
 * Demangled: Caver::ShatterComponent::Clone(void)
 *
 * Callers: 1
 *   0x00000000002AF4F0  Caver::ShatterComponent::~ShatterComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 13
 *   insn=0x00000000002AF538 string=0x00000000002AF53C ")"
 *   insn=0x00000000002AF53C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002AF550 string=0x00000000002AF554 ""
 *   insn=0x00000000002AF558 string=0x00000000002AF55C "J"
 *   insn=0x00000000002AF560 string=0x00000000002AF564 "a"
 *   insn=0x00000000002AF564 string=0x00000000002AF568 ""
 *   insn=0x00000000002AF568 string=0x00000000002AF56C "H"
 *   insn=0x00000000002AF570 string=0x00000000002AF574 "H"
 *   insn=0x00000000002AF574 string=0x00000000002AF578 "KA"
 *   insn=0x00000000002AF578 string=0x00000000002AF57C "?"
 *   insn=0x00000000002AF590 string=0x00000000002AF594 "h"@"
 *   insn=0x00000000002AF594 string=0x00000000002AF598 "a"
 *   insn=0x00000000002AF59C string=0x00000000002AF5A0 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShatterComponent::Clone(Caver::ShatterComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = operator new(0x70u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)&v3 = &off_6C3E98;
  *(_QWORD *)(v2 + 72) = 0;
  *((_QWORD *)&v3 + 1) = &off_6C3ED8;
  *(_QWORD *)v2 = off_6C3D80;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_OWORD *)(v2 + 16) = v3;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  return v2;
}

