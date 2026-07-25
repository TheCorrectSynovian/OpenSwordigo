/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002042A4
 * Mangled: sub_2042A4
 * Demangled: sub_2042A4
 *
 * Callers: 1
 *   0x00000000002044F4  sub_2044F4
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 80
 *   insn=0x00000000002042B4 string=0x00000000002042B8 "S"
 *   insn=0x00000000002042B8 string=0x00000000002042BC "h"
 *   insn=0x00000000002042E0 string=0x0000000000204358 "\t'"
 *   insn=0x00000000002042EC string=0x00000000002042F0 "a"
 *   insn=0x00000000002042F0 string=0x000000000020437C "\t'"
 *   insn=0x0000000000204300 string=0x00000000002043A0 "\t'"
 *   insn=0x0000000000204310 string=0x00000000002043C4 "\t'"
 *   insn=0x000000000020431C string=0x0000000000204320 "A"
 *   insn=0x0000000000204320 string=0x00000000002043E8 "\t'"
 *   insn=0x0000000000204330 string=0x0000000000204334 "h"
 *   insn=0x0000000000204330 string=0x000000000020440C "\t'"
 *   insn=0x0000000000204340 string=0x00000000002044F0 "x"
 *   insn=0x0000000000204358 string=0x000000000020435C ")=G"
 *   insn=0x000000000020435C string=0x0000000000204360 "!"
 *   insn=0x0000000000204360 string=0x0000000000204364 "i"
 *   insn=0x0000000000204364 string=0x0000000000204368 "\t"
 *   insn=0x0000000000204364 string=0x0000000000204430 "\t"
 *   insn=0x0000000000204368 string=0x000000000020436C "*"
 *   insn=0x000000000020436C string=0x0000000000204370 "\n"
 *   insn=0x0000000000204374 string=0x0000000000204378 "1"
 *   insn=0x0000000000204378 string=0x000000000020443C "?"
 *   insn=0x000000000020437C string=0x0000000000204380 ")=G"
 *   insn=0x0000000000204380 string=0x0000000000204384 "!"
 *   insn=0x0000000000204384 string=0x0000000000204388 "I"
 *   insn=0x0000000000204388 string=0x000000000020438C "\t"
 *   insn=0x0000000000204388 string=0x0000000000204450 "\t"
 *   insn=0x000000000020438C string=0x0000000000204390 "*"
 *   insn=0x0000000000204390 string=0x0000000000204394 "\n"
 *   insn=0x0000000000204398 string=0x000000000020439C "0"
 *   insn=0x000000000020439C string=0x000000000020445C "?"
 *   insn=0x00000000002043A0 string=0x00000000002043A4 ")=G"
 *   insn=0x00000000002043A4 string=0x00000000002043A8 "!"
 *   insn=0x00000000002043A8 string=0x00000000002043AC ")"
 *   insn=0x00000000002043AC string=0x00000000002043B0 "\t"
 *   insn=0x00000000002043AC string=0x0000000000204470 "\t"
 *   insn=0x00000000002043B0 string=0x00000000002043B4 "*"
 *   insn=0x00000000002043B4 string=0x00000000002043B8 "\n"
 *   insn=0x00000000002043BC string=0x00000000002043C0 "/"
 *   insn=0x00000000002043C0 string=0x000000000020447C "?"
 *   insn=0x00000000002043C4 string=0x00000000002043C8 ")=G"
 *   insn=0x00000000002043C8 string=0x00000000002043CC "!"
 *   insn=0x00000000002043CC string=0x00000000002043D0 "\t"
 *   insn=0x00000000002043D0 string=0x00000000002043D4 "\t"
 *   insn=0x00000000002043D0 string=0x0000000000204490 "\t"
 *   insn=0x00000000002043D4 string=0x00000000002043D8 "*"
 *   insn=0x00000000002043D8 string=0x00000000002043DC "\n"
 *   insn=0x00000000002043E0 string=0x00000000002043E4 "."
 *   insn=0x00000000002043E4 string=0x000000000020449C "?"
 *   insn=0x00000000002043E8 string=0x00000000002043EC ")=G"
 *   insn=0x00000000002043EC string=0x00000000002043F0 "!"
 *   insn=0x00000000002043F4 string=0x00000000002043F8 "\t"
 *   insn=0x00000000002043F4 string=0x00000000002044B0 "\t"
 *   insn=0x00000000002043F8 string=0x00000000002043FC "*"
 *   insn=0x00000000002043FC string=0x0000000000204400 "\n"
 *   insn=0x0000000000204404 string=0x0000000000204408 "-"
 *   insn=0x0000000000204408 string=0x00000000002044BC "?"
 *   insn=0x000000000020440C string=0x0000000000204410 ")=G"
 *   insn=0x0000000000204410 string=0x0000000000204414 "!"
 *   insn=0x0000000000204418 string=0x000000000020441C "\t"
 *   insn=0x0000000000204418 string=0x00000000002044D0 "\t"
 *   insn=0x000000000020441C string=0x0000000000204420 "*"
 *   insn=0x0000000000204420 string=0x0000000000204424 "\n"
 *   insn=0x0000000000204428 string=0x000000000020442C ","
 *   insn=0x000000000020442C string=0x00000000002044DC "?"
 *   insn=0x0000000000204430 string=0x0000000000204434 "*"
 *   insn=0x0000000000204434 string=0x0000000000204438 "\n"
 *   insn=0x000000000020443C string=0x0000000000204440 ","
 *   insn=0x0000000000204450 string=0x0000000000204454 "*"
 *   insn=0x0000000000204454 string=0x0000000000204458 "\n"
 *   insn=0x0000000000204470 string=0x0000000000204474 "*"
 *   insn=0x0000000000204474 string=0x0000000000204478 "\n"
 *   insn=0x000000000020447C string=0x0000000000204480 ","
 *   insn=0x0000000000204490 string=0x0000000000204494 "*"
 *   insn=0x0000000000204494 string=0x0000000000204498 "\n"
 *   insn=0x00000000002044B0 string=0x00000000002044B4 "*"
 *   insn=0x00000000002044B4 string=0x00000000002044B8 "\n"
 *   insn=0x00000000002044BC string=0x00000000002044C0 ","
 *   insn=0x00000000002044D0 string=0x00000000002044D4 "*"
 *   insn=0x00000000002044D4 string=0x00000000002044D8 "\n"
 *   insn=0x00000000002044F0 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_2042A4()
{
  void *v0; // x0
  void *v1; // x0
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  unsigned int *v8; // x8
  int v9; // w9
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9

  _ReadStatusReg(TPIDR_EL0);
  v0 = (void *)(qword_6E8AA0 - 24);
  if ( (__int64 *)(qword_6E8AA0 - 24) != &qword_6FD2E0 )
  {
    v6 = (unsigned int *)(qword_6E8AA0 - 8);
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
      operator delete(v0);
  }
  v1 = (void *)(qword_6E8A98 - 24);
  if ( (__int64 *)(qword_6E8A98 - 24) != &qword_6FD2E0 )
  {
    v8 = (unsigned int *)(qword_6E8A98 - 8);
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
      operator delete(v1);
  }
  v2 = (void *)(qword_6E8A90 - 24);
  if ( (__int64 *)(qword_6E8A90 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(qword_6E8A90 - 8);
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
      operator delete(v2);
  }
  v3 = (void *)(qword_6E8A88 - 24);
  if ( (__int64 *)(qword_6E8A88 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(qword_6E8A88 - 8);
    if ( &pthread_create )
    {
      do
        v13 = __ldaxr(v12);
      while ( __stlxr(v13 - 1, v12) );
    }
    else
    {
      v13 = (*v12)--;
    }
    if ( v13 <= 0 )
      operator delete(v3);
  }
  v4 = (void *)(qword_6E8A80 - 24);
  if ( (__int64 *)(qword_6E8A80 - 24) != &qword_6FD2E0 )
  {
    v14 = (unsigned int *)(qword_6E8A80 - 8);
    if ( &pthread_create )
    {
      do
        v15 = __ldaxr(v14);
      while ( __stlxr(v15 - 1, v14) );
    }
    else
    {
      v15 = (*v14)--;
    }
    if ( v15 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(Caver::typeStrings - 24);
  if ( (__int64 *)(Caver::typeStrings - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(Caver::typeStrings - 8);
    if ( &pthread_create )
    {
      do
        v17 = __ldaxr(v16);
      while ( __stlxr(v17 - 1, v16) );
    }
    else
    {
      v17 = (*v16)--;
    }
    if ( v17 <= 0 )
      operator delete(v5);
  }
}

