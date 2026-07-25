/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A2E0
 * Mangled: sub_54A2E0
 * Demangled: sub_54A2E0
 *
 * Callers: 1
 *   0x00000000005653E4  sub_5653E4
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x000000000054A2F0 string=0x000000000054A2F4 "`"
 *   insn=0x000000000054A2F4 string=0x000000000054A2FC "`"
 *   insn=0x000000000054A2FC string=0x000000000054A300 "b"
 *   insn=0x000000000054A300 string=0x000000000054A304 "!"
 *   insn=0x000000000054A304 string=0x000000000054A308 "@`"
 *   insn=0x000000000054A314 string=0x000000000054A318 "V"
 *   insn=0x000000000054A328 string=0x000000000054A32C "!<G"
 *   insn=0x000000000054A32C string=0x000000000054A330 "a"
 *   insn=0x000000000054A330 string=0x000000000054A334 "B "
 *   insn=0x000000000054A330 string=0x000000000054A35C "A"
 *   insn=0x000000000054A334 string=0x000000000054A338 "A"
 *   insn=0x000000000054A338 string=0x000000000054A33C "#"
 *   insn=0x000000000054A33C string=0x000000000054A340 "C"
 *   insn=0x000000000054A344 string=0x000000000054A348 "?"
 *   insn=0x000000000054A348 string=0x000000000054A34C "L"
 *   insn=0x000000000054A35C string=0x000000000054A360 "#"
 *   insn=0x000000000054A360 string=0x000000000054A364 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A2E0(std::exception *this)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)this = off_6B7560;
  v2 = *((_QWORD *)this + 1);
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD2E0 )
  {
    if ( &pthread_create )
    {
      v4 = (unsigned int *)(v2 - 8);
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v5 - 1;
    }
    if ( v5 <= 0 )
      operator delete(v3);
  }
  std::exception::~exception(this);
}

