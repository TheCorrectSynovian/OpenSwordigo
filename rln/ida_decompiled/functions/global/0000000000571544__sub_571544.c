/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000571544
 * Mangled: sub_571544
 * Demangled: sub_571544
 *
 * Callers: 1
 *   0x0000000000565AD8  sub_565AD8
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x0000000000571554 string=0x0000000000571558 " \n"
 *   insn=0x0000000000571558 string=0x0000000000571560 "`"
 *   insn=0x0000000000571560 string=0x0000000000571564 "b"
 *   insn=0x0000000000571564 string=0x0000000000571568 "!"
 *   insn=0x0000000000571568 string=0x000000000057156C "@`"
 *   insn=0x000000000057158C string=0x0000000000571590 "!<G"
 *   insn=0x0000000000571590 string=0x0000000000571594 "a"
 *   insn=0x0000000000571594 string=0x0000000000571598 "B "
 *   insn=0x0000000000571594 string=0x00000000005715C0 "A"
 *   insn=0x0000000000571598 string=0x000000000057159C "A"
 *   insn=0x000000000057159C string=0x00000000005715A0 "#"
 *   insn=0x00000000005715A0 string=0x00000000005715A4 "C"
 *   insn=0x00000000005715A8 string=0x00000000005715AC "?"
 *   insn=0x00000000005715AC string=0x00000000005715B0 "L"
 *   insn=0x00000000005715B4 string=0x00000000005715B8 "{"
 *   insn=0x00000000005715C0 string=0x00000000005715C4 "#"
 *   insn=0x00000000005715C4 string=0x00000000005715C8 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_571544(std::exception *this)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v4; // x2
  int v5; // w1

  *(_QWORD *)this = off_6B81A0;
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

