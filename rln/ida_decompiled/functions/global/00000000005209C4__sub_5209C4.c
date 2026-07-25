/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005209C4
 * Mangled: sub_5209C4
 * Demangled: sub_5209C4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000201670  .wctob
 *
 * Referenced strings: 8
 *   insn=0x00000000005209C4 string=0x00000000005209C8 "?"
 *   insn=0x00000000005209EC string=0x00000000005209F0 "v"
 *   insn=0x00000000005209F8 string=0x0000000000520A54 """
 *   insn=0x0000000000520A28 string=0x0000000000520A2C "s"
 *   insn=0x0000000000520A74 string=0x0000000000520A78 "s"
 *   insn=0x0000000000520A84 string=0x0000000000520A88 "!C "
 *   insn=0x0000000000520A8C string=0x0000000000520A90 "\t"
 *   insn=0x0000000000520A90 string=0x0000000000520A70 " d@9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_5209C4(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4, __int64 a5)
{
  __int64 v10; // x19
  __int64 v11; // x24
  int v12; // w0
  __int64 v14; // x19
  __int64 v15; // x24
  wint_t v16; // w0
  int v17; // w0

  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( a2 < a3 )
    {
      v14 = 0;
      v15 = ((~a2 + a3) >> 2) + 1;
      do
      {
        v16 = *(_DWORD *)(a2 + 4 * v14);
        if ( v16 <= 0x7F )
        {
          *(_BYTE *)(a5 + v14) = *(_BYTE *)(a1 + v16 + 25);
        }
        else
        {
          v17 = wctob(v16);
          if ( v17 == -1 )
            LOBYTE(v17) = a4;
          *(_BYTE *)(a5 + v14) = v17;
        }
        ++v14;
      }
      while ( v14 != v15 );
    }
  }
  else if ( a2 < a3 )
  {
    v10 = 0;
    v11 = ((~a2 + a3) >> 2) + 1;
    do
    {
      v12 = wctob(*(_DWORD *)(a2 + 4 * v10));
      if ( v12 == -1 )
        LOBYTE(v12) = a4;
      *(_BYTE *)(a5 + v10++) = v12;
    }
    while ( v10 != v11 );
  }
  return a3;
}

