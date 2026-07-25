/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A484
 * Mangled: sub_54A484
 * Demangled: sub_54A484
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
 *   insn=0x000000000054A494 string=0x000000000054A498 "`"
 *   insn=0x000000000054A498 string=0x000000000054A4A0 "`"
 *   insn=0x000000000054A4A0 string=0x000000000054A4A4 "b"
 *   insn=0x000000000054A4A4 string=0x000000000054A4A8 "!"
 *   insn=0x000000000054A4A8 string=0x000000000054A4AC "@`"
 *   insn=0x000000000054A4C0 string=0x000000000054A4C4 "{"
 *   insn=0x000000000054A4C4 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054A4D4 string=0x000000000054A4D8 "!<G"
 *   insn=0x000000000054A4D8 string=0x000000000054A4DC "a"
 *   insn=0x000000000054A4DC string=0x000000000054A4E0 "B "
 *   insn=0x000000000054A4DC string=0x000000000054A508 "A"
 *   insn=0x000000000054A4E0 string=0x000000000054A4E4 "A"
 *   insn=0x000000000054A4E4 string=0x000000000054A4E8 "#"
 *   insn=0x000000000054A4E8 string=0x000000000054A4EC "C"
 *   insn=0x000000000054A4F0 string=0x000000000054A4F4 "?"
 *   insn=0x000000000054A508 string=0x000000000054A50C "#"
 *   insn=0x000000000054A50C string=0x000000000054A510 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A484(std::exception *this)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)this = off_6B7650;
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

