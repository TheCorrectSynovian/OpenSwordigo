/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A00DC
 * Mangled: _ZN5Caver32StaticMonsterControllerComponentC2Ev
 * Demangled: Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *
 * Callers: 2
 *   0x00000000001FCDB0  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *   0x00000000001FF1B0  Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(void)
 *
 * Callees: 13
 *   0x00000000001F4020  Caver::MonsterControllerComponent::InitWithComponent(Caver::MonsterControllerComponent const*)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6CE0  Caver::Component::BindOutlet(int,std::string const&,Caver::ComponentOutletBase *,bool)
 *   0x00000000001FA3B0  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *   0x0000000000200F70  boost::detail::lcast_put_unsigned<std::char_traits<char>,uint,char>(uint,char *)
 *   0x0000000000202D00  Caver::MonsterControllerComponent::~MonsterControllerComponent()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000258C58  Caver::CharControllerComponent::CharControllerComponent(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x0000000000569E1C  sub_569E1C
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 172
 *   insn=0x00000000002A00F0 string=0x00000000002A00F4 "W"
 *   insn=0x00000000002A0104 string=0x00000000002A0108 "(""
 *   insn=0x00000000002A0104 string=0x00000000001FA3B0 "0'"
 *   insn=0x00000000002A0108 string=0x00000000002A010C ""
 *   insn=0x00000000002A010C string=0x00000000002A0110 "5""
 *   insn=0x00000000002A0114 string=0x00000000002A0118 "6""
 *   insn=0x00000000002A0118 string=0x00000000002A011C "\tA"
 *   insn=0x00000000002A011C string=0x00000000002A0120 "i"
 *   insn=0x00000000002A0124 string=0x00000000002A0128 "\n"
 *   insn=0x00000000002A0128 string=0x00000000002A012C "@"
 *   insn=0x00000000002A012C string=0x00000000002A0130 ""
 *   insn=0x00000000002A013C string=0x00000000002A0140 "`"
 *   insn=0x00000000002A0168 string=0x00000000002A016C "A"
 *   insn=0x00000000002A016C string=0x0000000000588ED0 "animation"
 *   insn=0x00000000002A0194 string=0x00000000001F6CE0 "0'"
 *   insn=0x00000000002A0198 string=0x00000000002A019C "8""
 *   insn=0x00000000002A01A8 string=0x00000000002A01AC "a\t"
 *   insn=0x00000000002A01AC string=0x00000000002A02D8 ")""
 *   insn=0x00000000002A01B0 string=0x00000000002A01B4 "\tc"
 *   insn=0x00000000002A01C4 string=0x00000000002A01C8 "j"
 *   insn=0x00000000002A01E8 string=0x0000000000594D27 "sound"
 *   insn=0x00000000002A01F8 string=0x00000000002A01FC "c"
 *   insn=0x00000000002A0220 string=0x00000000002A02FC ")""
 *   insn=0x00000000002A0230 string=0x00000000002A0234 "c"
 *   insn=0x00000000002A0230 string=0x00000000002A0320 ")""
 *   insn=0x00000000002A0240 string=0x00000000002A0244 "K"
 *   insn=0x00000000002A0270 string=0x00000000002A0274 "o"
 *   insn=0x00000000002A0274 string=0x00000000002A0278 "c"
 *   insn=0x00000000002A0298 string=0x00000000002A029C "A"
 *   insn=0x00000000002A029C string=0x00000000002A0344 ")""
 *   insn=0x00000000002A02AC string=0x00000000002A0368 ")""
 *   insn=0x00000000002A02D8 string=0x00000000002A02DC ")=G"
 *   insn=0x00000000002A02DC string=0x00000000002A02E0 "!"
 *   insn=0x00000000002A02E0 string=0x00000000002A02E4 "I"
 *   insn=0x00000000002A02E4 string=0x00000000002A02E8 "\t"
 *   insn=0x00000000002A02E4 string=0x00000000002A038C "\t"
 *   insn=0x00000000002A02E8 string=0x00000000002A02EC "*"
 *   insn=0x00000000002A02EC string=0x00000000002A02F0 "\n"
 *   insn=0x00000000002A02F4 string=0x00000000002A02F8 "("
 *   insn=0x00000000002A02F8 string=0x00000000002A0398 "?"
 *   insn=0x00000000002A02FC string=0x00000000002A0300 ")=G"
 *   insn=0x00000000002A0300 string=0x00000000002A0304 "!"
 *   insn=0x00000000002A0304 string=0x00000000002A0308 ")"
 *   insn=0x00000000002A0308 string=0x00000000002A030C "\t"
 *   insn=0x00000000002A0308 string=0x00000000002A03AC "\t"
 *   insn=0x00000000002A030C string=0x00000000002A0310 "*"
 *   insn=0x00000000002A0310 string=0x00000000002A0314 "\n"
 *   insn=0x00000000002A0318 string=0x00000000002A031C "'"
 *   insn=0x00000000002A031C string=0x00000000002A03B8 "?"
 *   insn=0x00000000002A0320 string=0x00000000002A0324 ")=G"
 *   insn=0x00000000002A0324 string=0x00000000002A0328 "!"
 *   insn=0x00000000002A0328 string=0x00000000002A032C "\t"
 *   insn=0x00000000002A032C string=0x00000000002A0330 "\t"
 *   insn=0x00000000002A032C string=0x00000000002A03CC "\t"
 *   insn=0x00000000002A0330 string=0x00000000002A0334 "*"
 *   insn=0x00000000002A0334 string=0x00000000002A0338 "\n"
 *   insn=0x00000000002A033C string=0x00000000002A0340 "&"
 *   insn=0x00000000002A0340 string=0x00000000002A03D8 "?"
 *   insn=0x00000000002A0344 string=0x00000000002A0348 ")=G"
 *   insn=0x00000000002A0348 string=0x00000000002A034C "!"
 *   insn=0x00000000002A0350 string=0x00000000002A0354 "\t"
 *   insn=0x00000000002A0350 string=0x00000000002A03EC "\t"
 *   insn=0x00000000002A0354 string=0x00000000002A0358 "*"
 *   insn=0x00000000002A0358 string=0x00000000002A035C "\n"
 *   insn=0x00000000002A0360 string=0x00000000002A0364 "%"
 *   insn=0x00000000002A0364 string=0x00000000002A03F8 "?"
 *   insn=0x00000000002A0368 string=0x00000000002A036C ")=G"
 *   insn=0x00000000002A036C string=0x00000000002A0370 "!"
 *   insn=0x00000000002A0374 string=0x00000000002A0378 "\t"
 *   insn=0x00000000002A0374 string=0x00000000002A040C "\t"
 *   insn=0x00000000002A0378 string=0x00000000002A037C "*"
 *   insn=0x00000000002A037C string=0x00000000002A0380 "\n"
 *   insn=0x00000000002A0384 string=0x00000000002A0388 "$"
 *   insn=0x00000000002A0388 string=0x00000000002A0418 "?"
 *   insn=0x00000000002A038C string=0x00000000002A0390 "*"
 *   insn=0x00000000002A0390 string=0x00000000002A0394 "\n"
 *   insn=0x00000000002A03AC string=0x00000000002A03B0 "*"
 *   insn=0x00000000002A03B0 string=0x00000000002A03B4 "\n"
 *   insn=0x00000000002A03B8 string=0x00000000002A03BC "L"
 *   insn=0x00000000002A03CC string=0x00000000002A03D0 "*"
 *   insn=0x00000000002A03D0 string=0x00000000002A03D4 "\n"
 *   insn=0x00000000002A03EC string=0x00000000002A03F0 "*"
 *   insn=0x00000000002A03F0 string=0x00000000002A03F4 "\n"
 *   insn=0x00000000002A03F8 string=0x00000000002A03FC ","
 *   insn=0x00000000002A040C string=0x00000000002A0410 "*"
 *   insn=0x00000000002A0410 string=0x00000000002A0414 "\n"
 *   insn=0x00000000002A042C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002A0430 string=0x00000000002A0434 "*""
 *   insn=0x00000000002A0434 string=0x00000000002A0438 "J"
 *   insn=0x00000000002A043C string=0x00000000002A0440 "(a"
 *   insn=0x00000000002A0448 string=0x00000000002A044C "*""
 *   insn=0x00000000002A0448 string=0x00000000002A059C "`"
 *   insn=0x00000000002A044C string=0x00000000002A0450 "J=G"
 *   insn=0x00000000002A0450 string=0x00000000002A0454 ")!"
 *   insn=0x00000000002A0454 string=0x00000000002A0458 "*"
 *   insn=0x00000000002A0458 string=0x00000000002A045C "*"
 *   insn=0x00000000002A0458 string=0x00000000002A047C "*"
 *   insn=0x00000000002A045C string=0x00000000002A0460 "K"
 *   insn=0x00000000002A0460 string=0x00000000002A0464 "+"
 *   insn=0x00000000002A0468 string=0x00000000002A046C "_"
 *   insn=0x00000000002A046C string=0x00000000002A0470 "l\t"
 *   insn=0x00000000002A0474 string=0x00000000002A0478 "G"
 *   insn=0x00000000002A047C string=0x00000000002A0480 "K"
 *   insn=0x00000000002A0480 string=0x00000000002A0484 "+"
 *   insn=0x00000000002A0484 string=0x00000000002A0488 "_"
 *   insn=0x00000000002A0488 string=0x00000000002A048C "M"
 *   insn=0x00000000002A048C string=0x00000000002A0490 "C"
 *   insn=0x00000000002A0494 string=0x00000000002A0498 "A"
 *   insn=0x00000000002A04A0 string=0x00000000002A04A4 "(a"
 *   insn=0x00000000002A04AC string=0x00000000002A04B0 "*""
 *   insn=0x00000000002A04B0 string=0x00000000002A04B4 "J=G"
 *   insn=0x00000000002A04B4 string=0x00000000002A04B8 ")!"
 *   insn=0x00000000002A04BC string=0x00000000002A04C0 "*"
 *   insn=0x00000000002A04BC string=0x00000000002A04D4 "*"
 *   insn=0x00000000002A04C0 string=0x00000000002A04C4 "K"
 *   insn=0x00000000002A04C4 string=0x00000000002A04C8 "+"
 *   insn=0x00000000002A04D0 string=0x00000000002A04E0 "_"
 *   insn=0x00000000002A04D4 string=0x00000000002A04D8 "K"
 *   insn=0x00000000002A04D8 string=0x00000000002A04DC "+"
 *   insn=0x00000000002A0508 string=0x00000000002A050C ")""
 *   insn=0x00000000002A050C string=0x00000000002A0510 ")=G"
 *   insn=0x00000000002A0510 string=0x00000000002A0514 "!"
 *   insn=0x00000000002A0514 string=0x00000000002A0518 ")"
 *   insn=0x00000000002A0518 string=0x00000000002A051C "\t"
 *   insn=0x00000000002A0518 string=0x00000000002A053C "\t"
 *   insn=0x00000000002A051C string=0x00000000002A0520 "*"
 *   insn=0x00000000002A0520 string=0x00000000002A0524 "\n"
 *   insn=0x00000000002A0528 string=0x00000000002A052C "?"
 *   insn=0x00000000002A052C string=0x00000000002A0530 "l"
 *   insn=0x00000000002A053C string=0x00000000002A0540 "*"
 *   insn=0x00000000002A0540 string=0x00000000002A0544 "\n"
 *   insn=0x00000000002A0544 string=0x00000000002A0548 "?"
 *   insn=0x00000000002A0548 string=0x00000000002A054C "M"
 *   insn=0x00000000002A0558 string=0x00000000002A055C "(a"
 *   insn=0x00000000002A0564 string=0x00000000002A0568 "*""
 *   insn=0x00000000002A0568 string=0x00000000002A056C "J=G"
 *   insn=0x00000000002A056C string=0x00000000002A0570 ")!"
 *   insn=0x00000000002A0574 string=0x00000000002A0578 "*"
 *   insn=0x00000000002A0574 string=0x00000000002A062C "*"
 *   insn=0x00000000002A0578 string=0x00000000002A057C "K"
 *   insn=0x00000000002A057C string=0x00000000002A0580 "+"
 *   insn=0x00000000002A0584 string=0x00000000002A0588 "_"
 *   insn=0x00000000002A05A0 string=0x00000000002A05A4 "v"
 *   insn=0x00000000002A05A8 string=0x00000000002A05AC "@"
 *   insn=0x00000000002A05A8 string=0x00000000002A05C8 "`~@"
 *   insn=0x00000000002A05AC string=0x00000000002A05B0 ""
 *   insn=0x00000000002A05B0 string=0x00000000002A05B4 ""
 *   insn=0x00000000002A05B8 string=0x00000000002A05BC ""
 *   insn=0x00000000002A05BC string=0x00000000002A05C0 ""
 *   insn=0x00000000002A05C8 string=0x00000000002A05CC "vv"
 *   insn=0x00000000002A05D0 string=0x00000000002A05D4 "@"
 *   insn=0x00000000002A05D0 string=0x00000000002A05F0 "`r@"
 *   insn=0x00000000002A05D4 string=0x00000000002A05D8 ""
 *   insn=0x00000000002A05D8 string=0x00000000002A05DC ""
 *   insn=0x00000000002A05E0 string=0x00000000002A05E4 ""
 *   insn=0x00000000002A05E4 string=0x00000000002A05E8 ""
 *   insn=0x00000000002A05F4 string=0x00000000002A05F8 "hj"
 *   insn=0x00000000002A05FC string=0x00000000002A0600 "@"
 *   insn=0x00000000002A0600 string=0x00000000002A0604 ""
 *   insn=0x00000000002A0604 string=0x00000000002A0608 ""
 *   insn=0x00000000002A060C string=0x00000000002A0610 ""
 *   insn=0x00000000002A0610 string=0x00000000002A0614 ""
 *   insn=0x00000000002A062C string=0x00000000002A0630 "K"
 *   insn=0x00000000002A0630 string=0x00000000002A0634 "+"
 *   insn=0x00000000002A0634 string=0x00000000002A0638 "_"
 *   insn=0x00000000002A0644 string=0x00000000002A0648 "A"
 *   insn=0x00000000002A065C string=0x00000000002A0660 "pN"
 *   insn=0x00000000002A0660 string=0x00000000002A0664 "h"
 *   insn=0x00000000002A0660 string=0x00000000001F4020 "P'"
 *   insn=0x00000000002A0668 string=0x00000000002A066C "h"
 *   insn=0x00000000002A0670 string=0x00000000002A0674 "h"
 *   insn=0x00000000002A0678 string=0x00000000002A067C "h\nA"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StaticMonsterControllerComponent::StaticMonsterControllerComponent(
        Caver::StaticMonsterControllerComponent *this)
{
  __int128 v2; // q0
  void *v3; // x0
  __int64 v4; // x0
  void *v5; // x0
  char *v6; // x0
  __int64 v7; // x0
  void *v8; // x0
  char *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9
  unsigned int *v12; // x8
  int v13; // w9
  unsigned int *v14; // x8
  int v15; // w9
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9
  char *v20; // [xsp+28h] [xbp-68h] BYREF
  __int64 v21; // [xsp+30h] [xbp-60h] BYREF
  __int64 v22; // [xsp+40h] [xbp-50h] BYREF
  _BYTE v23[12]; // [xsp+54h] [xbp-3Ch] BYREF

  *(_QWORD *)&v23[4] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::MonsterControllerComponent::MonsterControllerComponent(this);
  *(_QWORD *)this = off_6C2990;
  *(_QWORD *)&v2 = &off_6C2AA8;
  *((_QWORD *)&v2 + 1) = &off_6C2AE8;
  *((_OWORD *)this + 1) = v2;
  *((_QWORD *)this + 26) = &off_6BDF68;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = off_6BE248;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = off_6BE248;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = 0x7F7FFFFF00000000LL;
  sub_566BB8((int)&v22, "animation");
  Caver::Component::BindOutlet();
  v3 = (void *)(v22 - 24);
  if ( (__int64 *)(v22 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v22 - 8);
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
  v20 = &byte_6FD2F8;
  v4 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
  sub_569E1C(&v20, 0, qword_6FD2E0, v4, &v23[-v4]);
  ((void (__fastcall *)(__int64 *__return_ptr, char *, char **))loc_25A030)(&v21, "sound", &v20);
  Caver::Component::BindOutlet();
  v5 = (void *)(v21 - 24);
  if ( (__int64 *)(v21 - 24) != &qword_6FD2E0 )
  {
    v12 = (unsigned int *)(v21 - 8);
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
      operator delete(v5);
  }
  v6 = v20 - 24;
  if ( v20 - 24 != (char *)&qword_6FD2E0 )
  {
    v14 = (unsigned int *)(v20 - 8);
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
      operator delete(v6);
  }
  v20 = &byte_6FD2F8;
  v7 = boost::detail::lcast_put_unsigned<std::char_traits<char>,unsigned int,char>();
  sub_569E1C(&v20, 0, qword_6FD2E0, v7, &v23[-v7]);
  ((void (__fastcall *)(__int64 *__return_ptr, char *, char **))loc_25A030)(&v21, "sound", &v20);
  Caver::Component::BindOutlet();
  v8 = (void *)(v21 - 24);
  if ( (__int64 *)(v21 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v21 - 8);
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
      operator delete(v8);
  }
  v9 = v20 - 24;
  if ( v20 - 24 != (char *)&qword_6FD2E0 )
  {
    v18 = (unsigned int *)(v20 - 8);
    if ( &pthread_create )
    {
      do
        v19 = __ldaxr(v18);
      while ( __stlxr(v19 - 1, v18) );
    }
    else
    {
      v19 = (*v18)--;
    }
    if ( v19 <= 0 )
      operator delete(v9);
  }
}

