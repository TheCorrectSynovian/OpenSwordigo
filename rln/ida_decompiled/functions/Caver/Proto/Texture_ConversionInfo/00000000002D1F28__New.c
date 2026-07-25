/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1F28
 * Mangled: _ZNK5Caver5Proto22Texture_ConversionInfo3NewEv
 * Demangled: Caver::Proto::Texture_ConversionInfo::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 4
 *   insn=0x00000000002D1F34 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002D1F38 string=0x00000000002D1F3C ""
 *   insn=0x00000000002D1F40 string=0x00000000002D1F44 "A"
 *   insn=0x00000000002D1F44 string=0x00000000002D1F48 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::Proto::Texture_ConversionInfo::New(Caver::Proto::Texture_ConversionInfo *this)
{
  _QWORD *result; // x0

  result = (_QWORD *)operator new(0x20u);
  result[2] = 0;
  result[3] = 0;
  *result = off_6C5DC8;
  result[1] = 0;
  return result;
}

