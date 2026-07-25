/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E194
 * Mangled: __cxa_rethrow
 * Demangled: __cxa_rethrow
 *
 * Callers: 1
 *   0x0000000000202B70  .__cxa_rethrow
 *
 * Callees: 4
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001FE3A0  .__cxa_get_globals
 *   0x0000000000203770  std::terminate(void)
 *   0x00000000005819C0  sub_5819C0
 *
 * Referenced strings: 11
 *   insn=0x000000000051E1A8 string=0x000000000051E1AC "B"
 *   insn=0x000000000051E1B4 string=0x000000000051E1F0 "`"
 *   insn=0x000000000051E1B8 string=0x000000000051E1BC "#(@"
 *   insn=0x000000000051E1C4 string=0x000000000051E1C8 """
 *   insn=0x000000000051E1C8 string=0x000000000051E1CC "b"
 *   insn=0x000000000051E1CC string=0x000000000051E1D0 "_"
 *   insn=0x000000000051E1D0 string=0x000000000051E1D4 "\t"
 *   insn=0x000000000051E1D4 string=0x000000000051E1F4 " (@"
 *   insn=0x000000000051E1D8 string=0x000000000051E1DC "3@"
 *   insn=0x000000000051E1EC string=0x00000000001F45E0 "P'"
 *   insn=0x000000000051E1F8 string=0x000000000051E1FC " ("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __noreturn _cxa_rethrow(void)
{
  __int64 globals; // x0
  __int64 v1; // x1
  void *v2; // x19

  globals = __cxa_get_globals();
  v1 = *(_QWORD *)globals;
  ++*(_DWORD *)(globals + 8);
  if ( v1 )
  {
    if ( (unsigned __int64)(*(_QWORD *)(v1 + 80) - 0x474E5543432B2B00LL) <= 1 )
      *(_DWORD *)(v1 + 40) = -*(_DWORD *)(v1 + 40);
    else
      *(_QWORD *)globals = 0;
    v2 = (void *)(v1 + 80);
    sub_5819C0(v1 + 80);
    __cxa_begin_catch(v2);
  }
  std::terminate();
}

