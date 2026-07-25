/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003375E4
 * Mangled: _ZNK5Caver5Proto24DimensionObjectComponent3NewEv
 * Demangled: Caver::Proto::DimensionObjectComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x00000000003375F0 string=0x00000000003375F4 "h"
 *   insn=0x00000000003375F0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003375F4 string=0x00000000003375F8 "iC"
 *   insn=0x00000000003375F8 string=0x00000000003375FC "A"
 *   insn=0x00000000003375FC string=0x0000000000337600 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::DimensionObjectComponent::New(Caver::Proto::DimensionObjectComponent *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x10u);
  *result = off_6C9B58;
  result[1] = 0;
  return result;
}

