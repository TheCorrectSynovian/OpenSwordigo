/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000057FECC
 * Mangled: sub_57FECC
 * Demangled: sub_57FECC
 *
 * Callers: 3
 *   0x000000000057FF60  sub_57FF60
 *   0x0000000000581080  sub_581080
 *   0x000000000058128C  sub_58128C
 *
 * Callees: 1
 *   0x00000000001FE620  .abort
 *
 * Referenced strings: 2
 *   insn=0x000000000057FED4 string=0x000000000057FED8 "c"
 *   insn=0x000000000057FEE0 string=0x000000000057FEE4 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_57FECC(__int64 result, __int64 a2, _QWORD *a3)
{
  if ( byte_6FE37F != 8 )
    abort();
  *a3 = a2;
  if ( (*(_QWORD *)(result + 832) & 0x4000000000000000LL) != 0 )
    *(_BYTE *)(result + 887) = 0;
  *(_QWORD *)(result + 248) = a3;
  return result;
}

