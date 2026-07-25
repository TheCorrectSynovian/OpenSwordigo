/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000503078
 * Mangled: _Z28PVRTModelPODGetAnimArraySizePjjj
 * Demangled: PVRTModelPODGetAnimArraySize(uint *,uint,uint)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 21
 *   insn=0x0000000000503078 string=0x000000000050307C "!"
 *   insn=0x0000000000503078 string=0x0000000000503098 "@|"
 *   insn=0x000000000050307C string=0x0000000000503080 "?"
 *   insn=0x0000000000503084 string=0x0000000000503088 "("
 *   insn=0x0000000000503088 string=0x00000000005030AC "\tq}"
 *   insn=0x0000000000503094 string=0x00000000005030EC "\t"
 *   insn=0x00000000005030A0 string=0x00000000005030A4 "@"
 *   insn=0x00000000005030AC string=0x00000000005030B0 "\n@"
 *   insn=0x00000000005030BC string=0x00000000005030C0 "B"
 *   insn=0x00000000005030C0 string=0x00000000005030C4 "k!"
 *   insn=0x00000000005030C4 string=0x00000000005030C8 "J"
 *   insn=0x00000000005030CC string=0x00000000005030D0 "!d"
 *   insn=0x00000000005030D0 string=0x00000000005030D4 "a"
 *   insn=0x00000000005030DC string=0x00000000005030E0 "?"
 *   insn=0x00000000005030E0 string=0x00000000005030E4 "\n"
 *   insn=0x00000000005030E8 string=0x0000000000503108 "@"
 *   insn=0x00000000005030EC string=0x00000000005030F0 ""
 *   insn=0x00000000005030F0 string=0x00000000005030F4 "iE@"
 *   insn=0x00000000005030F4 string=0x00000000005030F8 "_"
 *   insn=0x00000000005030F8 string=0x00000000005030FC "*1"
 *   insn=0x00000000005030FC string=0x0000000000503100 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTModelPODGetAnimArraySize(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // x9
  unsigned int v4; // w10
  unsigned int *v6; // x10
  uint32x4_t v7; // q0
  __int64 v8; // x11
  uint32x4_t v9; // q1
  uint32x4_t v10; // q2
  uint32x4_t v11; // q3
  unsigned int *v12; // x11
  __int64 v13; // x8
  unsigned int v14; // w9
  unsigned int v15; // t1

  if ( !a1 )
    return a3 * a2;
  if ( !a2 )
    return a3;
  if ( a2 <= 7 )
  {
    v3 = 0;
    v4 = 0;
    goto LABEL_10;
  }
  v3 = a2 & 0xFFFFFFF8;
  v6 = a1 + 4;
  v7 = 0u;
  v8 = v3;
  v9 = 0u;
  do
  {
    v10 = *((uint32x4_t *)v6 - 1);
    v11 = *(uint32x4_t *)v6;
    v8 -= 8;
    v6 += 8;
    v7 = vmaxq_u32(v7, v10);
    v9 = vmaxq_u32(v9, v11);
  }
  while ( v8 );
  v4 = vmaxvq_u32(vmaxq_u32(v7, v9));
  if ( v3 != a2 )
  {
LABEL_10:
    v12 = &a1[v3];
    v13 = a2 - v3;
    do
    {
      v15 = *v12++;
      v14 = v15;
      if ( v4 < v15 )
        v4 = v14;
      --v13;
    }
    while ( v13 );
  }
  return v4 + a3;
}

