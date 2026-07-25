/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000545128
 * Mangled: sub_545128
 * Demangled: sub_545128
 *
 * Callers: 1
 *   0x00000000005451F4  sub_5451F4
 *
 * Callees: 4
 *   0x00000000005221DC  sub_5221DC
 *   0x000000000053C0C8  sub_53C0C8
 *   0x000000000056EC5C  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 24
 *   insn=0x000000000054513C string=0x0000000000545144 "`"
 *   insn=0x0000000000545148 string=0x0000000000545150 "`2"
 *   insn=0x0000000000545154 string=0x0000000000545158 "b.@"
 *   insn=0x000000000054515C string=0x0000000000545160 "`\n"
 *   insn=0x0000000000545160 string=0x0000000000545164 "@`"
 *   insn=0x0000000000545164 string=0x0000000000545168 "!"
 *   insn=0x0000000000545174 string=0x0000000000545178 "`""
 *   insn=0x0000000000545178 string=0x000000000054517C "!"
 *   insn=0x000000000054517C string=0x0000000000545180 "!@"
 *   insn=0x0000000000545180 string=0x0000000000545184 "a\n"
 *   insn=0x000000000054518C string=0x0000000000545190 "`"
 *   insn=0x0000000000545190 string=0x0000000000545194 "!$E"
 *   insn=0x0000000000545194 string=0x0000000000545198 "!@"
 *   insn=0x0000000000545198 string=0x000000000054519C "a2"
 *   insn=0x00000000005451B0 string=0x00000000005451B4 "!<G"
 *   insn=0x00000000005451B4 string=0x00000000005451B8 "a"
 *   insn=0x00000000005451B8 string=0x00000000005451BC "B "
 *   insn=0x00000000005451B8 string=0x00000000005451E4 "A"
 *   insn=0x00000000005451BC string=0x00000000005451C0 "A"
 *   insn=0x00000000005451C0 string=0x00000000005451C4 "#"
 *   insn=0x00000000005451C4 string=0x00000000005451C8 "C"
 *   insn=0x00000000005451CC string=0x00000000005451D0 "?"
 *   insn=0x00000000005451E4 string=0x00000000005451E8 "#"
 *   insn=0x00000000005451E8 string=0x00000000005451EC "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_545128(__int64 a1)
{
  __int64 v2; // x2
  void *v3; // x0
  unsigned int *v5; // x2
  int v6; // w1

  *(_QWORD *)a1 = off_6B73D8;
  *(_QWORD *)(a1 + 96) = off_6B7400;
  v2 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 16) = off_6DA9F0;
  v3 = (void *)(v2 - 24);
  if ( (__int64 *)(v2 - 24) != &qword_6FD300 )
  {
    if ( &pthread_create )
    {
      v5 = (unsigned int *)(v2 - 8);
      do
        v6 = __ldaxr(v5);
      while ( __stlxr(v6 - 1, v5) );
    }
    else
    {
      v6 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v6 - 1;
    }
    if ( v6 <= 0 )
      operator delete(v3);
  }
  *(_QWORD *)(a1 + 16) = off_6B7790;
  sub_53C0C8((unsigned int **)(a1 + 72));
  *(_QWORD *)(a1 + 96) = off_6B6B50;
  return sub_5221DC((_QWORD *)(a1 + 96));
}

