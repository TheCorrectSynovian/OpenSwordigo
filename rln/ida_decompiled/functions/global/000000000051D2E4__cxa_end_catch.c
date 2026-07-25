/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051D2E4
 * Mangled: __cxa_end_catch
 * Demangled: __cxa_end_catch
 *
 * Callers: 1
 *   0x00000000001FD590  .__cxa_end_catch
 *
 * Callees: 3
 *   0x00000000001F8AB0  .__cxa_get_globals_fast
 *   0x0000000000203770  std::terminate(void)
 *   0x0000000000581AB8  sub_581AB8
 *
 * Referenced strings: 12
 *   insn=0x000000000051D2EC string=0x00000000001F8AB0 "0'"
 *   insn=0x000000000051D308 string=0x000000000051D30C "!"
 *   insn=0x000000000051D30C string=0x000000000051D310 "a"
 *   insn=0x000000000051D310 string=0x000000000051D314 "?"
 *   insn=0x000000000051D314 string=0x000000000051D318 "H"
 *   insn=0x000000000051D318 string=0x000000000051D340 "_"
 *   insn=0x000000000051D320 string=0x000000000051D324 "!"
 *   insn=0x000000000051D320 string=0x000000000051D350 "!"
 *   insn=0x000000000051D328 string=0x000000000051D32C "?"
 *   insn=0x000000000051D32C string=0x000000000051D330 "`"
 *   insn=0x000000000051D358 string=0x000000000051D35C "C"
 *   insn=0x000000000051D36C string=0x000000000051D370 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void _cxa_end_catch(void)
{
  __int64 *globals_fast; // x2
  __int64 v1; // x0
  int v2; // w1
  int v3; // w1

  globals_fast = (__int64 *)__cxa_get_globals_fast();
  v1 = *globals_fast;
  if ( *globals_fast )
  {
    if ( (unsigned __int64)(*(_QWORD *)(v1 + 80) - 0x474E5543432B2B00LL) > 1 )
    {
      *globals_fast = 0;
      sub_581AB8(v1 + 80);
    }
    else
    {
      v2 = *(_DWORD *)(v1 + 40);
      if ( v2 < 0 )
      {
        v3 = v2 + 1;
        if ( !v3 )
        {
          *globals_fast = *(_QWORD *)(v1 + 32);
          *(_DWORD *)(v1 + 40) = 0;
          return;
        }
      }
      else
      {
        v3 = v2 - 1;
        if ( !v3 )
        {
          *globals_fast = *(_QWORD *)(v1 + 32);
          sub_581AB8(v1 + 80);
          return;
        }
        if ( v3 == -1 )
          std::terminate();
      }
      *(_DWORD *)(v1 + 40) = v3;
    }
  }
}

