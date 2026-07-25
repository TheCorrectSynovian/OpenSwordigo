/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A7FC
 * Mangled: sub_54A7FC
 * Demangled: sub_54A7FC
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 16
 *   insn=0x000000000054A80C string=0x000000000054A810 "`"
 *   insn=0x000000000054A810 string=0x000000000054A818 "`"
 *   insn=0x000000000054A818 string=0x000000000054A81C "b"
 *   insn=0x000000000054A81C string=0x000000000054A820 "!"
 *   insn=0x000000000054A820 string=0x000000000054A824 "@`"
 *   insn=0x000000000054A83C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054A84C string=0x000000000054A850 "!<G"
 *   insn=0x000000000054A850 string=0x000000000054A854 "a"
 *   insn=0x000000000054A854 string=0x000000000054A858 "B "
 *   insn=0x000000000054A854 string=0x000000000054A880 "A"
 *   insn=0x000000000054A858 string=0x000000000054A85C "A"
 *   insn=0x000000000054A85C string=0x000000000054A860 "#"
 *   insn=0x000000000054A860 string=0x000000000054A864 "C"
 *   insn=0x000000000054A868 string=0x000000000054A86C "?"
 *   insn=0x000000000054A880 string=0x000000000054A884 "#"
 *   insn=0x000000000054A884 string=0x000000000054A888 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A7FC(std::exception *this)
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

