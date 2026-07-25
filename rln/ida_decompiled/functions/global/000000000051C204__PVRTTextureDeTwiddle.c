/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051C204
 * Mangled: _Z20PVRTTextureDeTwiddleRjS_j
 * Demangled: PVRTTextureDeTwiddle(uint &,uint &,uint)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000051C210 string=0x000000000051C214 "?"
 *   insn=0x000000000051C214 string=0x000000000051C218 ""
 *   insn=0x000000000051C21C string=0x000000000051C220 "+!"
 *   insn=0x000000000051C220 string=0x000000000051C224 "k"
 *   insn=0x000000000051C224 string=0x000000000051C228 "M"
 *   insn=0x000000000051C228 string=0x000000000051C22C "k%"
 *   insn=0x000000000051C230 string=0x000000000051C234 ""
 *   insn=0x000000000051C234 string=0x000000000051C238 "+"
 *   insn=0x000000000051C238 string=0x000000000051C23C ",!"
 *   insn=0x000000000051C244 string=0x000000000051C248 "j"
 *   insn=0x000000000051C24C string=0x000000000051C250 "*"
 *   insn=0x000000000051C250 string=0x000000000051C254 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall PVRTTextureDeTwiddle(_DWORD *result, unsigned int *a2, unsigned int a3)
{
  int v3; // w8
  int v4; // w10

  v3 = 0;
  v4 = 0;
  *result = 0;
  *a2 = 0;
  do
  {
    *result |= ((1 << (v3 + 1)) & a3) >> (v4 + 1);
    *a2 |= ((1 << v3) & a3) >> v4;
    v3 += 2;
    ++v4;
  }
  while ( v4 != 16 );
  return result;
}

