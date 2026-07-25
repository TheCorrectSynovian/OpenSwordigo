/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DF98
 * Mangled: sub_53DF98
 * Demangled: sub_53DF98
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFF70  .getwc
 *
 * Referenced strings: 3
 *   insn=0x000000000053DFC0 string=0x000000000053DFC4 "s"
 *   insn=0x000000000053DFD8 string=0x000000000053DFDC "!"
 *   insn=0x000000000053DFDC string=0x000000000053DFE0 "s"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53DF98(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x19
  wint_t v8; // w0

  v6 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v8 = getwc(*(__FILE **)(a1 + 64));
      if ( v8 == -1 )
        break;
      *(_DWORD *)(a2 + 4 * v6++) = v8;
      if ( a3 == v6 )
        goto LABEL_6;
    }
    if ( !v6 )
      goto LABEL_7;
LABEL_6:
    v8 = *(_DWORD *)(a2 + 4 * v6 - 4);
  }
  else
  {
    v8 = -1;
  }
LABEL_7:
  *(_DWORD *)(a1 + 72) = v8;
  return v6;
}

