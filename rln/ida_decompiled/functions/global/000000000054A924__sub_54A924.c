/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A924
 * Mangled: sub_54A924
 * Demangled: sub_54A924
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x000000000054A934 string=0x000000000054A938 "`"
 *   insn=0x000000000054A938 string=0x000000000054A940 "`"
 *   insn=0x000000000054A940 string=0x000000000054A944 "b"
 *   insn=0x000000000054A944 string=0x000000000054A948 "!"
 *   insn=0x000000000054A948 string=0x000000000054A94C "@`"
 *   insn=0x000000000054A960 string=0x000000000054A964 "S"
 *   insn=0x000000000054A964 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054A974 string=0x000000000054A978 "!<G"
 *   insn=0x000000000054A978 string=0x000000000054A97C "a"
 *   insn=0x000000000054A97C string=0x000000000054A980 "B "
 *   insn=0x000000000054A97C string=0x000000000054A9A8 "A"
 *   insn=0x000000000054A980 string=0x000000000054A984 "A"
 *   insn=0x000000000054A984 string=0x000000000054A988 "#"
 *   insn=0x000000000054A988 string=0x000000000054A98C "C"
 *   insn=0x000000000054A990 string=0x000000000054A994 "?"
 *   insn=0x000000000054A9A8 string=0x000000000054A9AC "#"
 *   insn=0x000000000054A9AC string=0x000000000054A9B0 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A924(std::exception *this)
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
  operator delete(this);
}

