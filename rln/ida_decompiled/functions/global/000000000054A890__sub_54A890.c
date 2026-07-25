/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A890
 * Mangled: sub_54A890
 * Demangled: sub_54A890
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
 *   insn=0x000000000054A8A0 string=0x000000000054A8A4 "`"
 *   insn=0x000000000054A8A4 string=0x000000000054A8AC "`"
 *   insn=0x000000000054A8AC string=0x000000000054A8B0 "b"
 *   insn=0x000000000054A8B0 string=0x000000000054A8B4 "!"
 *   insn=0x000000000054A8B4 string=0x000000000054A8B8 "@`"
 *   insn=0x000000000054A8CC string=0x000000000054A8D0 "x"
 *   insn=0x000000000054A8D0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054A8E0 string=0x000000000054A8E4 "!<G"
 *   insn=0x000000000054A8E4 string=0x000000000054A8E8 "a"
 *   insn=0x000000000054A8E8 string=0x000000000054A8EC "B "
 *   insn=0x000000000054A8E8 string=0x000000000054A914 "A"
 *   insn=0x000000000054A8EC string=0x000000000054A8F0 "A"
 *   insn=0x000000000054A8F0 string=0x000000000054A8F4 "#"
 *   insn=0x000000000054A8F4 string=0x000000000054A8F8 "C"
 *   insn=0x000000000054A8FC string=0x000000000054A900 "?"
 *   insn=0x000000000054A914 string=0x000000000054A918 "#"
 *   insn=0x000000000054A918 string=0x000000000054A91C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A890(std::exception *this)
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

