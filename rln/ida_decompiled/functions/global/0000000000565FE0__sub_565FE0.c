/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000565FE0
 * Mangled: sub_565FE0
 * Demangled: sub_565FE0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 16
 *   insn=0x0000000000565FF8 string=0x0000000000565FFC "B"
 *   insn=0x0000000000565FFC string=0x0000000000566000 "B"
 *   insn=0x0000000000566000 string=0x0000000000566004 "@"
 *   insn=0x000000000056600C string=0x0000000000566010 "`b"
 *   insn=0x0000000000566010 string=0x0000000000566014 "!"
 *   insn=0x0000000000566030 string=0x0000000000566034 "!<G"
 *   insn=0x0000000000566034 string=0x0000000000566038 "a"
 *   insn=0x0000000000566038 string=0x000000000056603C "b""
 *   insn=0x0000000000566038 string=0x0000000000566064 "a"
 *   insn=0x000000000056603C string=0x0000000000566040 "A"
 *   insn=0x0000000000566040 string=0x0000000000566044 "#"
 *   insn=0x0000000000566044 string=0x0000000000566048 "C"
 *   insn=0x000000000056604C string=0x0000000000566050 "?"
 *   insn=0x0000000000566050 string=0x0000000000566054 "l"
 *   insn=0x0000000000566064 string=0x0000000000566068 """
 *   insn=0x0000000000566068 string=0x000000000056606C "b"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_565FE0(__int64 a1)
{
  __int64 v1; // x19
  void *v2; // x0
  unsigned int *v4; // x2
  int v5; // w1
  __int64 v6; // [xsp+28h] [xbp+28h] BYREF

  (*(void (__fastcall **)(__int64 *__return_ptr, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(
    &v6,
    *(_QWORD *)(a1 + 24),
    *(unsigned int *)(a1 + 16));
  v1 = v6;
  v2 = (void *)(v6 - 24);
  if ( (__int64 *)(v6 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v4 = (unsigned int *)(v6 - 8);
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = *(_DWORD *)(v6 - 8);
      *(_DWORD *)(v6 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      operator delete(v2);
  }
  return v1;
}

