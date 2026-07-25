/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000503204
 * Mangled: _Z28PVRTFixInterleavedEndiannessR8SPODMesh
 * Demangled: PVRTFixInterleavedEndianness(SPODMesh &)
 *
 * Callers: 1
 *   0x00000000002039F0  PVRTFixInterleavedEndianness(SPODMesh &)
 *
 * Callees: 1
 *   0x00000000001FAFF0  PVRTFixInterleavedEndiannessUsingCPODData(uchar *,CPODData &,uint)
 *
 * Referenced strings: 48
 *   insn=0x0000000000503214 string=0x0000000000503218 "`v@"
 *   insn=0x0000000000503218 string=0x000000000050321C "@"
 *   insn=0x000000000050321C string=0x0000000000503220 ""
 *   insn=0x0000000000503220 string=0x0000000000503224 "}D"
 *   insn=0x0000000000503224 string=0x0000000000503228 "\t"
 *   insn=0x0000000000503228 string=0x000000000050322C ")"
 *   insn=0x000000000050322C string=0x0000000000503230 "("
 *   insn=0x000000000050322C string=0x00000000005032F0 ")"
 *   insn=0x0000000000503230 string=0x0000000000503234 ""
 *   insn=0x0000000000503234 string=0x0000000000503238 ""
 *   insn=0x0000000000503238 string=0x000000000050323C "H"
 *   insn=0x000000000050323C string=0x0000000000503240 "b"
 *   insn=0x0000000000503240 string=0x0000000000503244 "a"
 *   insn=0x0000000000503244 string=0x0000000000503248 "j"
 *   insn=0x0000000000503248 string=0x000000000050324C "`v@"
 *   insn=0x0000000000503248 string=0x00000000001FAFF0 "0'"
 *   insn=0x000000000050324C string=0x0000000000503250 "b"
 *   insn=0x0000000000503250 string=0x0000000000503254 "aB"
 *   insn=0x0000000000503254 string=0x0000000000503258 "f"
 *   insn=0x0000000000503258 string=0x000000000050325C "`v@"
 *   insn=0x000000000050325C string=0x0000000000503260 "b"
 *   insn=0x0000000000503260 string=0x0000000000503264 "a"
 *   insn=0x0000000000503264 string=0x0000000000503268 "b"
 *   insn=0x0000000000503268 string=0x000000000050326C "`v@"
 *   insn=0x000000000050326C string=0x0000000000503270 "b"
 *   insn=0x0000000000503270 string=0x0000000000503274 "a"
 *   insn=0x0000000000503274 string=0x0000000000503278 "^"
 *   insn=0x0000000000503278 string=0x000000000050327C "h\n@"
 *   insn=0x000000000050327C string=0x0000000000503280 "`v@"
 *   insn=0x0000000000503284 string=0x00000000005032B8 "b"
 *   insn=0x000000000050328C string=0x0000000000503290 "hN@"
 *   insn=0x0000000000503290 string=0x0000000000503294 "b"
 *   insn=0x0000000000503298 string=0x000000000050329C "U"
 *   insn=0x000000000050329C string=0x00000000005032A0 "h\n@"
 *   insn=0x00000000005032A0 string=0x00000000005032A4 "`v@"
 *   insn=0x00000000005032B8 string=0x00000000005032BC "a"
 *   insn=0x00000000005032BC string=0x00000000005032C0 "L"
 *   insn=0x00000000005032C0 string=0x00000000005032C4 "`v@"
 *   insn=0x00000000005032C4 string=0x00000000005032C8 "b"
 *   insn=0x00000000005032C8 string=0x00000000005032CC "a"
 *   insn=0x00000000005032CC string=0x00000000005032D0 "H"
 *   insn=0x00000000005032D0 string=0x00000000005032D4 "`v@"
 *   insn=0x00000000005032D4 string=0x00000000005032D8 "b"
 *   insn=0x00000000005032D8 string=0x00000000005032DC "aB"
 *   insn=0x00000000005032E8 string=0x00000000005032EC "A"
 *   insn=0x00000000005032F0 string=0x00000000005032F4 ")"
 *   insn=0x00000000005032F8 string=0x00000000005032FC "\n"
 *   insn=0x00000000005032FC string=0x0000000000503300 "*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int8 *__fastcall PVRTFixInterleavedEndianness(__int64 a1)
{
  unsigned __int8 *result; // x0
  unsigned __int8 *v3; // x0
  __int64 v4; // x20
  unsigned __int64 v5; // x21

  result = *(unsigned __int8 **)(a1 + 232);
  if ( result )
  {
    if ( PVRTIsLittleEndian(void)::bIsInit )
    {
      if ( !PVRTIsLittleEndian(void)::bLittleEndian )
      {
        PVRTFixInterleavedEndiannessUsingCPODData(result, (CPODData *)(a1 + 56), *(_DWORD *)a1);
        PVRTFixInterleavedEndiannessUsingCPODData(*(unsigned __int8 **)(a1 + 232), (CPODData *)(a1 + 80), *(_DWORD *)a1);
        PVRTFixInterleavedEndiannessUsingCPODData(
          *(unsigned __int8 **)(a1 + 232),
          (CPODData *)(a1 + 104),
          *(_DWORD *)a1);
        PVRTFixInterleavedEndiannessUsingCPODData(
          *(unsigned __int8 **)(a1 + 232),
          (CPODData *)(a1 + 128),
          *(_DWORD *)a1);
        v3 = *(unsigned __int8 **)(a1 + 232);
        if ( *(_DWORD *)(a1 + 8) )
        {
          v4 = 0;
          v5 = 0;
          do
          {
            PVRTFixInterleavedEndiannessUsingCPODData(v3, (CPODData *)(*(_QWORD *)(a1 + 152) + v4), *(_DWORD *)a1);
            v3 = *(unsigned __int8 **)(a1 + 232);
            ++v5;
            v4 += 24;
          }
          while ( v5 < *(unsigned int *)(a1 + 8) );
        }
        PVRTFixInterleavedEndiannessUsingCPODData(v3, (CPODData *)(a1 + 160), *(_DWORD *)a1);
        PVRTFixInterleavedEndiannessUsingCPODData(
          *(unsigned __int8 **)(a1 + 232),
          (CPODData *)(a1 + 184),
          *(_DWORD *)a1);
        return (unsigned __int8 *)PVRTFixInterleavedEndiannessUsingCPODData(
                                    *(unsigned __int8 **)(a1 + 232),
                                    (CPODData *)(a1 + 208),
                                    *(_DWORD *)a1);
      }
    }
    else
    {
      PVRTIsLittleEndian(void)::bIsInit = 1;
      PVRTIsLittleEndian(void)::bLittleEndian = 1;
    }
  }
  return result;
}

