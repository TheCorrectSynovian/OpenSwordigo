/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000027AD90
 * Mangled: _ZNK5Caver13ManaComponent5CloneEv
 * Demangled: Caver::ManaComponent::Clone(void)
 *
 * Callers: 1
 *   0x000000000027AD58  Caver::ManaComponent::~ManaComponent()
 *
 * Callees: 2
 *   0x00000000001F55E0  operator new(ulong)
 *   0x000000000056A6A8  sub_56A6A8
 *
 * Referenced strings: 14
 *   insn=0x000000000027ADA4 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000027ADB4 string=0x000000000027ADB8 "H#"
 *   insn=0x000000000027ADB8 string=0x000000000027ADBC ""
 *   insn=0x000000000027ADBC string=0x000000000027ADC0 "J#"
 *   insn=0x000000000027ADC0 string=0x000000000027ADC4 "JQE"
 *   insn=0x000000000027ADC8 string=0x000000000027ADCC "a"
 *   insn=0x000000000027ADCC string=0x000000000027ADD0 ""
 *   insn=0x000000000027ADD0 string=0x000000000027ADD4 "H"
 *   insn=0x000000000027ADD8 string=0x000000000027ADDC "H"
 *   insn=0x000000000027ADDC string=0x000000000027ADE0 "KA"
 *   insn=0x000000000027ADE0 string=0x000000000027ADE4 "?"
 *   insn=0x000000000027AE04 string=0x000000000027AE08 "h"@"
 *   insn=0x000000000027AE08 string=0x000000000027AE0C "a"
 *   insn=0x000000000027AE10 string=0x000000000027AE14 "%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ManaComponent::Clone(Caver::ManaComponent *this)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = operator new(0x88u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_BYTE *)(v2 + 48) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 56) = &byte_6FD2F8;
  *(_QWORD *)&v3 = &off_6BF728;
  *(_QWORD *)(v2 + 72) = 0;
  *((_QWORD *)&v3 + 1) = &off_6BF768;
  *(_QWORD *)v2 = off_6BF610;
  *(_QWORD *)(v2 + 104) = 0;
  *(_QWORD *)(v2 + 112) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 88) = v2 + 72;
  *(_DWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 96) = v2 + 72;
  *(_OWORD *)(v2 + 16) = v3;
  *(_DWORD *)(v2 + 32) = *((_DWORD *)this + 8);
  sub_56A6A8(v2 + 56);
  return v2;
}

