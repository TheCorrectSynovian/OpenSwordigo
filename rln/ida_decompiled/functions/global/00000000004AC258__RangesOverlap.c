/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AC258
 * Mangled: _Z13RangesOverlapffffPfS_
 * Demangled: RangesOverlap(float,float,float,float,float *,float *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000004AC258 string=0x00000000005837A4 "o"
 *   insn=0x00000000004AC260 string=0x00000000004AC264 "$($"
 *   insn=0x00000000004AC270 string=0x00000000004AC274 "$5G"
 *   insn=0x00000000004AC270 string=0x0000000000583734 "o"
 *   insn=0x00000000004AC280 string=0x00000000004AC284 "`"
 *   insn=0x00000000004AC284 string=0x00000000004AC288 "`8 "
 *   insn=0x00000000004AC284 string=0x00000000004AC290 "a"
 *   insn=0x00000000004AC290 string=0x00000000004AC294 "@8!"
 *   insn=0x00000000004AC294 string=0x00000000004AC298 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall RangesOverlap(float a1, float a2, float a3, float a4, float *a5, float *a6)
{
  unsigned int v6; // w8

  v6 = 0;
  if ( (float)(a2 + -0.001) >= a3 && (float)(a1 + 0.001) <= a4 )
  {
    if ( a5 )
      *a5 = a4 - a1;
    if ( a6 )
      *a6 = a3 - a2;
    return 1;
  }
  return v6;
}

