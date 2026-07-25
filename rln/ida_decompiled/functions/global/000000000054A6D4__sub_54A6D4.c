/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A6D4
 * Mangled: sub_54A6D4
 * Demangled: sub_54A6D4
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
 *   insn=0x000000000054A6E4 string=0x000000000054A6E8 "`"
 *   insn=0x000000000054A6E8 string=0x000000000054A6F0 "`"
 *   insn=0x000000000054A6F0 string=0x000000000054A6F4 "b"
 *   insn=0x000000000054A6F4 string=0x000000000054A6F8 "!"
 *   insn=0x000000000054A6F8 string=0x000000000054A6FC "@`"
 *   insn=0x000000000054A708 string=0x000000000054A70C "Y"
 *   insn=0x000000000054A714 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054A724 string=0x000000000054A728 "!<G"
 *   insn=0x000000000054A728 string=0x000000000054A72C "a"
 *   insn=0x000000000054A72C string=0x000000000054A730 "B "
 *   insn=0x000000000054A72C string=0x000000000054A758 "A"
 *   insn=0x000000000054A730 string=0x000000000054A734 "A"
 *   insn=0x000000000054A734 string=0x000000000054A738 "#"
 *   insn=0x000000000054A738 string=0x000000000054A73C "C"
 *   insn=0x000000000054A740 string=0x000000000054A744 "?"
 *   insn=0x000000000054A758 string=0x000000000054A75C "#"
 *   insn=0x000000000054A75C string=0x000000000054A760 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A6D4(std::exception *this)
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

