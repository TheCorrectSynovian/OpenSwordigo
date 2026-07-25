/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000549F98
 * Mangled: sub_549F98
 * Demangled: sub_549F98
 *
 * Callers: 3
 *   0x0000000000565330  sub_565330
 *   0x0000000000565E44  sub_565E44
 *   0x0000000000565E54  sub_565E54
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x0000000000549FA8 string=0x0000000000549FAC "`"
 *   insn=0x0000000000549FAC string=0x0000000000549FB4 "`"
 *   insn=0x0000000000549FB4 string=0x0000000000549FB8 "b"
 *   insn=0x0000000000549FB8 string=0x0000000000549FBC "!"
 *   insn=0x0000000000549FBC string=0x0000000000549FC0 "@`"
 *   insn=0x0000000000549FCC string=0x0000000000549FD0 "("
 *   insn=0x0000000000549FE0 string=0x0000000000549FE4 "!<G"
 *   insn=0x0000000000549FE4 string=0x0000000000549FE8 "a"
 *   insn=0x0000000000549FE8 string=0x0000000000549FEC "B "
 *   insn=0x0000000000549FE8 string=0x000000000054A014 "A"
 *   insn=0x0000000000549FEC string=0x0000000000549FF0 "A"
 *   insn=0x0000000000549FF0 string=0x0000000000549FF4 "#"
 *   insn=0x0000000000549FF4 string=0x0000000000549FF8 "C"
 *   insn=0x0000000000549FFC string=0x000000000054A000 "?"
 *   insn=0x000000000054A000 string=0x000000000054A004 "L"
 *   insn=0x000000000054A014 string=0x000000000054A018 "#"
 *   insn=0x000000000054A018 string=0x000000000054A01C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_549F98(std::exception *this)
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

