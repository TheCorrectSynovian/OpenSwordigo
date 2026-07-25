/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003AA898
 * Mangled: _ZN5Caver15StoreController30ResetProductUnlocksToPurchasesEv
 * Demangled: Caver::StoreController::ResetProductUnlocksToPurchases(void)
 *
 * Callers: 2
 *   0x00000000001FFC70  Caver::StoreController::ResetProductUnlocksToPurchases(void)
 *   0x00000000003AA148  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FD940  Caver::GameOptions::sharedOptions(void)
 *   0x0000000000202DF0  Caver::GameOptions::SaveToFile(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003AAE7C  Caver::StoreController::~StoreController()
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 144
 *   insn=0x00000000003AA8B0 string=0x00000000003AA8B4 "V"
 *   insn=0x00000000003AA8C0 string=0x00000000003AA8C4 "h"
 *   insn=0x00000000003AA8C8 string=0x00000000003AA8CC "!"
 *   insn=0x00000000003AA8CC string=0x000000000058E508 "compass"
 *   insn=0x00000000003AA908 string=0x00000000003AA90C "L"
 *   insn=0x00000000003AA90C string=0x00000000001FD940 "0'"
 *   insn=0x00000000003AA910 string=0x00000000003AA914 "AA9"
 *   insn=0x00000000003AA928 string=0x00000000003AA92C ""
 *   insn=0x00000000003AA930 string=0x00000000003AA934 "!"
 *   insn=0x00000000003AA93C string=0x00000000003AA940 "\t@"
 *   insn=0x00000000003AA948 string=0x00000000003AA94C ""
 *   insn=0x00000000003AA950 string=0x00000000003AA954 "`"
 *   insn=0x00000000003AA968 string=0x00000000003AA96C "\tA"
 *   insn=0x00000000003AA970 string=0x00000000003AA974 "4"
 *   insn=0x00000000003AA978 string=0x00000000003AA97C ""
 *   insn=0x00000000003AA98C string=0x00000000003AA990 "\t@"
 *   insn=0x00000000003AA998 string=0x00000000003AA99C ""
 *   insn=0x00000000003AA9AC string=0x00000000003AA9B0 "@"
 *   insn=0x00000000003AA9B8 string=0x00000000003AA9BC ""
 *   insn=0x00000000003AA9BC string=0x00000000003AA9D8 "h"
 *   insn=0x00000000003AA9C4 string=0x00000000003AA9C8 "@"
 *   insn=0x00000000003AA9CC string=0x00000000003AA9D0 "x"
 *   insn=0x00000000003AA9DC string=0x00000000003AA9E0 "!"
 *   insn=0x00000000003AA9E0 string=0x0000000000591AEE "coindoubler"
 *   insn=0x00000000003AA9EC string=0x00000000003AA9F0 "r"
 *   insn=0x00000000003AAA1C string=0x00000000003AAA20 "EA9"
 *   insn=0x00000000003AAA2C string=0x00000000003AAA30 "5"
 *   insn=0x00000000003AAA30 string=0x00000000003AAA74 "9"
 *   insn=0x00000000003AAA34 string=0x00000000003AAA38 ""
 *   insn=0x00000000003AAA48 string=0x00000000003AAA4C "\t@"
 *   insn=0x00000000003AAA54 string=0x00000000003AAA58 ""
 *   insn=0x00000000003AAA68 string=0x00000000003AAA6C "@"
 *   insn=0x00000000003AAA74 string=0x00000000003AAAD8 "h"
 *   insn=0x00000000003AAA84 string=0x00000000003AAA88 "\tE"
 *   insn=0x00000000003AAA8C string=0x00000000003AAA90 "4"
 *   insn=0x00000000003AAA94 string=0x00000000003AAA98 ""
 *   insn=0x00000000003AAAA8 string=0x00000000003AAAAC "\t@"
 *   insn=0x00000000003AAAB4 string=0x00000000003AAAB8 ""
 *   insn=0x00000000003AAAC8 string=0x00000000003AAACC "@"
 *   insn=0x00000000003AAADC string=0x00000000003AAAE0 "!"
 *   insn=0x00000000003AAAE0 string=0x0000000000591AFA "noads"
 *   insn=0x00000000003AAAEC string=0x00000000003AAAF0 "2"
 *   insn=0x00000000003AAB1C string=0x00000000003AAB20 "IA9"
 *   insn=0x00000000003AAB28 string=0x00000000003AAB2C "u"
 *   insn=0x00000000003AAB34 string=0x00000000003AAB38 ""
 *   insn=0x00000000003AAB3C string=0x00000000003AAB40 "!"
 *   insn=0x00000000003AAB48 string=0x00000000003AAB4C "\t@"
 *   insn=0x00000000003AAB54 string=0x00000000003AAB58 ""
 *   insn=0x00000000003AAB5C string=0x00000000003AAB60 "@"
 *   insn=0x00000000003AAB68 string=0x00000000003AAB6C "uK"
 *   insn=0x00000000003AAB70 string=0x00000000003AAB74 "i"
 *   insn=0x00000000003AAB74 string=0x00000000003AAB78 "\tI"
 *   insn=0x00000000003AAB80 string=0x00000000003AAB84 "h"
 *   insn=0x00000000003AAB84 string=0x00000000003AAB88 ""
 *   insn=0x00000000003AAB88 string=0x00000000003AAB8C "h"
 *   insn=0x00000000003AAB90 string=0x00000000003AAB94 "h"
 *   insn=0x00000000003AAB98 string=0x00000000003AAB9C "\t@"
 *   insn=0x00000000003AABA0 string=0x00000000003AABA4 "h\n@"
 *   insn=0x00000000003AABA4 string=0x00000000003AABA8 ""
 *   insn=0x00000000003AABA8 string=0x00000000003AABAC "h\n"
 *   insn=0x00000000003AABB0 string=0x00000000003AABB4 "h"
 *   insn=0x00000000003AABB8 string=0x00000000003AABBC "@"
 *   insn=0x00000000003AABC0 string=0x00000000003AABC4 ""
 *   insn=0x00000000003AABCC string=0x00000000003AABD0 "@"
 *   insn=0x00000000003AABE0 string=0x00000000003AABE4 "WK"
 *   insn=0x00000000003AABF0 string=0x00000000003AABF4 "3"
 *   insn=0x00000000003AABF4 string=0x00000000003AABF8 "h"
 *   insn=0x00000000003AABF8 string=0x00000000003AABFC ""
 *   insn=0x00000000003AABFC string=0x00000000003AAC00 "h"
 *   insn=0x00000000003AAC04 string=0x00000000003AAC08 "h"
 *   insn=0x00000000003AAC0C string=0x00000000003AAC10 "\t@"
 *   insn=0x00000000003AAC14 string=0x00000000003AAC18 "h\n@"
 *   insn=0x00000000003AAC18 string=0x00000000003AAC1C ""
 *   insn=0x00000000003AAC1C string=0x00000000003AAC20 "h\n"
 *   insn=0x00000000003AAC24 string=0x00000000003AAC28 "h"
 *   insn=0x00000000003AAC2C string=0x00000000003AAC30 "@"
 *   insn=0x00000000003AAC40 string=0x00000000003AAC44 "a"
 *   insn=0x00000000003AAC44 string=0x00000000003AAD30 "h-"
 *   insn=0x00000000003AAC64 string=0x00000000003AAC68 ")=G"
 *   insn=0x00000000003AAC68 string=0x00000000003AAC6C "!"
 *   insn=0x00000000003AAC6C string=0x00000000003AAC70 "\t"
 *   insn=0x00000000003AAC70 string=0x00000000003AAC74 "\t"
 *   insn=0x00000000003AAC70 string=0x00000000003AACD0 "\t"
 *   insn=0x00000000003AAC74 string=0x00000000003AAC78 "*"
 *   insn=0x00000000003AAC78 string=0x00000000003AAC7C "\n"
 *   insn=0x00000000003AAC84 string=0x00000000003AACDC "?"
 *   insn=0x00000000003AAC88 string=0x00000000003AAC8C ")=G"
 *   insn=0x00000000003AAC8C string=0x00000000003AAC90 "!"
 *   insn=0x00000000003AAC94 string=0x00000000003AAC98 "\t"
 *   insn=0x00000000003AAC94 string=0x00000000003AACF0 "\t"
 *   insn=0x00000000003AAC98 string=0x00000000003AAC9C "*"
 *   insn=0x00000000003AAC9C string=0x00000000003AACA0 "\n"
 *   insn=0x00000000003AACA8 string=0x00000000003AACFC "?"
 *   insn=0x00000000003AACAC string=0x00000000003AACB0 ")=G"
 *   insn=0x00000000003AACB0 string=0x00000000003AACB4 "!"
 *   insn=0x00000000003AACB8 string=0x00000000003AACBC "\t"
 *   insn=0x00000000003AACB8 string=0x00000000003AAD10 "\t"
 *   insn=0x00000000003AACBC string=0x00000000003AACC0 "*"
 *   insn=0x00000000003AACC0 string=0x00000000003AACC4 "\n"
 *   insn=0x00000000003AACCC string=0x00000000003AAD1C "?"
 *   insn=0x00000000003AACD0 string=0x00000000003AACD4 "*"
 *   insn=0x00000000003AACD4 string=0x00000000003AACD8 "\n"
 *   insn=0x00000000003AACDC string=0x00000000003AACE0 "L"
 *   insn=0x00000000003AACE8 string=0x00000000003AACEC ""
 *   insn=0x00000000003AACF0 string=0x00000000003AACF4 "*"
 *   insn=0x00000000003AACF4 string=0x00000000003AACF8 "\n"
 *   insn=0x00000000003AAD08 string=0x00000000003AAD0C "B"
 *   insn=0x00000000003AAD10 string=0x00000000003AAD14 "*"
 *   insn=0x00000000003AAD14 string=0x00000000003AAD18 "\n"
 *   insn=0x00000000003AAD28 string=0x00000000003AAD2C "z"
 *   insn=0x00000000003AAD30 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003AAD40 string=0x00000000003AAD44 ""
 *   insn=0x00000000003AAD48 string=0x00000000003AAD4C "A\t"
 *   insn=0x00000000003AAD50 string=0x00000000003AAD54 "\t@"
 *   insn=0x00000000003AAD60 string=0x00000000003AAD64 ""
 *   insn=0x00000000003AAD68 string=0x00000000003AAD6C "A"
 *   insn=0x00000000003AAD70 string=0x00000000003AAD74 "@"
 *   insn=0x00000000003AAD7C string=0x00000000003AAD80 "="
 *   insn=0x00000000003AAD8C string=0x00000000003AAD90 "(a"
 *   insn=0x00000000003AAD9C string=0x00000000003AADA0 "J=G"
 *   insn=0x00000000003AADA0 string=0x00000000003AADA4 ")!"
 *   insn=0x00000000003AADA8 string=0x00000000003AADAC "*"
 *   insn=0x00000000003AADA8 string=0x00000000003AAE58 "*"
 *   insn=0x00000000003AADAC string=0x00000000003AADB0 "K"
 *   insn=0x00000000003AADB0 string=0x00000000003AADB4 "+"
 *   insn=0x00000000003AADB8 string=0x00000000003AADBC " "
 *   insn=0x00000000003AADBC string=0x00000000003AAE3C "_"
 *   insn=0x00000000003AADC8 string=0x00000000003AADCC "(a"
 *   insn=0x00000000003AADD8 string=0x00000000003AADDC "J=G"
 *   insn=0x00000000003AADDC string=0x00000000003AADE0 ")!"
 *   insn=0x00000000003AADE4 string=0x00000000003AADE8 "*"
 *   insn=0x00000000003AADE8 string=0x00000000003AADEC "K"
 *   insn=0x00000000003AADEC string=0x00000000003AADF0 "+"
 *   insn=0x00000000003AAE04 string=0x00000000003AAE08 "J"
 *   insn=0x00000000003AAE0C string=0x00000000003AAE10 "(a"
 *   insn=0x00000000003AAE1C string=0x00000000003AAE20 "J=G"
 *   insn=0x00000000003AAE20 string=0x00000000003AAE24 ")!"
 *   insn=0x00000000003AAE28 string=0x00000000003AAE2C "*"
 *   insn=0x00000000003AAE2C string=0x00000000003AAE30 "K"
 *   insn=0x00000000003AAE30 string=0x00000000003AAE34 "+"
 *   insn=0x00000000003AAE48 string=0x00000000003AAE4C "V"
 *   insn=0x00000000003AAE58 string=0x00000000003AAE5C "K"
 *   insn=0x00000000003AAE5C string=0x00000000003AAE60 "+"
 *   insn=0x00000000003AAE60 string=0x00000000003AAE64 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreController::ResetProductUnlocksToPurchases(Caver::StoreController *this)
{
  __int64 (__fastcall *v2)(Caver::StoreController *, _QWORD *); // x20
  char v3; // w20
  void *v4; // x0
  Caver::GameOptions *v5; // x0
  _QWORD *v6; // x21
  char v7; // w24
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  int v13; // w24
  __int64 (__fastcall *v14)(Caver::StoreController *, _QWORD *); // x20
  char v15; // w20
  void *v16; // x0
  Caver::GameOptions *v17; // x0
  _QWORD *v18; // x21
  char v19; // w25
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 (__fastcall *v25)(Caver::StoreController *, _QWORD *); // x20
  char v26; // w19
  void *v27; // x0
  __int64 *v28; // x0
  _QWORD *v29; // x20
  char v30; // w21
  __int64 v31; // x8
  __int64 v32; // x8
  _QWORD *v33; // x19
  __int64 v34; // x8
  __int64 v35; // x8
  _QWORD *v36; // x19
  __int64 v37; // x8
  __int64 v38; // x8
  unsigned int *v39; // x8
  int v40; // w9
  unsigned int *v41; // x8
  int v42; // w9
  unsigned int *v43; // x8
  int v44; // w9
  Caver::GameOptions *v45; // [xsp+8h] [xbp-C8h] BYREF
  _QWORD *v46; // [xsp+10h] [xbp-C0h]
  __int64 v47; // [xsp+18h] [xbp-B8h] BYREF
  _QWORD *v48; // [xsp+20h] [xbp-B0h]
  __int64 v49; // [xsp+28h] [xbp-A8h] BYREF
  _QWORD *v50; // [xsp+30h] [xbp-A0h]
  __int64 v51; // [xsp+38h] [xbp-98h] BYREF
  _QWORD *v52; // [xsp+40h] [xbp-90h]
  __int64 v53; // [xsp+48h] [xbp-88h] BYREF
  _QWORD *v54; // [xsp+50h] [xbp-80h]
  __int64 v55; // [xsp+58h] [xbp-78h] BYREF
  _QWORD *v56; // [xsp+60h] [xbp-70h]
  __int64 v57; // [xsp+68h] [xbp-68h] BYREF
  _QWORD *v58; // [xsp+70h] [xbp-60h]
  _QWORD v59[3]; // [xsp+78h] [xbp-58h] BYREF

  v59[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(__int64 (__fastcall **)(Caver::StoreController *, _QWORD *))(*(_QWORD *)this + 24LL);
  sub_566BB8((int)v59, "compass");
  v3 = v2(this, v59);
  v4 = (void *)(v59[0] - 24LL);
  if ( (__int64 *)(v59[0] - 24LL) != &qword_6FD2E0 )
  {
    v39 = (unsigned int *)(v59[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v40 = __ldaxr(v39);
      while ( __stlxr(v40 - 1, v39) );
    }
    else
    {
      v40 = (*v39)--;
    }
    if ( v40 <= 0 )
      operator delete(v4);
  }
  v5 = (Caver::GameOptions *)Caver::GameOptions::sharedOptions(&v57, (Caver::GameOptions *)v4);
  v6 = v58;
  v7 = v3 ^ (*(_BYTE *)(v57 + 80) != 0);
  if ( !v58
    || (v8 = v58[1] - 1LL, (v58[1] = v8) != 0)
    || (v5 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6),
        v9 = v6[2] - 1LL,
        (v6[2] = v9) != 0) )
  {
    if ( (v7 & 1) != 0 )
      goto LABEL_6;
LABEL_12:
    v13 = 0;
    goto LABEL_13;
  }
  v5 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
  if ( (v7 & 1) == 0 )
    goto LABEL_12;
LABEL_6:
  Caver::GameOptions::sharedOptions(&v55, v5);
  *(_BYTE *)(v55 + 80) = v3 & 1;
  v10 = v56;
  if ( v56 )
  {
    v11 = v56[1] - 1LL;
    v56[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v13 = 1;
LABEL_13:
  v14 = *(__int64 (__fastcall **)(Caver::StoreController *, _QWORD *))(*(_QWORD *)this + 24LL);
  sub_566BB8((int)v59, "coindoubler");
  v15 = v14(this, v59);
  v16 = (void *)(v59[0] - 24LL);
  if ( (__int64 *)(v59[0] - 24LL) != &qword_6FD2E0 )
  {
    v41 = (unsigned int *)(v59[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v42 = __ldaxr(v41);
      while ( __stlxr(v42 - 1, v41) );
    }
    else
    {
      v42 = (*v41)--;
    }
    if ( v42 <= 0 )
      operator delete(v16);
  }
  v17 = (Caver::GameOptions *)Caver::GameOptions::sharedOptions(&v53, (Caver::GameOptions *)v16);
  v18 = v54;
  v19 = v15 ^ (*(_BYTE *)(v53 + 81) != 0);
  if ( v54 )
  {
    v20 = v54[1] - 1LL;
    v54[1] = v20;
    if ( !v20 )
    {
      v17 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v21 = v18[2] - 1LL;
      v18[2] = v21;
      if ( !v21 )
        v17 = (Caver::GameOptions *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
    }
  }
  if ( (v19 & 1) != 0 )
  {
    Caver::GameOptions::sharedOptions(&v51, v17);
    *(_BYTE *)(v51 + 81) = v15 & 1;
    v22 = v52;
    if ( v52 )
    {
      v23 = v52[1] - 1LL;
      v52[1] = v23;
      if ( !v23 )
      {
        (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
        v24 = v22[2] - 1LL;
        v22[2] = v24;
        if ( !v24 )
          (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
      }
    }
    v13 = 1;
  }
  v25 = *(__int64 (__fastcall **)(Caver::StoreController *, _QWORD *))(*(_QWORD *)this + 24LL);
  sub_566BB8((int)v59, "noads");
  v26 = v25(this, v59);
  v27 = (void *)(v59[0] - 24LL);
  if ( (__int64 *)(v59[0] - 24LL) != &qword_6FD2E0 )
  {
    v43 = (unsigned int *)(v59[0] - 8LL);
    if ( &pthread_create )
    {
      do
        v44 = __ldaxr(v43);
      while ( __stlxr(v44 - 1, v43) );
    }
    else
    {
      v44 = (*v43)--;
    }
    if ( v44 <= 0 )
      operator delete(v27);
  }
  v28 = Caver::GameOptions::sharedOptions(&v49, (Caver::GameOptions *)v27);
  v29 = v50;
  v30 = v26 ^ (*(_BYTE *)(v49 + 82) != 0);
  if ( v50 )
  {
    v31 = v50[1] - 1LL;
    v50[1] = v31;
    if ( !v31 )
    {
      v28 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v29 + 16LL))(v29);
      v32 = v29[2] - 1LL;
      v29[2] = v32;
      if ( !v32 )
      {
        v28 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v29 + 24LL))(v29);
        if ( (v30 & 1) != 0 )
          goto LABEL_29;
LABEL_34:
        if ( !v13 )
          return;
        goto LABEL_35;
      }
    }
  }
  if ( (v30 & 1) == 0 )
    goto LABEL_34;
LABEL_29:
  v28 = Caver::GameOptions::sharedOptions(&v47, (Caver::GameOptions *)v28);
  *(_BYTE *)(v47 + 82) = v26 & 1;
  v33 = v48;
  if ( v48 )
  {
    v34 = v48[1] - 1LL;
    v48[1] = v34;
    if ( !v34 )
    {
      v28 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
      v35 = v33[2] - 1LL;
      v33[2] = v35;
      if ( !v35 )
        v28 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *))(*v33 + 24LL))(v33);
    }
  }
LABEL_35:
  Caver::GameOptions::sharedOptions((__int64 *)&v45, (Caver::GameOptions *)v28);
  Caver::GameOptions::SaveToFile(v45);
  v36 = v46;
  if ( v46 )
  {
    v37 = v46[1] - 1LL;
    v46[1] = v37;
    if ( !v37 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v36 + 16LL))(v36);
      v38 = v36[2] - 1LL;
      v36[2] = v38;
      if ( !v38 )
        (*(void (__fastcall **)(_QWORD *))(*v36 + 24LL))(v36);
    }
  }
}

