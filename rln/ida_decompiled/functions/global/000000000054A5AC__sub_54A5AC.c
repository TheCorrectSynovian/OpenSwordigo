/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A5AC
 * Mangled: sub_54A5AC
 * Demangled: sub_54A5AC
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
 *   insn=0x000000000054A5BC string=0x000000000054A5C0 "`"
 *   insn=0x000000000054A5C0 string=0x000000000054A5C8 "`"
 *   insn=0x000000000054A5C8 string=0x000000000054A5CC "b"
 *   insn=0x000000000054A5CC string=0x000000000054A5D0 "!"
 *   insn=0x000000000054A5D0 string=0x000000000054A5D4 "@`"
 *   insn=0x000000000054A5E8 string=0x000000000054A5EC "1"
 *   insn=0x000000000054A5EC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054A5FC string=0x000000000054A600 "!<G"
 *   insn=0x000000000054A600 string=0x000000000054A604 "a"
 *   insn=0x000000000054A604 string=0x000000000054A608 "B "
 *   insn=0x000000000054A604 string=0x000000000054A630 "A"
 *   insn=0x000000000054A608 string=0x000000000054A60C "A"
 *   insn=0x000000000054A60C string=0x000000000054A610 "#"
 *   insn=0x000000000054A610 string=0x000000000054A614 "C"
 *   insn=0x000000000054A618 string=0x000000000054A61C "?"
 *   insn=0x000000000054A624 string=0x000000000054A628 "_"
 *   insn=0x000000000054A630 string=0x000000000054A634 "#"
 *   insn=0x000000000054A634 string=0x000000000054A638 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A5AC(std::exception *this)
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

