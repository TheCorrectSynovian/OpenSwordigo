/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000206670
 * Mangled: sub_206670
 * Demangled: sub_206670
 *
 * Callers: 1
 *   0x0000000000206770  sub_206770
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 25
 *   insn=0x0000000000206680 string=0x0000000000206684 "S"
 *   insn=0x0000000000206684 string=0x0000000000206688 "h"
 *   insn=0x00000000002066B8 string=0x00000000002066BC "a"
 *   insn=0x00000000002066BC string=0x00000000002066C0 "h"
 *   insn=0x00000000002066E4 string=0x00000000002066E8 ")=G"
 *   insn=0x00000000002066E8 string=0x00000000002066EC "!"
 *   insn=0x00000000002066F0 string=0x00000000002066F4 "\t"
 *   insn=0x00000000002066F0 string=0x000000000020672C "\t"
 *   insn=0x00000000002066F4 string=0x00000000002066F8 "*"
 *   insn=0x00000000002066F8 string=0x00000000002066FC "\n"
 *   insn=0x0000000000206700 string=0x0000000000206704 ""
 *   insn=0x0000000000206704 string=0x0000000000206738 "?"
 *   insn=0x0000000000206708 string=0x000000000020670C ")=G"
 *   insn=0x000000000020670C string=0x0000000000206710 "!"
 *   insn=0x0000000000206714 string=0x0000000000206718 "\t"
 *   insn=0x0000000000206714 string=0x000000000020674C "\t"
 *   insn=0x0000000000206718 string=0x000000000020671C "*"
 *   insn=0x000000000020671C string=0x0000000000206720 "\n"
 *   insn=0x0000000000206728 string=0x0000000000206758 "?"
 *   insn=0x000000000020672C string=0x0000000000206730 "*"
 *   insn=0x0000000000206730 string=0x0000000000206734 "\n"
 *   insn=0x000000000020674C string=0x0000000000206750 "*"
 *   insn=0x0000000000206750 string=0x0000000000206754 "\n"
 *   insn=0x0000000000206758 string=0x000000000020675C ","
 *   insn=0x000000000020676C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_206670()
{
  void *v0; // x0
  void *v1; // x0
  unsigned int *v2; // x8
  int v3; // w9
  unsigned int *v4; // x8
  int v5; // w9

  _ReadStatusReg(TPIDR_EL0);
  v0 = (void *)(qword_6E8C10 - 24);
  if ( (__int64 *)(qword_6E8C10 - 24) != &qword_6FD2E0 )
  {
    v2 = (unsigned int *)(qword_6E8C10 - 8);
    if ( &pthread_create )
    {
      do
        v3 = __ldaxr(v2);
      while ( __stlxr(v3 - 1, v2) );
    }
    else
    {
      v3 = (*v2)--;
    }
    if ( v3 <= 0 )
      operator delete(v0);
  }
  v1 = (void *)(Caver::groundMeshTypeStrings - 24);
  if ( (__int64 *)(Caver::groundMeshTypeStrings - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(Caver::groundMeshTypeStrings - 8);
    if ( &pthread_create )
    {
      do
        v5 = __ldaxr(v4);
      while ( __stlxr(v5 - 1, v4) );
    }
    else
    {
      v5 = (*v4)--;
    }
    if ( v5 <= 0 )
      operator delete(v1);
  }
}

