/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A9DE0
 * Mangled: _ZN5Caver15StoreController20IsNoAdsUnlockedCheckEv
 * Demangled: Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *
 * Callers: 2
 *   0x00000000001FED70  Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *   0x00000000003A9A78  Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBBF0  boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(Caver::StoreController *)
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *   0x0000000000202DF0  Caver::GameOptions::SaveToFile(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003AA148  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 93
 *   insn=0x00000000003A9DF0 string=0x00000000003A9DF4 "T"
 *   insn=0x00000000003A9E04 string=0x00000000001FD940 "0'"
 *   insn=0x00000000003A9E10 string=0x00000000003A9E14 "h"
 *   insn=0x00000000003A9E14 string=0x00000000003A9E18 ""
 *   insn=0x00000000003A9E18 string=0x00000000003A9E1C "h"
 *   insn=0x00000000003A9E1C string=0x00000000003A9E20 "!"
 *   insn=0x00000000003A9E20 string=0x00000000003A9E24 "h"
 *   insn=0x00000000003A9E28 string=0x00000000003A9E2C "\t@"
 *   insn=0x00000000003A9E30 string=0x00000000003A9E34 "h\n@"
 *   insn=0x00000000003A9E34 string=0x00000000003A9E38 ""
 *   insn=0x00000000003A9E38 string=0x00000000003A9E3C "h\n"
 *   insn=0x00000000003A9E40 string=0x00000000003A9E70 "h"
 *   insn=0x00000000003A9E74 string=0x00000000003A9E78 "@"
 *   insn=0x00000000003A9E7C string=0x00000000003A9E80 "U"
 *   insn=0x00000000003A9E8C string=0x00000000003A9F2C "h"
 *   insn=0x00000000003A9E94 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A9E9C string=0x00000000003A9EA0 ")=C"
 *   insn=0x00000000003A9EA0 string=0x00000000003A9EA4 "J"
 *   insn=0x00000000003A9EAC string=0x00000000003A9EB0 ")A"
 *   insn=0x00000000003A9EB0 string=0x00000000003A9EB4 "Ja"
 *   insn=0x00000000003A9EB8 string=0x00000000003A9EBC "\t)"
 *   insn=0x00000000003A9EBC string=0x00000000003A9EC0 "LG"
 *   insn=0x00000000003A9EC0 string=0x00000000003A9EC4 ""
 *   insn=0x00000000003A9EC0 string=0x00000000001FBBF0 "0'"
 *   insn=0x00000000003A9EC4 string=0x00000000003A9ECC "\tM@"
 *   insn=0x00000000003A9EDC string=0x00000000003A9EE0 "\n%"
 *   insn=0x00000000003A9EE0 string=0x00000000003A9EE4 "3"
 *   insn=0x00000000003A9EE4 string=0x00000000003A9EE8 "h"
 *   insn=0x00000000003A9EE8 string=0x00000000003A9EEC ""
 *   insn=0x00000000003A9EEC string=0x00000000003A9EF0 "h"
 *   insn=0x00000000003A9EF4 string=0x00000000003A9EF8 "h"
 *   insn=0x00000000003A9EFC string=0x00000000003A9F00 "\t@"
 *   insn=0x00000000003A9F04 string=0x00000000003A9F08 "h\n@"
 *   insn=0x00000000003A9F08 string=0x00000000003A9F0C ""
 *   insn=0x00000000003A9F0C string=0x00000000003A9F10 "h\n"
 *   insn=0x00000000003A9F14 string=0x00000000003A9F18 "h"
 *   insn=0x00000000003A9F1C string=0x00000000003A9F20 "@"
 *   insn=0x00000000003A9F30 string=0x00000000003A9F34 "A"
 *   insn=0x00000000003A9F34 string=0x0000000000591AFA "noads"
 *   insn=0x00000000003A9F5C string=0x00000000003A9F60 ")"
 *   insn=0x00000000003A9F74 string=0x00000000003A9F78 "rN"
 *   insn=0x00000000003A9F80 string=0x00000000003A9F84 "\tI"
 *   insn=0x00000000003A9F84 string=0x00000000003A9F88 "3"
 *   insn=0x00000000003A9F88 string=0x00000000003A9F8C "h"
 *   insn=0x00000000003A9F8C string=0x00000000003A9F90 ""
 *   insn=0x00000000003A9F90 string=0x00000000003A9F94 "h"
 *   insn=0x00000000003A9F98 string=0x00000000003A9F9C "h"
 *   insn=0x00000000003A9FA0 string=0x00000000003A9FA4 "\t@"
 *   insn=0x00000000003A9FA8 string=0x00000000003A9FAC "h\n@"
 *   insn=0x00000000003A9FAC string=0x00000000003A9FB0 ""
 *   insn=0x00000000003A9FB0 string=0x00000000003A9FB4 "h\n"
 *   insn=0x00000000003A9FB8 string=0x00000000003A9FBC "h"
 *   insn=0x00000000003A9FC0 string=0x00000000003A9FC4 "@"
 *   insn=0x00000000003A9FCC string=0x00000000003A9FD0 "\N"
 *   insn=0x00000000003A9FDC string=0x00000000003A9FE0 "S"
 *   insn=0x00000000003A9FE0 string=0x00000000003A9FE4 "h"
 *   insn=0x00000000003A9FE4 string=0x00000000003A9FE8 ""
 *   insn=0x00000000003A9FE8 string=0x00000000003A9FEC "h"
 *   insn=0x00000000003A9FF0 string=0x00000000003A9FF4 "h"
 *   insn=0x00000000003A9FF8 string=0x00000000003A9FFC "\t@"
 *   insn=0x00000000003AA000 string=0x00000000003AA004 "h\n@"
 *   insn=0x00000000003AA004 string=0x00000000003AA008 ""
 *   insn=0x00000000003AA008 string=0x00000000003AA00C "h\n"
 *   insn=0x00000000003AA010 string=0x00000000003AA014 "h"
 *   insn=0x00000000003AA018 string=0x00000000003AA01C "@"
 *   insn=0x00000000003AA028 string=0x00000000003AA02C ")=G"
 *   insn=0x00000000003AA02C string=0x00000000003AA030 "!"
 *   insn=0x00000000003AA034 string=0x00000000003AA038 "\t"
 *   insn=0x00000000003AA034 string=0x00000000003AA04C "\t"
 *   insn=0x00000000003AA038 string=0x00000000003AA03C "*"
 *   insn=0x00000000003AA03C string=0x00000000003AA040 "\n"
 *   insn=0x00000000003AA048 string=0x00000000003AA058 "?"
 *   insn=0x00000000003AA04C string=0x00000000003AA050 "*"
 *   insn=0x00000000003AA050 string=0x00000000003AA054 "\n"
 *   insn=0x00000000003AA064 string=0x00000000003AA068 "s"
 *   insn=0x00000000003AA06C string=0x00000000003AA070 "w"
 *   insn=0x00000000003AA074 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AA084 string=0x00000000003AA088 ""
 *   insn=0x00000000003AA094 string=0x00000000003AA098 "\t@"
 *   insn=0x00000000003AA0A4 string=0x00000000003AA0A8 ""
 *   insn=0x00000000003AA0B4 string=0x00000000003AA0B8 "@"
 *   insn=0x00000000003AA0D0 string=0x00000000003AA0D4 "J"
 *   insn=0x00000000003AA0D8 string=0x00000000003AA0DC "(a"
 *   insn=0x00000000003AA0E8 string=0x00000000003AA0EC "J=G"
 *   insn=0x00000000003AA0EC string=0x00000000003AA0F0 ")!"
 *   insn=0x00000000003AA0F4 string=0x00000000003AA0F8 "*"
 *   insn=0x00000000003AA0F4 string=0x00000000003AA124 "*"
 *   insn=0x00000000003AA0F8 string=0x00000000003AA0FC "K"
 *   insn=0x00000000003AA0FC string=0x00000000003AA100 "+"
 *   insn=0x00000000003AA104 string=0x00000000003AA108 "_"
 *   insn=0x00000000003AA124 string=0x00000000003AA128 "K"
 *   insn=0x00000000003AA128 string=0x00000000003AA12C "+"
 *   insn=0x00000000003AA12C string=0x00000000003AA130 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreController::IsNoAdsUnlockedCheck(Caver::StoreController *this)
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
  v2 = *(unsigned __int8 *)(v28 + 82);
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
        sub_566BB8((int)&v30, "noads");
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
        *(_BYTE *)(v27[0] + 82) = 1;
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

