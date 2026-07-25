/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005715D0
 * Mangled: sub_5715D0
 * Demangled: sub_5715D0
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 18
 *   insn=0x00000000005715E0 string=0x00000000005715E4 " \n"
 *   insn=0x00000000005715E4 string=0x00000000005715EC "`"
 *   insn=0x00000000005715EC string=0x00000000005715F0 "b"
 *   insn=0x00000000005715F0 string=0x00000000005715F4 "!"
 *   insn=0x00000000005715F4 string=0x00000000005715F8 "@`"
 *   insn=0x000000000057160C string=0x0000000000571610 "("
 *   insn=0x0000000000571610 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000571620 string=0x0000000000571624 "!<G"
 *   insn=0x0000000000571624 string=0x0000000000571628 "a"
 *   insn=0x0000000000571628 string=0x000000000057162C "B "
 *   insn=0x0000000000571628 string=0x0000000000571654 "A"
 *   insn=0x000000000057162C string=0x0000000000571630 "A"
 *   insn=0x0000000000571630 string=0x0000000000571634 "#"
 *   insn=0x0000000000571634 string=0x0000000000571638 "C"
 *   insn=0x000000000057163C string=0x0000000000571640 "?"
 *   insn=0x0000000000571648 string=0x000000000057164C "V"
 *   insn=0x0000000000571654 string=0x0000000000571658 "#"
 *   insn=0x0000000000571658 string=0x000000000057165C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_5715D0(std::exception *this)
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
  operator delete(this);
}

