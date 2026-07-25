/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A9A78
 * Mangled: _ZN5Caver15StoreController26IsCoinDoublerUnlockedCheckEv
 * Demangled: Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *
 * Callers: 2
 *   0x0000000000200AB0  Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *   0x00000000003A9710  Caver::StoreController::IsGuideUnlockedCheck(void)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBBF0  boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(Caver::StoreController *)
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *   0x0000000000202DF0  Caver::GameOptions::SaveToFile(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A9DE0  Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 96
 *   insn=0x00000000003A9A88 string=0x00000000003A9A8C "T"
 *   insn=0x00000000003A9A9C string=0x00000000001FD940 "0'"
 *   insn=0x00000000003A9AA8 string=0x00000000003A9AAC "h"
 *   insn=0x00000000003A9AAC string=0x00000000003A9AB0 ""
 *   insn=0x00000000003A9AB0 string=0x00000000003A9AB4 "h"
 *   insn=0x00000000003A9AB4 string=0x00000000003A9AB8 "!"
 *   insn=0x00000000003A9AB8 string=0x00000000003A9ABC "h"
 *   insn=0x00000000003A9AC0 string=0x00000000003A9AC4 "\t@"
 *   insn=0x00000000003A9AC8 string=0x00000000003A9ACC "h\n@"
 *   insn=0x00000000003A9ACC string=0x00000000003A9AD0 ""
 *   insn=0x00000000003A9AD0 string=0x00000000003A9AD4 "h\n"
 *   insn=0x00000000003A9AD8 string=0x00000000003A9B08 "h"
 *   insn=0x00000000003A9AF0 string=0x00000000003A9D0C "q1"
 *   insn=0x00000000003A9B0C string=0x00000000003A9B10 "@"
 *   insn=0x00000000003A9B14 string=0x00000000003A9B18 "U"
 *   insn=0x00000000003A9B24 string=0x00000000003A9BC4 "h"
 *   insn=0x00000000003A9B2C string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A9B34 string=0x00000000003A9B38 ")=C"
 *   insn=0x00000000003A9B38 string=0x00000000003A9B3C "J"
 *   insn=0x00000000003A9B44 string=0x00000000003A9B48 ")A"
 *   insn=0x00000000003A9B48 string=0x00000000003A9B4C "Ja"
 *   insn=0x00000000003A9B50 string=0x00000000003A9B54 "\t)"
 *   insn=0x00000000003A9B54 string=0x00000000003A9B58 "&H"
 *   insn=0x00000000003A9B58 string=0x00000000003A9B5C ""
 *   insn=0x00000000003A9B58 string=0x00000000001FBBF0 "0'"
 *   insn=0x00000000003A9B5C string=0x00000000003A9B64 "\tM@"
 *   insn=0x00000000003A9B74 string=0x00000000003A9B78 "\n%"
 *   insn=0x00000000003A9B78 string=0x00000000003A9B7C "3"
 *   insn=0x00000000003A9B7C string=0x00000000003A9B80 "h"
 *   insn=0x00000000003A9B80 string=0x00000000003A9B84 ""
 *   insn=0x00000000003A9B84 string=0x00000000003A9B88 "h"
 *   insn=0x00000000003A9B8C string=0x00000000003A9B90 "h"
 *   insn=0x00000000003A9B94 string=0x00000000003A9B98 "\t@"
 *   insn=0x00000000003A9B9C string=0x00000000003A9BA0 "h\n@"
 *   insn=0x00000000003A9BA0 string=0x00000000003A9BA4 ""
 *   insn=0x00000000003A9BA4 string=0x00000000003A9BA8 "h\n"
 *   insn=0x00000000003A9BAC string=0x00000000003A9BB0 "h"
 *   insn=0x00000000003A9BB4 string=0x00000000003A9BB8 "@"
 *   insn=0x00000000003A9BC8 string=0x00000000003A9BCC "A"
 *   insn=0x00000000003A9BCC string=0x0000000000591AEE "coindoubler"
 *   insn=0x00000000003A9BF4 string=0x00000000003A9BF8 ")"
 *   insn=0x00000000003A9C0C string=0x00000000003A9C10 "LO"
 *   insn=0x00000000003A9C18 string=0x00000000003A9C1C "\tE"
 *   insn=0x00000000003A9C1C string=0x00000000003A9C20 "3"
 *   insn=0x00000000003A9C20 string=0x00000000003A9C24 "h"
 *   insn=0x00000000003A9C24 string=0x00000000003A9C28 ""
 *   insn=0x00000000003A9C28 string=0x00000000003A9C2C "h"
 *   insn=0x00000000003A9C30 string=0x00000000003A9C34 "h"
 *   insn=0x00000000003A9C38 string=0x00000000003A9C3C "\t@"
 *   insn=0x00000000003A9C40 string=0x00000000003A9C44 "h\n@"
 *   insn=0x00000000003A9C44 string=0x00000000003A9C48 ""
 *   insn=0x00000000003A9C48 string=0x00000000003A9C4C "h\n"
 *   insn=0x00000000003A9C50 string=0x00000000003A9C54 "h"
 *   insn=0x00000000003A9C58 string=0x00000000003A9C5C "@"
 *   insn=0x00000000003A9C64 string=0x00000000003A9C68 "6O"
 *   insn=0x00000000003A9C6C string=0x00000000003A9C70 "`d"
 *   insn=0x00000000003A9C74 string=0x00000000003A9C78 "S"
 *   insn=0x00000000003A9C78 string=0x00000000003A9C7C "h"
 *   insn=0x00000000003A9C7C string=0x00000000003A9C80 ""
 *   insn=0x00000000003A9C80 string=0x00000000003A9C84 "h"
 *   insn=0x00000000003A9C88 string=0x00000000003A9C8C "h"
 *   insn=0x00000000003A9C90 string=0x00000000003A9C94 "\t@"
 *   insn=0x00000000003A9C98 string=0x00000000003A9C9C "h\n@"
 *   insn=0x00000000003A9C9C string=0x00000000003A9CA0 ""
 *   insn=0x00000000003A9CA0 string=0x00000000003A9CA4 "h\n"
 *   insn=0x00000000003A9CA8 string=0x00000000003A9CAC "h"
 *   insn=0x00000000003A9CB0 string=0x00000000003A9CB4 "@"
 *   insn=0x00000000003A9CC0 string=0x00000000003A9CC4 ")=G"
 *   insn=0x00000000003A9CC4 string=0x00000000003A9CC8 "!"
 *   insn=0x00000000003A9CCC string=0x00000000003A9CD0 "\t"
 *   insn=0x00000000003A9CCC string=0x00000000003A9CE4 "\t"
 *   insn=0x00000000003A9CD0 string=0x00000000003A9CD4 "*"
 *   insn=0x00000000003A9CD4 string=0x00000000003A9CD8 "\n"
 *   insn=0x00000000003A9CE0 string=0x00000000003A9CF0 "?"
 *   insn=0x00000000003A9CE4 string=0x00000000003A9CE8 "*"
 *   insn=0x00000000003A9CE8 string=0x00000000003A9CEC "\n"
 *   insn=0x00000000003A9CFC string=0x00000000003A9D00 "s"
 *   insn=0x00000000003A9D04 string=0x00000000003A9D08 "w"
 *   insn=0x00000000003A9D0C string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A9D1C string=0x00000000003A9D20 ""
 *   insn=0x00000000003A9D2C string=0x00000000003A9D30 "\t@"
 *   insn=0x00000000003A9D3C string=0x00000000003A9D40 ""
 *   insn=0x00000000003A9D4C string=0x00000000003A9D50 "@"
 *   insn=0x00000000003A9D68 string=0x00000000003A9D6C "J"
 *   insn=0x00000000003A9D70 string=0x00000000003A9D74 "(a"
 *   insn=0x00000000003A9D80 string=0x00000000003A9D84 "J=G"
 *   insn=0x00000000003A9D84 string=0x00000000003A9D88 ")!"
 *   insn=0x00000000003A9D8C string=0x00000000003A9D90 "*"
 *   insn=0x00000000003A9D8C string=0x00000000003A9DBC "*"
 *   insn=0x00000000003A9D90 string=0x00000000003A9D94 "K"
 *   insn=0x00000000003A9D94 string=0x00000000003A9D98 "+"
 *   insn=0x00000000003A9D9C string=0x00000000003A9DA0 "_"
 *   insn=0x00000000003A9DAC string=0x00000000003A9DB0 "}"
 *   insn=0x00000000003A9DBC string=0x00000000003A9DC0 "K"
 *   insn=0x00000000003A9DC0 string=0x00000000003A9DC4 "+"
 *   insn=0x00000000003A9DC4 string=0x00000000003A9DC8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreController::IsCoinDoublerUnlockedCheck(Caver::StoreController *this)
{
  _QWORD *v1; // x19
  int v2; // w21
  __int64 v3; // x8
  __int64 v4; // x8
  __int64 v6; // x19
  _QWORD *v7; // x0
  _QWORD *v8; // x19
  __int64 v9; // x10
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 (__fastcall *v13)(__int64, __int64 *); // x21
  char v14; // w19
  void *v15; // x0
  Caver::GameOptions *v16; // x0
  _QWORD *v17; // x19
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x19
  __int64 v21; // x8
  __int64 v22; // x8
  unsigned int *v23; // x8
  int v24; // w9
  Caver::GameOptions *v25; // [xsp+0h] [xbp-70h] BYREF
  _QWORD *v26; // [xsp+8h] [xbp-68h]
  __int64 v27[2]; // [xsp+10h] [xbp-60h] BYREF
  __int64 v28; // [xsp+20h] [xbp-50h] BYREF
  _QWORD *v29; // [xsp+28h] [xbp-48h]
  __int64 v30; // [xsp+30h] [xbp-40h] BYREF
  __int64 v31; // [xsp+38h] [xbp-38h]
  __int64 v32; // [xsp+48h] [xbp-28h]

  v32 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GameOptions::sharedOptions(&v28, this);
  v1 = v29;
  v2 = *(unsigned __int8 *)(v28 + 81);
  if ( v29 )
  {
    v3 = v29[1] - 1LL;
    v29[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v1 + 16LL))(v1);
      v4 = v1[2] - 1LL;
      v1[2] = v4;
      if ( !v4 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v1 + 24LL))(v1);
        if ( v2 )
          return 1;
LABEL_8:
        v6 = qword_6E9970;
        if ( !qword_6E9970 )
        {
          v7 = (_QWORD *)operator new(0x10u);
          *v7 = off_6CEC48;
          v7[1] = &byte_6FD2F8;
          boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>();
          v8 = (_QWORD *)qword_6E9978;
          v9 = v30;
          v30 = qword_6E9970;
          v10 = v31;
          v31 = qword_6E9978;
          qword_6E9970 = v9;
          qword_6E9978 = v10;
          if ( v8 )
          {
            v11 = v8[1] - 1LL;
            v8[1] = v11;
            if ( !v11 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
              v12 = v8[2] - 1LL;
              v8[2] = v12;
              if ( !v12 )
                (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
            }
          }
          v6 = qword_6E9970;
        }
        v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL);
        sub_566BB8((int)&v30, "coindoubler");
        v14 = v13(v6, &v30);
        v15 = (void *)(v30 - 24);
        if ( (__int64 *)(v30 - 24) == &qword_6FD2E0 )
          goto LABEL_15;
        v23 = (unsigned int *)(v30 - 8);
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
        if ( v24 > 0 )
        {
LABEL_15:
          if ( (v14 & 1) == 0 )
            return 0;
        }
        else
        {
          operator delete(v15);
          if ( (v14 & 1) == 0 )
            return 0;
        }
        v16 = (Caver::GameOptions *)Caver::GameOptions::sharedOptions(v27, (Caver::GameOptions *)v15);
        v17 = (_QWORD *)v27[1];
        *(_BYTE *)(v27[0] + 81) = 1;
        if ( v17 )
        {
          v18 = v17[1] - 1LL;
          v17[1] = v18;
          if ( !v18 )
          {
            v16 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
            v19 = v17[2] - 1LL;
            v17[2] = v19;
            if ( !v19 )
              v16 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
          }
        }
        Caver::GameOptions::sharedOptions((__int64 *)&v25, v16);
        Caver::GameOptions::SaveToFile(v25);
        v20 = v26;
        if ( v26 )
        {
          v21 = v26[1] - 1LL;
          v26[1] = v21;
          if ( !v21 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
            v22 = v20[2] - 1LL;
            v20[2] = v22;
            if ( !v22 )
              (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
          }
        }
        return 1;
      }
    }
  }
  if ( !v2 )
    goto LABEL_8;
  return 1;
}

