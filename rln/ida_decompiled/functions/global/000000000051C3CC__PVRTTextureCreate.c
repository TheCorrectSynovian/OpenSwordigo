/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051C3CC
 * Mangled: _Z17PVRTTextureCreatejjjjjb
 * Demangled: PVRTTextureCreate(uint,uint,uint,uint,uint,bool)
 *
 * Callers: 1
 *   0x00000000001FDB40  PVRTTextureCreate(uint,uint,uint,uint,uint,bool)
 *
 * Callees: 1
 *   0x00000000001F5E70  .malloc
 *
 * Referenced strings: 14
 *   insn=0x000000000051C3D4 string=0x000000000051C3D8 "\n"
 *   insn=0x000000000051C3D8 string=0x000000000051C3DC ""
 *   insn=0x000000000051C3DC string=0x000000000051C3E0 "?"
 *   insn=0x000000000051C3E0 string=0x000000000051C3E4 "J}"
 *   insn=0x000000000051C3E4 string=0x000000000051C3E8 ","
 *   insn=0x000000000051C3E8 string=0x000000000051C3EC "_"
 *   insn=0x000000000051C3EC string=0x000000000051C3F0 "j}"
 *   insn=0x000000000051C3F8 string=0x000000000051C3FC ""
 *   insn=0x000000000051C3FC string=0x000000000051C400 "j"
 *   insn=0x000000000051C400 string=0x000000000051C404 "!|"
 *   insn=0x000000000051C404 string=0x000000000051C408 "j"
 *   insn=0x000000000051C40C string=0x000000000051C410 "}\t"
 *   insn=0x000000000051C410 string=0x000000000051C414 ""
 *   insn=0x000000000051C41C string=0x00000000001F5E70 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall PVRTTextureCreate(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // x8
  unsigned int v7; // w11
  unsigned int v8; // w12
  __int64 v9; // x10
  _BOOL4 v10; // w11

  v6 = 0;
  do
  {
    if ( a1 <= a3 )
      v7 = a3;
    else
      v7 = a1;
    if ( a2 <= a4 )
      v8 = a4;
    else
      v8 = a2;
    v9 = v7 * v8;
    v10 = (a1 | a2) >> 1 == 0;
    a1 >>= 1;
    v6 += v9;
    a2 >>= 1;
  }
  while ( ((v10 | a6 ^ 1) & 1) == 0 );
  return malloc(((v6 * (unsigned __int64)a5) >> 3) + 52);
}

