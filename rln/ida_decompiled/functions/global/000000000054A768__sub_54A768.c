/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A768
 * Mangled: sub_54A768
 * Demangled: sub_54A768
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
 *   insn=0x000000000054A778 string=0x000000000054A77C "`"
 *   insn=0x000000000054A77C string=0x000000000054A784 "`"
 *   insn=0x000000000054A784 string=0x000000000054A788 "b"
 *   insn=0x000000000054A788 string=0x000000000054A78C "!"
 *   insn=0x000000000054A78C string=0x000000000054A790 "@`"
 *   insn=0x000000000054A79C string=0x000000000054A7A0 "4"
 *   insn=0x000000000054A7A8 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054A7B8 string=0x000000000054A7BC "!<G"
 *   insn=0x000000000054A7BC string=0x000000000054A7C0 "a"
 *   insn=0x000000000054A7C0 string=0x000000000054A7C4 "B "
 *   insn=0x000000000054A7C0 string=0x000000000054A7EC "A"
 *   insn=0x000000000054A7C4 string=0x000000000054A7C8 "A"
 *   insn=0x000000000054A7C8 string=0x000000000054A7CC "#"
 *   insn=0x000000000054A7CC string=0x000000000054A7D0 "C"
 *   insn=0x000000000054A7D4 string=0x000000000054A7D8 "?"
 *   insn=0x000000000054A7EC string=0x000000000054A7F0 "#"
 *   insn=0x000000000054A7F0 string=0x000000000054A7F4 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A768(std::exception *this)
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

