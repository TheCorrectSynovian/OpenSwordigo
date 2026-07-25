/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2468
 * Mangled: _ZN5Caver5Proto22Texture_ConversionInfo4SwapEPS1_
 * Demangled: Caver::Proto::Texture_ConversionInfo::Swap(Caver::Proto::Texture_ConversionInfo*)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000002D2468 string=0x00000000002D246C " "
 *   insn=0x00000000002D246C string=0x00000000002D2470 "("
 *   insn=0x00000000002D2470 string=0x00000000002D2474 "\t"
 *   insn=0x00000000002D2474 string=0x00000000002D2478 ""
 *   insn=0x00000000002D2478 string=0x00000000002D247C ")"
 *   insn=0x00000000002D247C string=0x00000000002D2480 "("
 *   insn=0x00000000002D2480 string=0x00000000002D2484 "\t"
 *   insn=0x00000000002D2484 string=0x00000000002D2488 ""
 *   insn=0x00000000002D2488 string=0x00000000002D248C ")"
 *   insn=0x00000000002D248C string=0x00000000002D2490 "("
 *   insn=0x00000000002D2490 string=0x00000000002D2494 "\t"
 *   insn=0x00000000002D2494 string=0x00000000002D2498 ""
 *   insn=0x00000000002D2498 string=0x00000000002D249C ")"
 *   insn=0x00000000002D249C string=0x00000000002D24A0 "("
 *   insn=0x00000000002D24A0 string=0x00000000002D24A4 "\t"
 *   insn=0x00000000002D24A4 string=0x00000000002D24A8 ""
 *   insn=0x00000000002D24A8 string=0x00000000002D24AC ")"
 *   insn=0x00000000002D24AC string=0x00000000002D24B0 "("
 *   insn=0x00000000002D24B0 string=0x00000000002D24B4 "\t"
 *   insn=0x00000000002D24B4 string=0x00000000002D24B8 ""
 *   insn=0x00000000002D24B8 string=0x00000000002D24BC ")"
 *   insn=0x00000000002D24BC string=0x00000000002D24C0 "(@"
 *   insn=0x00000000002D24C0 string=0x00000000002D24C4 "\t@"
 *   insn=0x00000000002D24C4 string=0x00000000002D24C8 ""
 *   insn=0x00000000002D24C8 string=0x00000000002D24CC ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::Proto::Texture_ConversionInfo *__fastcall Caver::Proto::Texture_ConversionInfo::Swap(
        Caver::Proto::Texture_ConversionInfo *this,
        Caver::Proto::Texture_ConversionInfo *a2)
{
  int v2; // w9
  int v3; // w9
  int v4; // w9
  int v5; // w9
  int v6; // w9
  int v7; // w9

  if ( a2 != this )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
    *((_DWORD *)a2 + 3) = v2;
    v3 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 4) = v3;
    v4 = *((_DWORD *)this + 5);
    *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 5) = v4;
    v5 = *((_DWORD *)this + 6);
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
    *((_DWORD *)a2 + 6) = v5;
    v6 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a2 + 7) = v6;
    v7 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v7;
  }
  return this;
}

