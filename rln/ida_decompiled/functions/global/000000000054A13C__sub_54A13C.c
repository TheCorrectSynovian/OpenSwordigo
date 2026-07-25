/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A13C
 * Mangled: sub_54A13C
 * Demangled: sub_54A13C
 *
 * Callers: 1
 *   0x0000000000565A24  sub_565A24
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x000000000054A14C string=0x000000000054A150 "`"
 *   insn=0x000000000054A150 string=0x000000000054A158 "`"
 *   insn=0x000000000054A158 string=0x000000000054A15C "b"
 *   insn=0x000000000054A15C string=0x000000000054A160 "!"
 *   insn=0x000000000054A160 string=0x000000000054A164 "@`"
 *   insn=0x000000000054A184 string=0x000000000054A188 "!<G"
 *   insn=0x000000000054A188 string=0x000000000054A18C "a"
 *   insn=0x000000000054A18C string=0x000000000054A190 "B "
 *   insn=0x000000000054A18C string=0x000000000054A1B8 "A"
 *   insn=0x000000000054A190 string=0x000000000054A194 "A"
 *   insn=0x000000000054A194 string=0x000000000054A198 "#"
 *   insn=0x000000000054A198 string=0x000000000054A19C "C"
 *   insn=0x000000000054A1A0 string=0x000000000054A1A4 "?"
 *   insn=0x000000000054A1A4 string=0x000000000054A1A8 "L"
 *   insn=0x000000000054A1AC string=0x000000000054A1B0 "}"
 *   insn=0x000000000054A1B8 string=0x000000000054A1BC "#"
 *   insn=0x000000000054A1BC string=0x000000000054A1C0 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A13C(std::exception *this)
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

