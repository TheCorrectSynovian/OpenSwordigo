/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FDF64
 * Mangled: _ZNK5Caver5Proto13ObjectLibrary13IsInitializedEv
 * Demangled: Caver::Proto::ObjectLibrary::IsInitialized(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x00000000002FDF70 string=0x00000000002FDF74 "h"@"
 *   insn=0x00000000002FDF80 string=0x00000000002FDF84 "h"
 *   insn=0x00000000002FDF88 string=0x00000000002FDF8C ""
 *   insn=0x00000000002FDF8C string=0x00000000002FDF90 ""
 *   insn=0x00000000002FDF98 string=0x00000000002FDF9C "h""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLibrary::IsInitialized(Caver::Proto::ObjectLibrary *this)
{
  __int64 v2; // x20
  __int64 v3; // x0

  if ( *((int *)this + 8) < 1 )
    return 1;
  v2 = 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v2);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3) & 1) == 0 )
      break;
    if ( ++v2 >= *((int *)this + 8) )
      return 1;
  }
  return 0;
}

