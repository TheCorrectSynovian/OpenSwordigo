/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000489DF4
 * Mangled: _ZN5Caver27FloatColorToProtobufMessageERKNS_10FloatColorEPNS_5Proto10FloatColorE
 * Demangled: Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *
 * Callers: 1
 *   0x00000000002020A0  Caver::FloatColorToProtobufMessage(Caver::FloatColor const&,Caver::Proto::FloatColor *)
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x0000000000489DF4 string=0x0000000000489DF8 ")"
 *   insn=0x0000000000489DF8 string=0x0000000000489DFC "("
 *   insn=0x0000000000489DFC string=0x0000000000489E00 ""
 *   insn=0x0000000000489E00 string=0x0000000000489E04 ")"
 *   insn=0x0000000000489E04 string=0x0000000000489E08 ")"
 *   insn=0x0000000000489E08 string=0x0000000000489E0C "(@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::FloatColorToProtobufMessage(_QWORD *result, __int64 a2)
{
  int v2; // w9
  __int64 v3; // x8

  v2 = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(a2 + 12) = *result;
  v3 = result[1];
  *(_DWORD *)(a2 + 28) = v2 | 0xF;
  *(_QWORD *)(a2 + 20) = v3;
  return result;
}

