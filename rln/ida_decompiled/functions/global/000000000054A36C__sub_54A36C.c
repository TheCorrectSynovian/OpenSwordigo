/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054A36C
 * Mangled: sub_54A36C
 * Demangled: sub_54A36C
 *
 * Callers: 1
 *   0x000000000056554C  sub_56554C
 *
 * Callees: 3
 *   0x0000000000200070  std::exception::~exception()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 17
 *   insn=0x000000000054A37C string=0x000000000054A380 "`"
 *   insn=0x000000000054A380 string=0x000000000054A388 "`"
 *   insn=0x000000000054A388 string=0x000000000054A38C "b"
 *   insn=0x000000000054A38C string=0x000000000054A390 "!"
 *   insn=0x000000000054A390 string=0x000000000054A394 "@`"
 *   insn=0x000000000054A3A0 string=0x000000000054A3A4 "3"
 *   insn=0x000000000054A3B4 string=0x000000000054A3B8 "!<G"
 *   insn=0x000000000054A3B8 string=0x000000000054A3BC "a"
 *   insn=0x000000000054A3BC string=0x000000000054A3C0 "B "
 *   insn=0x000000000054A3BC string=0x000000000054A3E8 "A"
 *   insn=0x000000000054A3C0 string=0x000000000054A3C4 "A"
 *   insn=0x000000000054A3C4 string=0x000000000054A3C8 "#"
 *   insn=0x000000000054A3C8 string=0x000000000054A3CC "C"
 *   insn=0x000000000054A3D0 string=0x000000000054A3D4 "?"
 *   insn=0x000000000054A3D4 string=0x000000000054A3D8 "L"
 *   insn=0x000000000054A3E8 string=0x000000000054A3EC "#"
 *   insn=0x000000000054A3EC string=0x000000000054A3F0 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall sub_54A36C(std::exception *this)
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

