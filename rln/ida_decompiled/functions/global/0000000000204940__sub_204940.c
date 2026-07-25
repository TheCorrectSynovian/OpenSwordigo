/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000204940
 * Mangled: sub_204940
 * Demangled: sub_204940
 *
 * Callers: 1
 *   0x0000000000204AEC  sub_204AEC
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 57
 *   insn=0x0000000000204950 string=0x0000000000204954 "S"
 *   insn=0x0000000000204954 string=0x0000000000204958 "h"
 *   insn=0x0000000000204958 string=0x000000000020495C "5'"
 *   insn=0x000000000020497C string=0x00000000002049D8 "\t'"
 *   insn=0x000000000020498C string=0x00000000002049FC "\t'"
 *   insn=0x0000000000204998 string=0x000000000020499C "!"
 *   insn=0x000000000020499C string=0x00000000002049A0 "('"
 *   insn=0x000000000020499C string=0x0000000000204A20 "\t'"
 *   insn=0x00000000002049A0 string=0x00000000002049A4 "aE"
 *   insn=0x00000000002049B0 string=0x00000000002049B4 "h"
 *   insn=0x00000000002049B0 string=0x0000000000204A44 "\t'"
 *   insn=0x00000000002049BC string=0x00000000002049C0 "A\t"
 *   insn=0x00000000002049D8 string=0x00000000002049DC ")=G"
 *   insn=0x00000000002049DC string=0x00000000002049E0 "!"
 *   insn=0x00000000002049E0 string=0x00000000002049E4 ")"
 *   insn=0x00000000002049E4 string=0x00000000002049E8 "\t"
 *   insn=0x00000000002049E4 string=0x0000000000204A68 "\t"
 *   insn=0x00000000002049E8 string=0x00000000002049EC "*"
 *   insn=0x00000000002049EC string=0x00000000002049F0 "\n"
 *   insn=0x00000000002049F8 string=0x0000000000204A74 "?"
 *   insn=0x00000000002049FC string=0x0000000000204A00 ")=G"
 *   insn=0x0000000000204A00 string=0x0000000000204A04 "!"
 *   insn=0x0000000000204A04 string=0x0000000000204A08 "\t"
 *   insn=0x0000000000204A08 string=0x0000000000204A0C "\t"
 *   insn=0x0000000000204A08 string=0x0000000000204A88 "\t"
 *   insn=0x0000000000204A0C string=0x0000000000204A10 "*"
 *   insn=0x0000000000204A10 string=0x0000000000204A14 "\n"
 *   insn=0x0000000000204A1C string=0x0000000000204A94 "?"
 *   insn=0x0000000000204A20 string=0x0000000000204A24 ")=G"
 *   insn=0x0000000000204A24 string=0x0000000000204A28 "!"
 *   insn=0x0000000000204A2C string=0x0000000000204A30 "\t"
 *   insn=0x0000000000204A2C string=0x0000000000204AA8 "\t"
 *   insn=0x0000000000204A30 string=0x0000000000204A34 "*"
 *   insn=0x0000000000204A34 string=0x0000000000204A38 "\n"
 *   insn=0x0000000000204A40 string=0x0000000000204AB4 "?"
 *   insn=0x0000000000204A44 string=0x0000000000204A48 ")=G"
 *   insn=0x0000000000204A48 string=0x0000000000204A4C "!"
 *   insn=0x0000000000204A50 string=0x0000000000204A54 "\t"
 *   insn=0x0000000000204A50 string=0x0000000000204AC8 "\t"
 *   insn=0x0000000000204A54 string=0x0000000000204A58 "*"
 *   insn=0x0000000000204A58 string=0x0000000000204A5C "\n"
 *   insn=0x0000000000204A64 string=0x0000000000204AD4 "?"
 *   insn=0x0000000000204A68 string=0x0000000000204A6C "*"
 *   insn=0x0000000000204A6C string=0x0000000000204A70 "\n"
 *   insn=0x0000000000204A74 string=0x0000000000204A78 "L"
 *   insn=0x0000000000204A7C string=0x0000000000204A80 "I"
 *   insn=0x0000000000204A88 string=0x0000000000204A8C "*"
 *   insn=0x0000000000204A8C string=0x0000000000204A90 "\n"
 *   insn=0x0000000000204A9C string=0x0000000000204AA0 "A"
 *   insn=0x0000000000204AA8 string=0x0000000000204AAC "*"
 *   insn=0x0000000000204AAC string=0x0000000000204AB0 "\n"
 *   insn=0x0000000000204AB4 string=0x0000000000204AB8 "L"
 *   insn=0x0000000000204ABC string=0x0000000000204AC0 "9"
 *   insn=0x0000000000204AC8 string=0x0000000000204ACC "*"
 *   insn=0x0000000000204ACC string=0x0000000000204AD0 "\n"
 *   insn=0x0000000000204ADC string=0x0000000000204AE0 "1"
 *   insn=0x0000000000204AE8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_204940()
{
  void *v0; // x0
  void *v1; // x0
  void *v2; // x0
  void *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9

  _ReadStatusReg(TPIDR_EL0);
  v0 = (void *)(qword_6E8AD8 - 24);
  if ( (__int64 *)(qword_6E8AD8 - 24) != &qword_6FD2E0 )
  {
    v4 = (unsigned int *)(qword_6E8AD8 - 8);
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
      operator delete(v0);
  }
  v1 = (void *)(qword_6E8AD0 - 24);
  if ( (__int64 *)(qword_6E8AD0 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(qword_6E8AD0 - 8);
    if ( &pthread_create )
    {
      do
        v7 = __ldaxr(v6);
      while ( __stlxr(v7 - 1, v6) );
    }
    else
    {
      v7 = (*v6)--;
    }
    if ( v7 <= 0 )
      operator delete(v1);
  }
  v2 = (void *)(qword_6E8AC8 - 24);
  if ( (__int64 *)(qword_6E8AC8 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(qword_6E8AC8 - 8);
    if ( &pthread_create )
    {
      do
        v9 = __ldaxr(v8);
      while ( __stlxr(v9 - 1, v8) );
    }
    else
    {
      v9 = (*v8)--;
    }
    if ( v9 <= 0 )
      operator delete(v2);
  }
  v3 = (void *)(qword_6E8AC0 - 24);
  if ( (__int64 *)(qword_6E8AC0 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(qword_6E8AC0 - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v3);
  }
}

