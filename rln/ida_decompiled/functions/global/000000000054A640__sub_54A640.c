/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A640
 * Mangled: sub_54A640
 * Demangled: sub_54A640
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
 *   insn=0x000000000054A650 string=0x000000000054A654 "`"
 *   insn=0x000000000054A654 string=0x000000000054A65C "`"
 *   insn=0x000000000054A65C string=0x000000000054A660 "b"
 *   insn=0x000000000054A660 string=0x000000000054A664 "!"
 *   insn=0x000000000054A664 string=0x000000000054A668 "@`"
 *   insn=0x000000000054A674 string=0x000000000054A678 "~"
 *   insn=0x000000000054A680 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054A690 string=0x000000000054A694 "!<G"
 *   insn=0x000000000054A694 string=0x000000000054A698 "a"
 *   insn=0x000000000054A698 string=0x000000000054A69C "B "
 *   insn=0x000000000054A698 string=0x000000000054A6C4 "A"
 *   insn=0x000000000054A69C string=0x000000000054A6A0 "A"
 *   insn=0x000000000054A6A0 string=0x000000000054A6A4 "#"
 *   insn=0x000000000054A6A4 string=0x000000000054A6A8 "C"
 *   insn=0x000000000054A6AC string=0x000000000054A6B0 "?"
 *   insn=0x000000000054A6B8 string=0x000000000054A6BC ":"
 *   insn=0x000000000054A6C4 string=0x000000000054A6C8 "#"
 *   insn=0x000000000054A6C8 string=0x000000000054A6CC "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A640(std::exception *this)
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

