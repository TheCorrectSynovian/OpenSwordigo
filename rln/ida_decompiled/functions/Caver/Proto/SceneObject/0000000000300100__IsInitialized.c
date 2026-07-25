/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000300100
 * Mangled: _ZNK5Caver5Proto11SceneObject13IsInitializedEv
 * Demangled: Caver::Proto::SceneObject::IsInitialized(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 5
 *   insn=0x000000000030010C string=0x0000000000300110 "h*@"
 *   insn=0x000000000030011C string=0x0000000000300120 "h"
 *   insn=0x0000000000300124 string=0x0000000000300128 ""
 *   insn=0x0000000000300128 string=0x000000000030012C ""
 *   insn=0x0000000000300134 string=0x0000000000300138 "h*"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SceneObject::IsInitialized(Caver::Proto::SceneObject *this)
{
  __int64 v2; // x20
  __int64 v3; // x0

  if ( *((int *)this + 10) < 1 )
    return 1;
  v2 = 0;
  while ( 1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v2);
    if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3) & 1) == 0 )
      break;
    if ( ++v2 >= *((int *)this + 10) )
      return 1;
  }
  return 0;
}

