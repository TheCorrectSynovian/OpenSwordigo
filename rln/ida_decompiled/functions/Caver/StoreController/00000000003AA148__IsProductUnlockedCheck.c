/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AA148
 * Mangled: _ZN5Caver15StoreController22IsProductUnlockedCheckERKSs
 * Demangled: Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *
 * Callers: 2
 *   0x00000000001FE900  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *   0x00000000003A9DE0  Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *
 * Callees: 13
 *   0x00000000001F5190  .memcmp
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *   0x00000000001FED70  Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *   0x0000000000200AB0  Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *   0x0000000000202DF0  Caver::GameOptions::SaveToFile(void)
 *   0x0000000000203C30  Caver::StoreController::IsGuideUnlockedCheck(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003AA898  Caver::StoreController::ResetProductUnlocksToPurchases(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 163
 *   insn=0x00000000003AA15C string=0x00000000003AA160 "V"
 *   insn=0x00000000003AA16C string=0x00000000003AA170 "!"
 *   insn=0x00000000003AA170 string=0x000000000058E508 "compass"
 *   insn=0x00000000003AA184 string=0x00000000003AA188 "`"
 *   insn=0x00000000003AA194 string=0x00000000003AA198 "_"
 *   insn=0x00000000003AA1A4 string=0x00000000001F5190 "P'"
 *   insn=0x00000000003AA1C8 string=0x00000000003AA21C "!"
 *   insn=0x00000000003AA1CC string=0x00000000003AA1D0 "j"
 *   insn=0x00000000003AA1D4 string=0x00000000003AA1D8 ")=G"
 *   insn=0x00000000003AA1E0 string=0x00000000003AA1E4 "\t"
 *   insn=0x00000000003AA1E0 string=0x00000000003AA1F8 "\t"
 *   insn=0x00000000003AA1E4 string=0x00000000003AA1E8 "*"
 *   insn=0x00000000003AA1E8 string=0x00000000003AA1EC "\n"
 *   insn=0x00000000003AA1F4 string=0x00000000003AA204 "?"
 *   insn=0x00000000003AA1F8 string=0x00000000003AA1FC "*"
 *   insn=0x00000000003AA1FC string=0x00000000003AA200 "\n"
 *   insn=0x00000000003AA210 string=0x00000000003AA214 "d"
 *   insn=0x00000000003AA21C string=0x0000000000591AEE "coindoubler"
 *   insn=0x00000000003AA228 string=0x00000000003AA22C "c"
 *   insn=0x00000000003AA230 string=0x00000000003AA234 "`"
 *   insn=0x00000000003AA240 string=0x00000000003AA244 "_"
 *   insn=0x00000000003AA260 string=0x00000000003AA264 ""
 *   insn=0x00000000003AA274 string=0x00000000003AA2C8 "!"
 *   insn=0x00000000003AA278 string=0x00000000003AA27C "?"
 *   insn=0x00000000003AA280 string=0x00000000003AA284 ")=G"
 *   insn=0x00000000003AA28C string=0x00000000003AA290 "\t"
 *   insn=0x00000000003AA28C string=0x00000000003AA2A4 "\t"
 *   insn=0x00000000003AA290 string=0x00000000003AA294 "*"
 *   insn=0x00000000003AA294 string=0x00000000003AA298 "\n"
 *   insn=0x00000000003AA2A0 string=0x00000000003AA2B0 "?"
 *   insn=0x00000000003AA2A4 string=0x00000000003AA2A8 "*"
 *   insn=0x00000000003AA2A8 string=0x00000000003AA2AC "\n"
 *   insn=0x00000000003AA2BC string=0x00000000003AA2C0 "9"
 *   insn=0x00000000003AA2C8 string=0x0000000000591AFA "noads"
 *   insn=0x00000000003AA2D4 string=0x00000000003AA2D8 "8"
 *   insn=0x00000000003AA2DC string=0x00000000003AA2E0 "`"
 *   insn=0x00000000003AA2E8 string=0x00000000003AA2EC "h"
 *   insn=0x00000000003AA2EC string=0x00000000003AA2F0 "_"
 *   insn=0x00000000003AA30C string=0x00000000003AA310 ""
 *   insn=0x00000000003AA32C string=0x00000000003AA330 ")=G"
 *   insn=0x00000000003AA338 string=0x00000000003AA33C "\t"
 *   insn=0x00000000003AA338 string=0x00000000003AA350 "\t"
 *   insn=0x00000000003AA33C string=0x00000000003AA340 "*"
 *   insn=0x00000000003AA340 string=0x00000000003AA344 "\n"
 *   insn=0x00000000003AA34C string=0x00000000003AA35C "?"
 *   insn=0x00000000003AA350 string=0x00000000003AA354 "*"
 *   insn=0x00000000003AA354 string=0x00000000003AA358 "\n"
 *   insn=0x00000000003AA3A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AA3A8 string=0x00000000003AA3AC "F]"
 *   insn=0x00000000003AA3AC string=0x00000000003AA3B0 "E]"
 *   insn=0x00000000003AA3C8 string=0x00000000003AA3CC "V"
 *   insn=0x00000000003AA3D8 string=0x00000000003AA3DC "!"
 *   insn=0x00000000003AA3F0 string=0x00000000003AA3F4 "`"
 *   insn=0x00000000003AA400 string=0x00000000003AA404 "_"
 *   insn=0x00000000003AA40C string=0x00000000003AA410 "`+"
 *   insn=0x00000000003AA434 string=0x00000000003AA4F4 "!"
 *   insn=0x00000000003AA438 string=0x00000000003AA43C "AM"
 *   insn=0x00000000003AA43C string=0x00000000001FD940 "0'"
 *   insn=0x00000000003AA444 string=0x00000000003AA448 "\tA"
 *   insn=0x00000000003AA448 string=0x00000000003AA44C "3"
 *   insn=0x00000000003AA44C string=0x00000000003AA450 "h"
 *   insn=0x00000000003AA450 string=0x00000000003AA454 ""
 *   insn=0x00000000003AA454 string=0x00000000003AA458 "h"
 *   insn=0x00000000003AA45C string=0x00000000003AA460 "h"
 *   insn=0x00000000003AA464 string=0x00000000003AA468 "\t@"
 *   insn=0x00000000003AA46C string=0x00000000003AA470 "h\n@"
 *   insn=0x00000000003AA470 string=0x00000000003AA474 ""
 *   insn=0x00000000003AA474 string=0x00000000003AA478 "h\n"
 *   insn=0x00000000003AA47C string=0x00000000003AA480 "h"
 *   insn=0x00000000003AA484 string=0x00000000003AA488 "@"
 *   insn=0x00000000003AA490 string=0x00000000003AA494 "+M"
 *   insn=0x00000000003AA498 string=0x00000000003AA49C "Ub"
 *   insn=0x00000000003AA4A4 string=0x00000000003AA6D8 "h"
 *   insn=0x00000000003AA4AC string=0x00000000003AA4B0 ")=G"
 *   insn=0x00000000003AA4B8 string=0x00000000003AA4BC "\t"
 *   insn=0x00000000003AA4B8 string=0x00000000003AA4D0 "\t"
 *   insn=0x00000000003AA4BC string=0x00000000003AA4C0 "*"
 *   insn=0x00000000003AA4C0 string=0x00000000003AA4C4 "\n"
 *   insn=0x00000000003AA4CC string=0x00000000003AA4DC "?"
 *   insn=0x00000000003AA4D0 string=0x00000000003AA4D4 "*"
 *   insn=0x00000000003AA4D4 string=0x00000000003AA4D8 "\n"
 *   insn=0x00000000003AA4EC string=0x00000000003AA4F0 "X"
 *   insn=0x00000000003AA508 string=0x00000000003AA50C "`"
 *   insn=0x00000000003AA518 string=0x00000000003AA51C "_"
 *   insn=0x00000000003AA538 string=0x00000000003AA53C """
 *   insn=0x00000000003AA54C string=0x00000000003AA60C "!"
 *   insn=0x00000000003AA55C string=0x00000000003AA560 "\tE"
 *   insn=0x00000000003AA560 string=0x00000000003AA564 "3"
 *   insn=0x00000000003AA564 string=0x00000000003AA568 "h"
 *   insn=0x00000000003AA568 string=0x00000000003AA56C ""
 *   insn=0x00000000003AA56C string=0x00000000003AA570 "h"
 *   insn=0x00000000003AA574 string=0x00000000003AA578 "h"
 *   insn=0x00000000003AA57C string=0x00000000003AA580 "\t@"
 *   insn=0x00000000003AA584 string=0x00000000003AA588 "h\n@"
 *   insn=0x00000000003AA588 string=0x00000000003AA58C ""
 *   insn=0x00000000003AA58C string=0x00000000003AA590 "h\n"
 *   insn=0x00000000003AA594 string=0x00000000003AA598 "h"
 *   insn=0x00000000003AA59C string=0x00000000003AA5A0 "@"
 *   insn=0x00000000003AA5BC string=0x00000000003AA5C0 "V"
 *   insn=0x00000000003AA5C4 string=0x00000000003AA5C8 ")=G"
 *   insn=0x00000000003AA5D0 string=0x00000000003AA5D4 "\t"
 *   insn=0x00000000003AA5D0 string=0x00000000003AA5E8 "\t"
 *   insn=0x00000000003AA5D4 string=0x00000000003AA5D8 "*"
 *   insn=0x00000000003AA5D8 string=0x00000000003AA5DC "\n"
 *   insn=0x00000000003AA5E4 string=0x00000000003AA5F4 "?"
 *   insn=0x00000000003AA5E8 string=0x00000000003AA5EC "*"
 *   insn=0x00000000003AA5EC string=0x00000000003AA5F0 "\n"
 *   insn=0x00000000003AA600 string=0x00000000003AA604 "h"
 *   insn=0x00000000003AA604 string=0x00000000003AA608 "X"
 *   insn=0x00000000003AA618 string=0x00000000003AA61C "g"
 *   insn=0x00000000003AA620 string=0x00000000003AA624 "`"
 *   insn=0x00000000003AA62C string=0x00000000003AA630 "h"
 *   insn=0x00000000003AA630 string=0x00000000003AA634 "_"
 *   insn=0x00000000003AA650 string=0x00000000003AA654 ";"
 *   insn=0x00000000003AA674 string=0x00000000003AA678 "\tI"
 *   insn=0x00000000003AA678 string=0x00000000003AA67C "3"
 *   insn=0x00000000003AA67C string=0x00000000003AA680 "h"
 *   insn=0x00000000003AA680 string=0x00000000003AA684 ""
 *   insn=0x00000000003AA684 string=0x00000000003AA688 "h"
 *   insn=0x00000000003AA68C string=0x00000000003AA690 "h"
 *   insn=0x00000000003AA694 string=0x00000000003AA698 "\t@"
 *   insn=0x00000000003AA69C string=0x00000000003AA6A0 "h\n@"
 *   insn=0x00000000003AA6A0 string=0x00000000003AA6A4 ""
 *   insn=0x00000000003AA6A4 string=0x00000000003AA6A8 "h\n"
 *   insn=0x00000000003AA6AC string=0x00000000003AA6B0 "h"
 *   insn=0x00000000003AA6B4 string=0x00000000003AA6B8 "@"
 *   insn=0x00000000003AA6D0 string=0x00000000003AA6D4 "3"
 *   insn=0x00000000003AA6D8 string=0x00000000003AA6DC ""
 *   insn=0x00000000003AA6DC string=0x00000000003AA6E0 "h"
 *   insn=0x00000000003AA6E4 string=0x00000000003AA6E8 "h"
 *   insn=0x00000000003AA6EC string=0x00000000003AA6F0 "\t@"
 *   insn=0x00000000003AA6F4 string=0x00000000003AA6F8 "h\n@"
 *   insn=0x00000000003AA6F8 string=0x00000000003AA6FC ""
 *   insn=0x00000000003AA6FC string=0x00000000003AA700 "h\n"
 *   insn=0x00000000003AA704 string=0x00000000003AA708 "h"
 *   insn=0x00000000003AA70C string=0x00000000003AA710 "@"
 *   insn=0x00000000003AA720 string=0x00000000003AA724 "A"
 *   insn=0x00000000003AA740 string=0x00000000003AA744 ")=G"
 *   insn=0x00000000003AA74C string=0x00000000003AA750 "\t"
 *   insn=0x00000000003AA74C string=0x00000000003AA764 "\t"
 *   insn=0x00000000003AA750 string=0x00000000003AA754 "*"
 *   insn=0x00000000003AA754 string=0x00000000003AA758 "\n"
 *   insn=0x00000000003AA760 string=0x00000000003AA770 "?"
 *   insn=0x00000000003AA764 string=0x00000000003AA768 "*"
 *   insn=0x00000000003AA768 string=0x00000000003AA76C "\n"
 *   insn=0x00000000003AA77C string=0x00000000003AA780 "\t"
 *   insn=0x00000000003AA780 string=0x00000000003AA784 "5"
 *   insn=0x00000000003AA79C string=0x00000000003AA7A0 ""
 *   insn=0x00000000003AA7A4 string=0x00000000003AA7A8 "A"
 *   insn=0x00000000003AA7AC string=0x00000000003AA7B0 "\t@"
 *   insn=0x00000000003AA7BC string=0x00000000003AA7C0 ""
 *   insn=0x00000000003AA7C4 string=0x00000000003AA7C8 "A"
 *   insn=0x00000000003AA7CC string=0x00000000003AA7D0 "@"
 *   insn=0x00000000003AA7D8 string=0x00000000003AA7DC "-"
 *   insn=0x00000000003AA7E8 string=0x00000000003AA7EC "4"
 *   insn=0x00000000003AA7F0 string=0x00000000003AA7F4 ""
 *   insn=0x00000000003AA800 string=0x00000000003AA804 "\t@"
 *   insn=0x00000000003AA810 string=0x00000000003AA814 ""
 *   insn=0x00000000003AA820 string=0x00000000003AA824 "@"
 *   insn=0x00000000003AA844 string=0x00000000003AA848 ""
 *   insn=0x00000000003AA854 string=0x00000000003AA858 "\t@"
 *   insn=0x00000000003AA864 string=0x00000000003AA868 ""
 *   insn=0x00000000003AA874 string=0x00000000003AA878 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreController::IsProductUnlockedCheck(__int64 a1, void **a2)
{
  char *v3; // x21
  void *v4; // x0
  size_t v5; // x2
  __int64 *v6; // x20
  _BOOL4 v7; // w24
  char v8; // w0
  unsigned int *v9; // x8
  int v10; // w9
  char *v11; // x21
  void *v12; // x0
  size_t v13; // x2
  __int64 *v14; // x20
  _BOOL4 v15; // w24
  unsigned int *v16; // x8
  int v17; // w9
  char *v18; // x20
  void *v19; // x0
  size_t v20; // x2
  __int64 *v21; // x19
  _BOOL4 v22; // w21
  unsigned int *v23; // x8
  int v24; // w9
  void *v26[3]; // [xsp+C0h] [xbp-48h] BYREF

  v26[2] = *(void **)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_566BB8((int)v26, "compass");
  v3 = (char *)v26[0];
  v4 = *a2;
  v5 = *((_QWORD *)*a2 - 3);
  v6 = (__int64 *)((char *)v26[0] - 24);
  if ( v5 == *((_QWORD *)v26[0] - 3) )
  {
    v4 = (void *)memcmp(v4, v26[0], v5);
    v7 = (_DWORD)v4 == 0;
  }
  else
  {
    v7 = 0;
  }
  if ( v6 == &qword_6FD2E0 )
    goto LABEL_5;
  v9 = (unsigned int *)(v3 - 8);
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
  if ( v10 > 0 )
  {
LABEL_5:
    if ( !v7 )
      goto LABEL_13;
  }
  else
  {
    operator delete(v6);
    if ( !v7 )
    {
LABEL_13:
      sub_566BB8((int)v26, "coindoubler");
      v11 = (char *)v26[0];
      v12 = *a2;
      v13 = *((_QWORD *)*a2 - 3);
      v14 = (__int64 *)((char *)v26[0] - 24);
      if ( v13 == *((_QWORD *)v26[0] - 3) )
      {
        v12 = (void *)memcmp(v12, v26[0], v13);
        v15 = (_DWORD)v12 == 0;
        if ( v14 == &qword_6FD2E0 )
          goto LABEL_17;
      }
      else
      {
        v15 = 0;
        if ( v14 == &qword_6FD2E0 )
          goto LABEL_17;
      }
      v16 = (unsigned int *)(v11 - 8);
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
      {
        operator delete(v14);
        if ( !v15 )
        {
LABEL_25:
          sub_566BB8((int)v26, "noads");
          v18 = (char *)v26[0];
          v19 = *a2;
          v20 = *((_QWORD *)*a2 - 3);
          v21 = (__int64 *)((char *)v26[0] - 24);
          if ( v20 == *((_QWORD *)v26[0] - 3) )
          {
            v19 = (void *)memcmp(v19, v26[0], v20);
            v22 = (_DWORD)v19 == 0;
            if ( v21 == &qword_6FD2E0 )
              goto LABEL_29;
          }
          else
          {
            v22 = 0;
            if ( v21 == &qword_6FD2E0 )
              goto LABEL_29;
          }
          v23 = (unsigned int *)(v18 - 8);
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
          {
            operator delete(v21);
            if ( !v22 )
              goto LABEL_37;
LABEL_30:
            v8 = Caver::StoreController::IsNoAdsUnlockedCheck((Caver::StoreController *)v19);
            return v8 & 1;
          }
LABEL_29:
          if ( !v22 )
          {
LABEL_37:
            v8 = 0;
            return v8 & 1;
          }
          goto LABEL_30;
        }
        goto LABEL_18;
      }
LABEL_17:
      if ( !v15 )
        goto LABEL_25;
LABEL_18:
      v8 = Caver::StoreController::IsCoinDoublerUnlockedCheck((Caver::StoreController *)v12);
      return v8 & 1;
    }
  }
  v8 = Caver::StoreController::IsGuideUnlockedCheck((Caver::StoreController *)v4);
  return v8 & 1;
}

