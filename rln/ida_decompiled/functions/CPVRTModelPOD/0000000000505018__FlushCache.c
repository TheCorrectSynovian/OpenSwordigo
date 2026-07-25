/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505018
 * Mangled: _ZN13CPVRTModelPOD10FlushCacheEv
 * Demangled: CPVRTModelPOD::FlushCache(void)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *   0x00000000001FBC40  .memset
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 16
 *   insn=0x0000000000505028 string=0x000000000050502C "hB@"
 *   insn=0x0000000000505034 string=0x0000000000505038 "iJ@"
 *   insn=0x0000000000505038 string=0x000000000050503C "hB@"
 *   insn=0x000000000050503C string=0x0000000000505040 "i"
 *   insn=0x000000000050504C string=0x0000000000505050 ""
 *   insn=0x0000000000505050 string=0x0000000000505054 "i*@"
 *   insn=0x000000000050505C string=0x0000000000505060 """
 *   insn=0x0000000000505060 string=0x0000000000505064 ""
 *   insn=0x0000000000505064 string=0x0000000000505068 "iJ@"
 *   insn=0x0000000000505064 string=0x00000000001F8480 "0'"
 *   insn=0x0000000000505068 string=0x000000000050506C "hB@"
 *   insn=0x0000000000505080 string=0x0000000000505084 """
 *   insn=0x0000000000505094 string=0x0000000000505098 "hB@"
 *   insn=0x0000000000505098 string=0x000000000050509C "iJ@"
 *   insn=0x00000000005050A8 string=0x00000000005050AC """
 *   insn=0x00000000005050B8 string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void *__fastcall CPVRTModelPOD::FlushCache(CPVRTModelPOD *this)
{
  __int64 v2; // x8
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  unsigned __int64 v6; // x22
  unsigned __int64 v7; // x9
  size_t v8; // x2

  v2 = *((_QWORD *)this + 16);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = 0;
  v3 = *((_QWORD *)this + 16);
  if ( *((_DWORD *)this + 18) )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      CPVRTModelPOD::GetWorldMatrixNoCache();
      v7 = *((unsigned int *)this + 18);
      v3 = *((_QWORD *)this + 16);
      ++v6;
      v5 += 64;
      v4 += 96;
    }
    while ( v6 < v7 );
    v8 = v7 << 6;
  }
  else
  {
    v8 = 0;
  }
  memcpy(*(void **)(v3 + 24), *(const void **)(v3 + 32), v8);
  return memset(*(void **)(*((_QWORD *)this + 16) + 16LL), 0, 4LL * *((unsigned int *)this + 18));
}

