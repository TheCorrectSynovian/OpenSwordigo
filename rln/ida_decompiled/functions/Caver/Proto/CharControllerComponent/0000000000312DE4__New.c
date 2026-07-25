/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000312DE4
 * Mangled: _ZNK5Caver5Proto23CharControllerComponent3NewEv
 * Demangled: Caver::Proto::CharControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 6
 *   insn=0x0000000000312DF0 string=0x0000000000312DF4 "`"
 *   insn=0x0000000000312DF0 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000312DF4 string=0x0000000000312DF8 "$"
 *   insn=0x0000000000312E04 string=0x0000000000312E08 ""
 *   insn=0x0000000000312E14 string=0x0000000000312E18 "A"
 *   insn=0x0000000000312E20 string=0x0000000000312E24 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

double __fastcall Caver::Proto::CharControllerComponent::New(Caver::Proto::CharControllerComponent *this)
{
  __int64 v1; // x0
  double result; // d0

  v1 = operator new(0x80u);
  *(_QWORD *)(v1 + 72) = v1 + 88;
  *(_QWORD *)&result = 0x400000000LL;
  *(_QWORD *)(v1 + 48) = 0;
  *(_QWORD *)(v1 + 56) = 0;
  *(_QWORD *)(v1 + 32) = 0;
  *(_QWORD *)(v1 + 40) = 0;
  *(_QWORD *)(v1 + 16) = 0;
  *(_QWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  *(_QWORD *)(v1 + 112) = 0;
  *(_QWORD *)(v1 + 120) = 0;
  *(_QWORD *)v1 = off_6C7F38;
  *(_QWORD *)(v1 + 8) = 0;
  *(_QWORD *)(v1 + 80) = 0x400000000LL;
  *(_QWORD *)(v1 + 104) = 0;
  return result;
}

