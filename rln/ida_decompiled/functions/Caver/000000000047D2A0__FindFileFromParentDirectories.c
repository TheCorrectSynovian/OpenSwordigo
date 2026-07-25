/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047D2A0
 * Mangled: _ZN5Caver29FindFileFromParentDirectoriesERKSsSs
 * Demangled: Caver::FindFileFromParentDirectories(std::string const&,std::string)
 *
 * Callers: 1
 *   0x00000000001F8130  Caver::FindFileFromParentDirectories(std::string const&,std::string)
 *
 * Callees: 10
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBDF0  Caver::StringByAppendingPathComponent(std::string const&,std::string const&)
 *   0x00000000001FDDD0  Caver::FileExistsAtPath(std::string const&)
 *   0x0000000000202210  Caver::StringByRemovingLastPathComponent(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x000000000056A528  sub_56A528
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 79
 *   insn=0x000000000047D2B4 string=0x000000000047D2B8 "U"
 *   insn=0x000000000047D2D4 string=0x000000000047D2D8 ""
 *   insn=0x000000000047D2DC string=0x000000000047D2E0 "W"
 *   insn=0x000000000047D2E0 string=0x000000000047D2E4 "6"
 *   insn=0x000000000047D2FC string=0x00000000001FBDF0 "0'"
 *   insn=0x000000000047D304 string=0x00000000001FDDD0 "0'"
 *   insn=0x000000000047D32C string=0x000000000047D330 "!"
 *   insn=0x000000000047D330 string=0x000000000047D334 "h"
 *   insn=0x000000000047D330 string=0x000000000047D354 "!"
 *   insn=0x000000000047D340 string=0x000000000047D370 "!"
 *   insn=0x000000000047D344 string=0x000000000047D348 ""
 *   insn=0x000000000047D348 string=0x000000000047D34C "("
 *   insn=0x000000000047D358 string=0x000000000047D35C "\t"
 *   insn=0x000000000047D358 string=0x000000000047D38C "\t"
 *   insn=0x000000000047D35C string=0x000000000047D360 "*"
 *   insn=0x000000000047D360 string=0x000000000047D364 "\n"
 *   insn=0x000000000047D368 string=0x000000000047D36C ""
 *   insn=0x000000000047D36C string=0x000000000047D398 "?"
 *   insn=0x000000000047D374 string=0x000000000047D378 "\t"
 *   insn=0x000000000047D374 string=0x000000000047D3AC "\t"
 *   insn=0x000000000047D378 string=0x000000000047D37C "*"
 *   insn=0x000000000047D37C string=0x000000000047D380 "\n"
 *   insn=0x000000000047D388 string=0x000000000047D3B8 "?"
 *   insn=0x000000000047D38C string=0x000000000047D390 "*"
 *   insn=0x000000000047D390 string=0x000000000047D394 "\n"
 *   insn=0x000000000047D3AC string=0x000000000047D3B0 "*"
 *   insn=0x000000000047D3B0 string=0x000000000047D3B4 "\n"
 *   insn=0x000000000047D3B8 string=0x000000000047D3BC "L"
 *   insn=0x000000000047D3E0 string=0x000000000047D3E4 "I"
 *   insn=0x000000000047D3E4 string=0x000000000047D3E8 ")"
 *   insn=0x000000000047D3F0 string=0x000000000047D3F4 "a"
 *   insn=0x000000000047D3F4 string=0x000000000047D420 ")"
 *   insn=0x000000000047D420 string=0x000000000047D424 ")=G"
 *   insn=0x000000000047D424 string=0x000000000047D428 "!"
 *   insn=0x000000000047D42C string=0x000000000047D430 "\t"
 *   insn=0x000000000047D42C string=0x000000000047D444 "\t"
 *   insn=0x000000000047D430 string=0x000000000047D434 "*"
 *   insn=0x000000000047D434 string=0x000000000047D438 "\n"
 *   insn=0x000000000047D440 string=0x000000000047D450 "?"
 *   insn=0x000000000047D444 string=0x000000000047D448 "*"
 *   insn=0x000000000047D448 string=0x000000000047D44C "\n"
 *   insn=0x000000000047D450 string=0x000000000047D454 ","
 *   insn=0x000000000047D464 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000047D470 string=0x000000000047D474 "(a"
 *   insn=0x000000000047D478 string=0x000000000047D47C "`"
 *   insn=0x000000000047D47C string=0x000000000047D480 ")!"
 *   insn=0x000000000047D47C string=0x000000000047D4C8 "h"
 *   insn=0x000000000047D484 string=0x000000000047D488 "*"
 *   insn=0x000000000047D484 string=0x000000000047D49C "*"
 *   insn=0x000000000047D488 string=0x000000000047D48C "K"
 *   insn=0x000000000047D48C string=0x000000000047D490 "+"
 *   insn=0x000000000047D498 string=0x000000000047D4A8 "_"
 *   insn=0x000000000047D49C string=0x000000000047D4A0 "K"
 *   insn=0x000000000047D4A0 string=0x000000000047D4A4 "+"
 *   insn=0x000000000047D4D0 string=0x000000000047D4D4 " "
 *   insn=0x000000000047D4D4 string=0x000000000047D4D8 "!"
 *   insn=0x000000000047D4DC string=0x000000000047D4E0 "\t"
 *   insn=0x000000000047D4DC string=0x000000000047D4F4 "\t"
 *   insn=0x000000000047D4E0 string=0x000000000047D4E4 "*"
 *   insn=0x000000000047D4E4 string=0x000000000047D4E8 "\n"
 *   insn=0x000000000047D4F0 string=0x000000000047D500 "?"
 *   insn=0x000000000047D4F4 string=0x000000000047D4F8 "*"
 *   insn=0x000000000047D4F8 string=0x000000000047D4FC "\n"
 *   insn=0x000000000047D518 string=0x000000000047D51C "I"
 *   insn=0x000000000047D51C string=0x000000000047D520 ")"
 *   insn=0x000000000047D52C string=0x000000000047D530 ")"
 *   insn=0x000000000047D530 string=0x000000000047D534 ")=G"
 *   insn=0x000000000047D534 string=0x000000000047D538 "!"
 *   insn=0x000000000047D538 string=0x000000000047D53C "i"
 *   insn=0x000000000047D53C string=0x000000000047D540 "\t"
 *   insn=0x000000000047D53C string=0x000000000047D568 "\t"
 *   insn=0x000000000047D540 string=0x000000000047D544 "*"
 *   insn=0x000000000047D544 string=0x000000000047D548 "\n"
 *   insn=0x000000000047D54C string=0x000000000047D550 "?"
 *   insn=0x000000000047D550 string=0x000000000047D554 "l"
 *   insn=0x000000000047D568 string=0x000000000047D56C "*"
 *   insn=0x000000000047D56C string=0x000000000047D570 "\n"
 *   insn=0x000000000047D570 string=0x000000000047D574 "?"
 *   insn=0x000000000047D574 string=0x000000000047D578 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::FindFileFromParentDirectories(__int64 a1@<X1>, _QWORD *a2@<X8>)
{
  __int64 *v3; // x0
  unsigned int *v4; // x8
  int v5; // w9
  unsigned int *v6; // x8
  int v7; // w9
  void *v8; // x0
  unsigned int *v9; // x8
  int v10; // w9
  __int64 v11; // [xsp+0h] [xbp-50h]
  _QWORD v12[3]; // [xsp+8h] [xbp-48h] BYREF

  v12[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_56A528(v12, a1);
  if ( *(_QWORD *)(v12[0] - 24LL) )
  {
    while ( 1 )
    {
      Caver::StringByAppendingPathComponent();
      if ( (Caver::FileExistsAtPath() & 1) != 0 )
        break;
      Caver::StringByRemovingLastPathComponent();
      sub_56A6A8(v12);
      if ( (__int64 *)(v11 - 24) != &qword_6FD2E0 )
      {
        v4 = (unsigned int *)(v11 - 8);
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
          operator delete((void *)(v11 - 24));
      }
      v3 = (__int64 *)(*a2 - 24LL);
      if ( v3 != &qword_6FD2E0 )
      {
        v6 = (unsigned int *)(*a2 - 8LL);
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
          operator delete(v3);
      }
      if ( !*(_QWORD *)(v12[0] - 24LL) )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    sub_566BB8((int)a2, "");
  }
  v8 = (void *)(v12[0] - 24LL);
  if ( (__int64 *)(v12[0] - 24LL) != &qword_6FD2E0 )
  {
    v9 = (unsigned int *)(v12[0] - 8LL);
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
      operator delete(v8);
  }
}

