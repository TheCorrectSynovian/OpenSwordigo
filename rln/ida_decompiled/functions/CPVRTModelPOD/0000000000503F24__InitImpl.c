/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000503F24
 * Mangled: _ZN13CPVRTModelPOD8InitImplEv
 * Demangled: CPVRTModelPOD::InitImpl(void)
 *
 * Callers: 1
 *   0x00000000001F79F0  CPVRTModelPOD::InitImpl(void)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBC40  .memset
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 28
 *   insn=0x0000000000503F38 string=0x0000000000503F3C "`B@"
 *   insn=0x0000000000503F3C string=0x0000000000503F40 "@"
 *   insn=0x0000000000503F44 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000503F4C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000503F54 string=0x0000000000503F58 "uB"
 *   insn=0x0000000000503F60 string=0x0000000000503F64 "wJ@"
 *   insn=0x0000000000503F6C string=0x00000000001F8570 "0'"
 *   insn=0x0000000000503F78 string=0x0000000000503F7C "}"
 *   insn=0x0000000000503F88 string=0x0000000000503F8C "y"
 *   insn=0x0000000000503F9C string=0x0000000000503FA0 "w"
 *   insn=0x0000000000503FA0 string=0x0000000000503FA4 "b*@"
 *   insn=0x0000000000503FA8 string=0x0000000000503FAC "5"
 *   insn=0x0000000000503FAC string=0x0000000000503FB0 "iJ@"
 *   insn=0x0000000000503FAC string=0x00000000001F8480 "0'"
 *   insn=0x0000000000503FB0 string=0x0000000000503FB4 "hB@"
 *   insn=0x0000000000503FB4 string=0x0000000000503FB8 "?\t"
 *   insn=0x0000000000503FB8 string=0x0000000000503FBC "#"
 *   insn=0x0000000000503FC8 string=0x0000000000503FCC ""
 *   insn=0x0000000000503FCC string=0x0000000000503FD0 "i*@"
 *   insn=0x0000000000503FD8 string=0x0000000000503FDC """
 *   insn=0x0000000000503FDC string=0x0000000000503FE0 "("
 *   insn=0x0000000000503FE0 string=0x0000000000503FE4 "iJ@"
 *   insn=0x0000000000503FE4 string=0x0000000000503FE8 "hB@"
 *   insn=0x0000000000504000 string=0x0000000000504004 """
 *   insn=0x0000000000504014 string=0x0000000000504018 "hB@"
 *   insn=0x0000000000504018 string=0x000000000050401C "iJ@"
 *   insn=0x0000000000504024 string=0x0000000000504028 """
 *   insn=0x000000000050402C string=0x00000000001FBC40 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::InitImpl(CPVRTModelPOD *this)
{
  void *v2; // x0
  __int64 v3; // x21
  __int64 v4; // x23
  void *v5; // x20
  const void *v6; // x1
  unsigned __int64 v7; // x9
  __int64 v8; // x8
  unsigned __int64 v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  size_t v12; // x2

  v2 = (void *)*((_QWORD *)this + 16);
  if ( v2 )
    operator delete(v2);
  v3 = operator new(0x30u);
  *((_QWORD *)this + 16) = v3;
  *(_OWORD *)(v3 + 16) = 0u;
  *(_OWORD *)(v3 + 32) = 0u;
  *(_OWORD *)v3 = 0u;
  v4 = *((unsigned int *)this + 18);
  *(_QWORD *)(v3 + 16) = operator new[](4 * v4);
  v5 = (void *)operator new[](v4 << 6);
  *(_QWORD *)(v3 + 24) = v5;
  v6 = (const void *)operator new[](v4 << 6);
  *(_QWORD *)(v3 + 32) = v6;
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = 0;
  if ( (_DWORD)v4 )
  {
    CPVRTModelPOD::GetWorldMatrixNoCache();
    v7 = *((unsigned int *)this + 18);
    v8 = *((_QWORD *)this + 16);
    if ( (unsigned int)v7 >= 2 )
    {
      v9 = 1;
      v10 = 64;
      v11 = 96;
      do
      {
        CPVRTModelPOD::GetWorldMatrixNoCache();
        v7 = *((unsigned int *)this + 18);
        v8 = *((_QWORD *)this + 16);
        ++v9;
        v10 += 64;
        v11 += 96;
      }
      while ( v9 < v7 );
    }
    v5 = *(void **)(v8 + 24);
    v6 = *(const void **)(v8 + 32);
    v12 = v7 << 6;
  }
  else
  {
    v12 = 0;
  }
  memcpy(v5, v6, v12);
  memset(*(void **)(*((_QWORD *)this + 16) + 16LL), 0, 4LL * *((unsigned int *)this + 18));
  return 0;
}

