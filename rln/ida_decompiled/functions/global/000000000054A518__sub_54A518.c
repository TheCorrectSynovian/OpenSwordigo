/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A518
 * Mangled: sub_54A518
 * Demangled: sub_54A518
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
 *   insn=0x000000000054A528 string=0x000000000054A52C "`"
 *   insn=0x000000000054A52C string=0x000000000054A534 "`"
 *   insn=0x000000000054A534 string=0x000000000054A538 "b"
 *   insn=0x000000000054A538 string=0x000000000054A53C "!"
 *   insn=0x000000000054A53C string=0x000000000054A540 "@`"
 *   insn=0x000000000054A554 string=0x000000000054A558 "V"
 *   insn=0x000000000054A558 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000054A568 string=0x000000000054A56C "!<G"
 *   insn=0x000000000054A56C string=0x000000000054A570 "a"
 *   insn=0x000000000054A570 string=0x000000000054A574 "B "
 *   insn=0x000000000054A570 string=0x000000000054A59C "A"
 *   insn=0x000000000054A574 string=0x000000000054A578 "A"
 *   insn=0x000000000054A578 string=0x000000000054A57C "#"
 *   insn=0x000000000054A57C string=0x000000000054A580 "C"
 *   insn=0x000000000054A584 string=0x000000000054A588 "?"
 *   insn=0x000000000054A59C string=0x000000000054A5A0 "#"
 *   insn=0x000000000054A5A0 string=0x000000000054A5A4 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A518(std::exception *this)
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

