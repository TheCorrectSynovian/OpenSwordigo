/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D244
 * Mangled: __cxa_begin_catch
 * Demangled: __cxa_begin_catch
 *
 * Callers: 1
 *   0x00000000001F45E0  .__cxa_begin_catch
 *
 * Callees: 2
 *   0x00000000001FE3A0  .__cxa_get_globals
 *   0x0000000000203770  std::terminate(void)
 *
 * Referenced strings: 13
 *   insn=0x000000000051D250 string=0x000000000051D254 "S"
 *   insn=0x000000000051D260 string=0x000000000051D26C "D"
 *   insn=0x000000000051D26C string=0x000000000051D270 "!"
 *   insn=0x000000000051D274 string=0x000000000051D278 "?"
 *   insn=0x000000000051D27C string=0x000000000051D298 "a"
 *   insn=0x000000000051D280 string=0x000000000051D2E0 "$"
 *   insn=0x000000000051D298 string=0x000000000051D29C "$"
 *   insn=0x000000000051D2A0 string=0x000000000051D2D4 "$"
 *   insn=0x000000000051D2A8 string=0x000000000051D2AC "d"
 *   insn=0x000000000051D2AC string=0x000000000051D2B0 "!"
 *   insn=0x000000000051D2B4 string=0x000000000051D2B8 "`"
 *   insn=0x000000000051D2B8 string=0x000000000051D2BC "c"
 *   insn=0x000000000051D2B8 string=0x000000000051D2C4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *_cxa_begin_catch(void *a1)
{
  __int64 globals; // x0
  char *v3; // x3
  char *v4; // x2
  int v6; // w1
  int v7; // w4
  int v8; // w1

  globals = __cxa_get_globals();
  v3 = *(char **)globals;
  v4 = (char *)a1 - 80;
  if ( (unsigned __int64)(*(_QWORD *)a1 - 0x474E5543432B2B00LL) <= 1 )
  {
    v6 = *((_DWORD *)a1 - 10);
    v7 = v6 + 1;
    if ( v6 < 0 )
      v7 = 1 - v6;
    v8 = *(_DWORD *)(globals + 8);
    *((_DWORD *)a1 - 10) = v7;
    *(_DWORD *)(globals + 8) = v8 - 1;
    if ( v3 != v4 )
    {
      *((_QWORD *)a1 - 6) = v3;
      *(_QWORD *)globals = v4;
    }
    return (void *)*((_QWORD *)a1 - 1);
  }
  else
  {
    if ( v3 )
      std::terminate();
    *(_QWORD *)globals = v4;
    return 0;
  }
}

