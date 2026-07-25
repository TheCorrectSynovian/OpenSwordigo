/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AC204
 * Mangled: _Z13RangesOverlapffffPf
 * Demangled: RangesOverlap(float,float,float,float,float *)
 *
 * Callers: 1
 *   0x00000000001F6A40  RangesOverlap(float,float,float,float,float *)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000004AC204 string=0x00000000005837A4 "o"
 *   insn=0x00000000004AC20C string=0x00000000004AC210 "$($"
 *   insn=0x00000000004AC21C string=0x00000000004AC220 "$5G"
 *   insn=0x00000000004AC21C string=0x0000000000583734 "o"
 *   insn=0x00000000004AC228 string=0x00000000004AC22C ","
 *   insn=0x00000000004AC230 string=0x00000000004AC234 "A8!"
 *   insn=0x00000000004AC234 string=0x00000000004AC238 "`8 "
 *   insn=0x00000000004AC238 string=0x00000000004AC23C ""@!"
 *   insn=0x00000000004AC240 string=0x00000000004AC244 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall RangesOverlap(float a1, float a2, float a3, float a4, float *a5)
{
  unsigned int v5; // w8
  float v6; // s1
  float v7; // s0

  v5 = 0;
  if ( (float)(a2 + -0.001) >= a3 && (float)(a1 + 0.001) <= a4 )
  {
    if ( a5 )
    {
      v6 = a3 - a2;
      v7 = a4 - a1;
      if ( v7 > (float)-v6 )
        v7 = v6;
      *a5 = v7;
    }
    return 1;
  }
  return v5;
}

