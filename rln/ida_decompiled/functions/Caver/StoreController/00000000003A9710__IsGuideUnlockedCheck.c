/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003A9710
 * Mangled: _ZN5Caver15StoreController20IsGuideUnlockedCheckEv
 * Demangled: Caver::StoreController::IsGuideUnlockedCheck(void)
 *
 * Callers: 1
 *   0x0000000000203C30  Caver::StoreController::IsGuideUnlockedCheck(void)
 *
 * Callees: 11
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FBBF0  boost::shared_ptr<Caver::StoreController>::shared_ptr<Caver::StoreController>(Caver::StoreController *)
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *   0x0000000000202DF0  Caver::GameOptions::SaveToFile(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003A9A78  Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 94
 *   insn=0x00000000003A9720 string=0x00000000003A9724 "T"
 *   insn=0x00000000003A9734 string=0x00000000001FD940 "0'"
 *   insn=0x00000000003A9740 string=0x00000000003A9744 "h"
 *   insn=0x00000000003A9744 string=0x00000000003A9748 ""
 *   insn=0x00000000003A9748 string=0x00000000003A974C "h"
 *   insn=0x00000000003A974C string=0x00000000003A9750 "!"
 *   insn=0x00000000003A9750 string=0x00000000003A9754 "h"
 *   insn=0x00000000003A9758 string=0x00000000003A975C "\t@"
 *   insn=0x00000000003A9760 string=0x00000000003A9764 "h\n@"
 *   insn=0x00000000003A9764 string=0x00000000003A9768 ""
 *   insn=0x00000000003A9768 string=0x00000000003A976C "h\n"
 *   insn=0x00000000003A9770 string=0x00000000003A97A0 "h"
 *   insn=0x00000000003A9788 string=0x00000000003A99A4 "K2"
 *   insn=0x00000000003A97A4 string=0x00000000003A97A8 "@"
 *   insn=0x00000000003A97AC string=0x00000000003A97B0 "U"
 *   insn=0x00000000003A97BC string=0x00000000003A985C "h"
 *   insn=0x00000000003A97C4 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003A97CC string=0x00000000003A97D0 ")=C"
 *   insn=0x00000000003A97D0 string=0x00000000003A97D4 "J"
 *   insn=0x00000000003A97DC string=0x00000000003A97E0 ")A"
 *   insn=0x00000000003A97E0 string=0x00000000003A97E4 "Ja"
 *   insn=0x00000000003A97E8 string=0x00000000003A97EC "\t)"
 *   insn=0x00000000003A97F0 string=0x00000000003A97F4 ""
 *   insn=0x00000000003A97F0 string=0x00000000001FBBF0 "0'"
 *   insn=0x00000000003A97F4 string=0x00000000003A97FC "\tM@"
 *   insn=0x00000000003A980C string=0x00000000003A9810 "\n%"
 *   insn=0x00000000003A9810 string=0x00000000003A9814 "3"
 *   insn=0x00000000003A9814 string=0x00000000003A9818 "h"
 *   insn=0x00000000003A9818 string=0x00000000003A981C ""
 *   insn=0x00000000003A981C string=0x00000000003A9820 "h"
 *   insn=0x00000000003A9824 string=0x00000000003A9828 "h"
 *   insn=0x00000000003A982C string=0x00000000003A9830 "\t@"
 *   insn=0x00000000003A9834 string=0x00000000003A9838 "h\n@"
 *   insn=0x00000000003A9838 string=0x00000000003A983C ""
 *   insn=0x00000000003A983C string=0x00000000003A9840 "h\n"
 *   insn=0x00000000003A9844 string=0x00000000003A9848 "h"
 *   insn=0x00000000003A984C string=0x00000000003A9850 "@"
 *   insn=0x00000000003A9860 string=0x00000000003A9864 "!"
 *   insn=0x00000000003A9864 string=0x000000000058E508 "compass"
 *   insn=0x00000000003A988C string=0x00000000003A9890 ")"
 *   insn=0x00000000003A98A4 string=0x00000000003A98A8 "&P"
 *   insn=0x00000000003A98B0 string=0x00000000003A98B4 "\tA"
 *   insn=0x00000000003A98B4 string=0x00000000003A98B8 "3"
 *   insn=0x00000000003A98B8 string=0x00000000003A98BC "h"
 *   insn=0x00000000003A98BC string=0x00000000003A98C0 ""
 *   insn=0x00000000003A98C0 string=0x00000000003A98C4 "h"
 *   insn=0x00000000003A98C8 string=0x00000000003A98CC "h"
 *   insn=0x00000000003A98D0 string=0x00000000003A98D4 "\t@"
 *   insn=0x00000000003A98D8 string=0x00000000003A98DC "h\n@"
 *   insn=0x00000000003A98DC string=0x00000000003A98E0 ""
 *   insn=0x00000000003A98E0 string=0x00000000003A98E4 "h\n"
 *   insn=0x00000000003A98E8 string=0x00000000003A98EC "h"
 *   insn=0x00000000003A98F0 string=0x00000000003A98F4 "@"
 *   insn=0x00000000003A9904 string=0x00000000003A9908 ":e"
 *   insn=0x00000000003A990C string=0x00000000003A9910 "S"
 *   insn=0x00000000003A9910 string=0x00000000003A9914 "h"
 *   insn=0x00000000003A9914 string=0x00000000003A9918 ""
 *   insn=0x00000000003A9918 string=0x00000000003A991C "h"
 *   insn=0x00000000003A9920 string=0x00000000003A9924 "h"
 *   insn=0x00000000003A9928 string=0x00000000003A992C "\t@"
 *   insn=0x00000000003A9930 string=0x00000000003A9934 "h\n@"
 *   insn=0x00000000003A9934 string=0x00000000003A9938 ""
 *   insn=0x00000000003A9938 string=0x00000000003A993C "h\n"
 *   insn=0x00000000003A9940 string=0x00000000003A9944 "h"
 *   insn=0x00000000003A9948 string=0x00000000003A994C "@"
 *   insn=0x00000000003A9958 string=0x00000000003A995C ")=G"
 *   insn=0x00000000003A995C string=0x00000000003A9960 "!"
 *   insn=0x00000000003A9964 string=0x00000000003A9968 "\t"
 *   insn=0x00000000003A9964 string=0x00000000003A997C "\t"
 *   insn=0x00000000003A9968 string=0x00000000003A996C "*"
 *   insn=0x00000000003A996C string=0x00000000003A9970 "\n"
 *   insn=0x00000000003A9978 string=0x00000000003A9988 "?"
 *   insn=0x00000000003A997C string=0x00000000003A9980 "*"
 *   insn=0x00000000003A9980 string=0x00000000003A9984 "\n"
 *   insn=0x00000000003A9994 string=0x00000000003A9998 "s"
 *   insn=0x00000000003A999C string=0x00000000003A99A0 "w"
 *   insn=0x00000000003A99A4 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003A99B4 string=0x00000000003A99B8 ""
 *   insn=0x00000000003A99C4 string=0x00000000003A99C8 "\t@"
 *   insn=0x00000000003A99D4 string=0x00000000003A99D8 ""
 *   insn=0x00000000003A99E4 string=0x00000000003A99E8 "@"
 *   insn=0x00000000003A9A00 string=0x00000000003A9A04 "J"
 *   insn=0x00000000003A9A08 string=0x00000000003A9A0C "(a"
 *   insn=0x00000000003A9A18 string=0x00000000003A9A1C "J=G"
 *   insn=0x00000000003A9A1C string=0x00000000003A9A20 ")!"
 *   insn=0x00000000003A9A24 string=0x00000000003A9A28 "*"
 *   insn=0x00000000003A9A24 string=0x00000000003A9A54 "*"
 *   insn=0x00000000003A9A28 string=0x00000000003A9A2C "K"
 *   insn=0x00000000003A9A2C string=0x00000000003A9A30 "+"
 *   insn=0x00000000003A9A34 string=0x00000000003A9A38 "_"
 *   insn=0x00000000003A9A44 string=0x00000000003A9A48 "W"
 *   insn=0x00000000003A9A54 string=0x00000000003A9A58 "K"
 *   insn=0x00000000003A9A58 string=0x00000000003A9A5C "+"
 *   insn=0x00000000003A9A5C string=0x00000000003A9A60 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StoreController::IsGuideUnlockedCheck(Caver::StoreController *this)
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
  v2 = *(unsigned __int8 *)(v28 + 80);
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
        sub_566BB8((int)&v30, "compass");
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
        *(_BYTE *)(v27[0] + 80) = 1;
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

