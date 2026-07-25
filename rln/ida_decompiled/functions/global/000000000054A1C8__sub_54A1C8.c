/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A1C8
 * Mangled: sub_54A1C8
 * Demangled: sub_54A1C8
 *
 * Callers: 1
 *   0x00000000005658BC  sub_5658BC
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x000000000054A1D8 string=0x000000000054A1DC "`"
 *   insn=0x000000000054A1DC string=0x000000000054A1E4 "`"
 *   insn=0x000000000054A1E4 string=0x000000000054A1E8 "b"
 *   insn=0x000000000054A1E8 string=0x000000000054A1EC "!"
 *   insn=0x000000000054A1EC string=0x000000000054A1F0 "@`"
 *   insn=0x000000000054A210 string=0x000000000054A214 "!<G"
 *   insn=0x000000000054A214 string=0x000000000054A218 "a"
 *   insn=0x000000000054A218 string=0x000000000054A21C "B "
 *   insn=0x000000000054A218 string=0x000000000054A244 "A"
 *   insn=0x000000000054A21C string=0x000000000054A220 "A"
 *   insn=0x000000000054A220 string=0x000000000054A224 "#"
 *   insn=0x000000000054A224 string=0x000000000054A228 "C"
 *   insn=0x000000000054A22C string=0x000000000054A230 "?"
 *   insn=0x000000000054A230 string=0x000000000054A234 "L"
 *   insn=0x000000000054A238 string=0x000000000054A23C "Z"
 *   insn=0x000000000054A244 string=0x000000000054A248 "#"
 *   insn=0x000000000054A248 string=0x000000000054A24C "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A1C8(std::exception *this)
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
}

