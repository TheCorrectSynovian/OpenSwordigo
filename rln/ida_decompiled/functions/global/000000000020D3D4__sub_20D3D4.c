/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000020D3D4
 * Mangled: sub_20D3D4
 * Demangled: sub_20D3D4
 *
 * Callers: 1
 *   0x000000000020D720  sub_20D720
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 124
 *   insn=0x000000000020D3E4 string=0x000000000020D3E8 "S"
 *   insn=0x000000000020D3E8 string=0x000000000020D3EC "h"
 *   insn=0x000000000020D40C string=0x000000000020D410 "A"
 *   insn=0x000000000020D43C string=0x000000000020D440 "!"
 *   insn=0x000000000020D45C string=0x000000000020D460 "a"
 *   insn=0x000000000020D48C string=0x000000000020D490 "A\n"
 *   insn=0x000000000020D490 string=0x000000000020D494 "h"
 *   insn=0x000000000020D4B8 string=0x000000000020D4BC ")=G"
 *   insn=0x000000000020D4BC string=0x000000000020D4C0 "!"
 *   insn=0x000000000020D4C4 string=0x000000000020D4C8 "\t"
 *   insn=0x000000000020D4C4 string=0x000000000020D5FC "\t"
 *   insn=0x000000000020D4C8 string=0x000000000020D4CC "*"
 *   insn=0x000000000020D4CC string=0x000000000020D4D0 "\n"
 *   insn=0x000000000020D4D4 string=0x000000000020D4D8 "L"
 *   insn=0x000000000020D4D8 string=0x000000000020D608 "?"
 *   insn=0x000000000020D4DC string=0x000000000020D4E0 ")=G"
 *   insn=0x000000000020D4E0 string=0x000000000020D4E4 "!"
 *   insn=0x000000000020D4E8 string=0x000000000020D4EC "\t"
 *   insn=0x000000000020D4E8 string=0x000000000020D61C "\t"
 *   insn=0x000000000020D4EC string=0x000000000020D4F0 "*"
 *   insn=0x000000000020D4F0 string=0x000000000020D4F4 "\n"
 *   insn=0x000000000020D4F8 string=0x000000000020D4FC "K"
 *   insn=0x000000000020D4FC string=0x000000000020D628 "?"
 *   insn=0x000000000020D500 string=0x000000000020D504 ")=G"
 *   insn=0x000000000020D504 string=0x000000000020D508 "!"
 *   insn=0x000000000020D50C string=0x000000000020D510 "\t"
 *   insn=0x000000000020D50C string=0x000000000020D63C "\t"
 *   insn=0x000000000020D510 string=0x000000000020D514 "*"
 *   insn=0x000000000020D514 string=0x000000000020D518 "\n"
 *   insn=0x000000000020D51C string=0x000000000020D520 "J"
 *   insn=0x000000000020D520 string=0x000000000020D648 "?"
 *   insn=0x000000000020D524 string=0x000000000020D528 ")=G"
 *   insn=0x000000000020D528 string=0x000000000020D52C "!"
 *   insn=0x000000000020D52C string=0x000000000020D530 "i\t"
 *   insn=0x000000000020D530 string=0x000000000020D534 "\t"
 *   insn=0x000000000020D530 string=0x000000000020D65C "\t"
 *   insn=0x000000000020D534 string=0x000000000020D538 "*"
 *   insn=0x000000000020D538 string=0x000000000020D53C "\n"
 *   insn=0x000000000020D540 string=0x000000000020D544 "I"
 *   insn=0x000000000020D544 string=0x000000000020D668 "?"
 *   insn=0x000000000020D548 string=0x000000000020D54C ")=G"
 *   insn=0x000000000020D54C string=0x000000000020D550 "!"
 *   insn=0x000000000020D550 string=0x000000000020D554 "I\t"
 *   insn=0x000000000020D554 string=0x000000000020D558 "\t"
 *   insn=0x000000000020D554 string=0x000000000020D67C "\t"
 *   insn=0x000000000020D558 string=0x000000000020D55C "*"
 *   insn=0x000000000020D55C string=0x000000000020D560 "\n"
 *   insn=0x000000000020D564 string=0x000000000020D568 "H"
 *   insn=0x000000000020D568 string=0x000000000020D688 "?"
 *   insn=0x000000000020D56C string=0x000000000020D570 ")=G"
 *   insn=0x000000000020D570 string=0x000000000020D574 "!"
 *   insn=0x000000000020D574 string=0x000000000020D578 ")\t"
 *   insn=0x000000000020D578 string=0x000000000020D57C "\t"
 *   insn=0x000000000020D578 string=0x000000000020D69C "\t"
 *   insn=0x000000000020D57C string=0x000000000020D580 "*"
 *   insn=0x000000000020D580 string=0x000000000020D584 "\n"
 *   insn=0x000000000020D588 string=0x000000000020D58C "G"
 *   insn=0x000000000020D58C string=0x000000000020D6A8 "?"
 *   insn=0x000000000020D590 string=0x000000000020D594 ")=G"
 *   insn=0x000000000020D594 string=0x000000000020D598 "!"
 *   insn=0x000000000020D598 string=0x000000000020D59C "\t\t"
 *   insn=0x000000000020D59C string=0x000000000020D5A0 "\t"
 *   insn=0x000000000020D59C string=0x000000000020D6BC "\t"
 *   insn=0x000000000020D5A0 string=0x000000000020D5A4 "*"
 *   insn=0x000000000020D5A4 string=0x000000000020D5A8 "\n"
 *   insn=0x000000000020D5AC string=0x000000000020D5B0 "F"
 *   insn=0x000000000020D5B0 string=0x000000000020D6C8 "?"
 *   insn=0x000000000020D5B4 string=0x000000000020D5B8 ")=G"
 *   insn=0x000000000020D5B8 string=0x000000000020D5BC "!"
 *   insn=0x000000000020D5C0 string=0x000000000020D5C4 "\t"
 *   insn=0x000000000020D5C0 string=0x000000000020D6DC "\t"
 *   insn=0x000000000020D5C4 string=0x000000000020D5C8 "*"
 *   insn=0x000000000020D5C8 string=0x000000000020D5CC "\n"
 *   insn=0x000000000020D5D0 string=0x000000000020D5D4 "E"
 *   insn=0x000000000020D5D4 string=0x000000000020D6E8 "?"
 *   insn=0x000000000020D5D8 string=0x000000000020D5DC ")=G"
 *   insn=0x000000000020D5DC string=0x000000000020D5E0 "!"
 *   insn=0x000000000020D5E4 string=0x000000000020D5E8 "\t"
 *   insn=0x000000000020D5E4 string=0x000000000020D6FC "\t"
 *   insn=0x000000000020D5E8 string=0x000000000020D5EC "*"
 *   insn=0x000000000020D5EC string=0x000000000020D5F0 "\n"
 *   insn=0x000000000020D5F4 string=0x000000000020D5F8 "D"
 *   insn=0x000000000020D5F8 string=0x000000000020D708 "?"
 *   insn=0x000000000020D5FC string=0x000000000020D600 "*"
 *   insn=0x000000000020D600 string=0x000000000020D604 "\n"
 *   insn=0x000000000020D608 string=0x000000000020D60C "L"
 *   insn=0x000000000020D610 string=0x000000000020D614 "ds"
 *   insn=0x000000000020D61C string=0x000000000020D620 "*"
 *   insn=0x000000000020D620 string=0x000000000020D624 "\n"
 *   insn=0x000000000020D630 string=0x000000000020D634 "\s"
 *   insn=0x000000000020D634 string=0x000000000020D638 "{"
 *   insn=0x000000000020D63C string=0x000000000020D640 "*"
 *   insn=0x000000000020D640 string=0x000000000020D644 "\n"
 *   insn=0x000000000020D648 string=0x000000000020D64C "L"
 *   insn=0x000000000020D650 string=0x000000000020D654 "Ts"
 *   insn=0x000000000020D654 string=0x000000000020D658 "w"
 *   insn=0x000000000020D65C string=0x000000000020D660 "*"
 *   insn=0x000000000020D660 string=0x000000000020D664 "\n"
 *   insn=0x000000000020D670 string=0x000000000020D674 "Ls"
 *   insn=0x000000000020D674 string=0x000000000020D678 "s"
 *   insn=0x000000000020D67C string=0x000000000020D680 "*"
 *   insn=0x000000000020D680 string=0x000000000020D684 "\n"
 *   insn=0x000000000020D688 string=0x000000000020D68C "L"
 *   insn=0x000000000020D690 string=0x000000000020D694 "Ds"
 *   insn=0x000000000020D694 string=0x000000000020D698 "o"
 *   insn=0x000000000020D69C string=0x000000000020D6A0 "*"
 *   insn=0x000000000020D6A0 string=0x000000000020D6A4 "\n"
 *   insn=0x000000000020D6B0 string=0x000000000020D6B4 "<s"
 *   insn=0x000000000020D6B4 string=0x000000000020D6B8 "k"
 *   insn=0x000000000020D6BC string=0x000000000020D6C0 "*"
 *   insn=0x000000000020D6C0 string=0x000000000020D6C4 "\n"
 *   insn=0x000000000020D6C8 string=0x000000000020D6CC "L"
 *   insn=0x000000000020D6D0 string=0x000000000020D6D4 "4s"
 *   insn=0x000000000020D6D4 string=0x000000000020D6D8 "g"
 *   insn=0x000000000020D6DC string=0x000000000020D6E0 "*"
 *   insn=0x000000000020D6E0 string=0x000000000020D6E4 "\n"
 *   insn=0x000000000020D6F0 string=0x000000000020D6F4 ",s"
 *   insn=0x000000000020D6F4 string=0x000000000020D6F8 "c"
 *   insn=0x000000000020D6FC string=0x000000000020D700 "*"
 *   insn=0x000000000020D700 string=0x000000000020D704 "\n"
 *   insn=0x000000000020D708 string=0x000000000020D70C "L"
 *   insn=0x000000000020D710 string=0x000000000020D714 "$s"
 *   insn=0x000000000020D714 string=0x000000000020D718 "_"
 *   insn=0x000000000020D71C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void sub_20D3D4()
{
  void *v0; // x0
  void *v1; // x0
  void *v2; // x0
  void *v3; // x0
  void *v4; // x0
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  unsigned int *v11; // x8
  int v12; // w9
  unsigned int *v13; // x8
  int v14; // w9
  unsigned int *v15; // x8
  int v16; // w9
  unsigned int *v17; // x8
  int v18; // w9
  unsigned int *v19; // x8
  int v20; // w9
  unsigned int *v21; // x8
  int v22; // w9
  unsigned int *v23; // x8
  int v24; // w9
  unsigned int *v25; // x8
  int v26; // w9

  _ReadStatusReg(TPIDR_EL0);
  v0 = (void *)(qword_6EA020 - 24);
  if ( (__int64 *)(qword_6EA020 - 24) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(qword_6EA020 - 8);
    if ( &pthread_create )
    {
      do
        v10 = __ldaxr(v9);
      while ( __stlxr(v10 - 1, v9) );
    }
    else
    {
      v10 = (*v9)--;
    }
    if ( v10 <= 0 )
      operator delete(v0);
  }
  v1 = (void *)(qword_6EA018 - 24);
  if ( (__int64 *)(qword_6EA018 - 24) != &qword_6FD2E0 )
  {
    v11 = (unsigned int *)(qword_6EA018 - 8);
    if ( &pthread_create )
    {
      do
        v12 = __ldaxr(v11);
      while ( __stlxr(v12 - 1, v11) );
    }
    else
    {
      v12 = (*v11)--;
    }
    if ( v12 <= 0 )
      operator delete(v1);
  }
  v2 = (void *)(qword_6EA010 - 24);
  if ( (__int64 *)(qword_6EA010 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(qword_6EA010 - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v2);
  }
  v3 = (void *)(qword_6EA008 - 24);
  if ( (__int64 *)(qword_6EA008 - 24) != &qword_6FD2E0 )
  {
    v15 = (unsigned int *)(qword_6EA008 - 8);
    if ( &pthread_create )
    {
      do
        v16 = __ldaxr(v15);
      while ( __stlxr(v16 - 1, v15) );
    }
    else
    {
      v16 = (*v15)--;
    }
    if ( v16 <= 0 )
      operator delete(v3);
  }
  v4 = (void *)(qword_6EA000 - 24);
  if ( (__int64 *)(qword_6EA000 - 24) != &qword_6FD2E0 )
  {
    v17 = (unsigned int *)(qword_6EA000 - 8);
    if ( &pthread_create )
    {
      do
        v18 = __ldaxr(v17);
      while ( __stlxr(v18 - 1, v17) );
    }
    else
    {
      v18 = (*v17)--;
    }
    if ( v18 <= 0 )
      operator delete(v4);
  }
  v5 = (void *)(qword_6E9FF8 - 24);
  if ( (__int64 *)(qword_6E9FF8 - 24) != &qword_6FD2E0 )
  {
    v19 = (unsigned int *)(qword_6E9FF8 - 8);
    if ( &pthread_create )
    {
      do
        v20 = __ldaxr(v19);
      while ( __stlxr(v20 - 1, v19) );
    }
    else
    {
      v20 = (*v19)--;
    }
    if ( v20 <= 0 )
      operator delete(v5);
  }
  v6 = (void *)(qword_6E9FF0 - 24);
  if ( (__int64 *)(qword_6E9FF0 - 24) != &qword_6FD2E0 )
  {
    v21 = (unsigned int *)(qword_6E9FF0 - 8);
    if ( &pthread_create )
    {
      do
        v22 = __ldaxr(v21);
      while ( __stlxr(v22 - 1, v21) );
    }
    else
    {
      v22 = (*v21)--;
    }
    if ( v22 <= 0 )
      operator delete(v6);
  }
  v7 = (void *)(qword_6E9FE8 - 24);
  if ( (__int64 *)(qword_6E9FE8 - 24) != &qword_6FD2E0 )
  {
    v23 = (unsigned int *)(qword_6E9FE8 - 8);
    if ( &pthread_create )
    {
      do
        v24 = __ldaxr(v23);
      while ( __stlxr(v24 - 1, v23) );
    }
    else
    {
      v24 = (*v23)--;
    }
    if ( v24 <= 0 )
      operator delete(v7);
  }
  v8 = (void *)(Caver::pixelFormatStrings - 24);
  if ( (__int64 *)(Caver::pixelFormatStrings - 24) != &qword_6FD2E0 )
  {
    v25 = (unsigned int *)(Caver::pixelFormatStrings - 8);
    if ( &pthread_create )
    {
      do
        v26 = __ldaxr(v25);
      while ( __stlxr(v26 - 1, v25) );
    }
    else
    {
      v26 = (*v25)--;
    }
    if ( v26 <= 0 )
      operator delete(v8);
  }
}

