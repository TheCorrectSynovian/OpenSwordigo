/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000036C584
 * Mangled: _ZN5Caver22MainMenuViewController6UpdateEf
 * Demangled: Caver::MainMenuViewController::Update(float)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F3470  Caver::MainMenuView::SetPrivacyButtonTitle(std::string const&)
 *   0x00000000001F4320  Caver::MainMenuViewController::ShowPrivacyPolicyConsentDialog(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F93B0  Caver::OnlineController::SharedController(void)
 *   0x00000000001FF270  Caver::StoreController::SharedController(void)
 *   0x00000000002015A0  Caver::MainMenuViewController::ShowNeutralAgeScreenDialog(void)
 *   0x0000000000202490  Caver::GUIViewController::Update(float)
 *   0x0000000000202D50  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 140
 *   insn=0x000000000036C598 string=0x000000000036C59C "U"
 *   insn=0x000000000036C5A0 string=0x000000000036C5A4 ""
 *   insn=0x000000000036C5B0 string=0x000000000036C5B4 "`"
 *   insn=0x000000000036C5B4 string=0x000000000036C5B8 "h"
 *   insn=0x000000000036C5C4 string=0x000000000036C5C8 "`"
 *   insn=0x000000000036C5C8 string=0x000000000036C5CC ""
 *   insn=0x000000000036C5CC string=0x000000000036C62C "H\n"
 *   insn=0x000000000036C5D0 string=0x000000000036C5D4 "t"
 *   insn=0x000000000036C5D0 string=0x000000000036C684 "h"
 *   insn=0x000000000036C5D4 string=0x000000000036C5D8 "T"
 *   insn=0x000000000036C5E0 string=0x000000000036C5E4 "\n"
 *   insn=0x000000000036C5EC string=0x000000000036C6A8 "hfD9H"
 *   insn=0x000000000036C5F4 string=0x000000000036C5F8 "\t@"
 *   insn=0x000000000036C600 string=0x000000000036C604 ""
 *   insn=0x000000000036C614 string=0x000000000036C618 "@"
 *   insn=0x000000000036C61C string=0x000000000036C620 "hfD9"
 *   insn=0x000000000036C624 string=0x000000000036C628 """
 *   insn=0x000000000036C624 string=0x000000000036C794 "hfD9h"
 *   insn=0x000000000036C628 string=0x000000000036C6B0 "@3"
 *   insn=0x000000000036C62C string=0x000000000036C630 "t"
 *   insn=0x000000000036C62C string=0x000000000036C774 "h"
 *   insn=0x000000000036C64C string=0x000000000036C650 "\t@"
 *   insn=0x000000000036C658 string=0x000000000036C65C ""
 *   insn=0x000000000036C66C string=0x000000000036C670 "@"
 *   insn=0x000000000036C674 string=0x000000000036C678 "hfD9\t"
 *   insn=0x000000000036C678 string=0x000000000036C67C "\t"
 *   insn=0x000000000036C680 string=0x000000000036C884 "s:@"
 *   insn=0x000000000036C688 string=0x000000000036C68C "@"
 *   insn=0x000000000036C690 string=0x000000000036C694 "h"
 *   insn=0x000000000036C694 string=0x000000000036C698 "t"
 *   insn=0x000000000036C6A0 string=0x000000000036C6A4 "\t"
 *   insn=0x000000000036C6A8 string=0x000000000036C6AC "H"
 *   insn=0x000000000036C6B0 string=0x000000000036C6B4 ""
 *   insn=0x000000000036C6B0 string=0x00000000001F93B0 "0'"
 *   insn=0x000000000036C6B4 string=0x000000000036C6B8 "%@"
 *   insn=0x000000000036C6C4 string=0x000000000036C6C8 ""
 *   insn=0x000000000036C6C8 string=0x000000000036C6CC ")@"
 *   insn=0x000000000036C6D4 string=0x000000000036C6D8 "63"
 *   insn=0x000000000036C6D8 string=0x000000000036C6DC ""
 *   insn=0x000000000036C6DC string=0x000000000036C6E0 ""
 *   insn=0x000000000036C6E4 string=0x000000000036C6E8 "`"
 *   insn=0x000000000036C6E8 string=0x000000000036C6EC "13"
 *   insn=0x000000000036C6EC string=0x000000000036C6F0 ""
 *   insn=0x000000000036C6F0 string=0x000000000036C6F4 ")@"
 *   insn=0x000000000036C6FC string=0x000000000036C700 ",3"
 *   insn=0x000000000036C6FC string=0x000000000036C8F0 "hv@"
 *   insn=0x000000000036C700 string=0x000000000036C704 ""
 *   insn=0x000000000036C704 string=0x000000000036C708 "Q@"
 *   insn=0x000000000036C70C string=0x000000000036C710 " "
 *   insn=0x000000000036C718 string=0x000000000036C71C "%3"
 *   insn=0x000000000036C71C string=0x000000000036C720 ""
 *   insn=0x000000000036C720 string=0x000000000036C724 "=@"
 *   insn=0x000000000036C728 string=0x000000000036C72C "@\n"
 *   insn=0x000000000036C72C string=0x000000000036C730 " 3"
 *   insn=0x000000000036C730 string=0x000000000036C734 ""
 *   insn=0x000000000036C734 string=0x000000000036C738 "9@"
 *   insn=0x000000000036C740 string=0x000000000036C744 "3"
 *   insn=0x000000000036C744 string=0x000000000036C748 ""
 *   insn=0x000000000036C748 string=0x000000000036C74C "-@"
 *   insn=0x000000000036C754 string=0x000000000036C758 "h~@"
 *   insn=0x000000000036C764 string=0x000000000036C768 "hfD9"
 *   insn=0x000000000036C764 string=0x00000000001F4320 "P'"
 *   insn=0x000000000036C76C string=0x000000000036C770 "E"
 *   insn=0x000000000036C778 string=0x000000000036C77C "@"
 *   insn=0x000000000036C780 string=0x000000000036C784 "h"
 *   insn=0x000000000036C784 string=0x000000000036C788 "t"
 *   insn=0x000000000036C788 string=0x000000000036C78C "t"
 *   insn=0x000000000036C794 string=0x000000000036C798 "h"
 *   insn=0x000000000036C79C string=0x000000000036C7A0 ""
 *   insn=0x000000000036C7A0 string=0x000000000036C7A4 "-@"
 *   insn=0x000000000036C7A8 string=0x000000000036C7AC "s:@"
 *   insn=0x000000000036C7AC string=0x000000000036C7B0 "h"
 *   insn=0x000000000036C7BC string=0x000000000058FAE8 "Privacy Options"
 *   insn=0x000000000036C7D4 string=0x000000000036C7D8 "&"
 *   insn=0x000000000036C7D8 string=0x00000000001F3470 "P'"
 *   insn=0x000000000036C7E0 string=0x000000000036C7E4 ")"
 *   insn=0x000000000036C7F4 string=0x000000000036C7F8 ")=G"
 *   insn=0x000000000036C7F8 string=0x000000000036C7FC "!"
 *   insn=0x000000000036C800 string=0x000000000036C804 "\t"
 *   insn=0x000000000036C800 string=0x000000000036C930 "\t"
 *   insn=0x000000000036C804 string=0x000000000036C808 "*"
 *   insn=0x000000000036C808 string=0x000000000036C80C "\n"
 *   insn=0x000000000036C810 string=0x000000000036C814 "J"
 *   insn=0x000000000036C814 string=0x000000000036C93C "?"
 *   insn=0x000000000036C818 string=0x000000000058FB5B "Privacy Policy"
 *   insn=0x000000000036C83C string=0x000000000036C840 ")"
 *   insn=0x000000000036C850 string=0x000000000036C854 ")=G"
 *   insn=0x000000000036C854 string=0x000000000036C858 "!"
 *   insn=0x000000000036C85C string=0x000000000036C860 "\t"
 *   insn=0x000000000036C860 string=0x000000000036C864 "*"
 *   insn=0x000000000036C864 string=0x000000000036C868 "\n"
 *   insn=0x000000000036C86C string=0x000000000036C870 "3"
 *   insn=0x000000000036C874 string=0x000000000036C878 "6Y"
 *   insn=0x000000000036C878 string=0x000000000036C87C "hfD9"
 *   insn=0x000000000036C884 string=0x000000000036C888 "h"
 *   insn=0x000000000036C8B4 string=0x000000000036C8B8 ")"
 *   insn=0x000000000036C8C0 string=0x000000000036C8C4 "A"
 *   insn=0x000000000036C8D4 string=0x000000000036C950 "`&"
 *   insn=0x000000000036C8F0 string=0x000000000036C8F4 ""
 *   insn=0x000000000036C8F8 string=0x000000000036C8FC ")S"
 *   insn=0x000000000036C8FC string=0x000000000036C900 "hfD9"
 *   insn=0x000000000036C90C string=0x000000000036C910 ")=G"
 *   insn=0x000000000036C910 string=0x000000000036C914 "!"
 *   insn=0x000000000036C918 string=0x000000000036C91C "\t"
 *   insn=0x000000000036C91C string=0x000000000036C920 "*"
 *   insn=0x000000000036C920 string=0x000000000036C924 "\n"
 *   insn=0x000000000036C930 string=0x000000000036C934 "*"
 *   insn=0x000000000036C934 string=0x000000000036C938 "\n"
 *   insn=0x000000000036C93C string=0x000000000036C940 "L"
 *   insn=0x000000000036C950 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000036C958 string=0x000000000036C95C "J"
 *   insn=0x000000000036C960 string=0x000000000036C964 "(a"
 *   insn=0x000000000036C968 string=0x000000000036C96C " "
 *   insn=0x000000000036C970 string=0x000000000036C974 "J=G"
 *   insn=0x000000000036C974 string=0x000000000036C978 ")!"
 *   insn=0x000000000036C97C string=0x000000000036C980 "*"
 *   insn=0x000000000036C97C string=0x000000000036CA34 "*"
 *   insn=0x000000000036C980 string=0x000000000036C984 "K"
 *   insn=0x000000000036C984 string=0x000000000036C988 "+"
 *   insn=0x000000000036C98C string=0x000000000036C990 """
 *   insn=0x000000000036C990 string=0x000000000036CA18 "_"
 *   insn=0x000000000036C998 string=0x000000000036C99C "J"
 *   insn=0x000000000036C9A0 string=0x000000000036C9A4 "(a"
 *   insn=0x000000000036C9A8 string=0x000000000036C9AC " "
 *   insn=0x000000000036C9B0 string=0x000000000036C9B4 "J=G"
 *   insn=0x000000000036C9B4 string=0x000000000036C9B8 ")!"
 *   insn=0x000000000036C9BC string=0x000000000036C9C0 "*"
 *   insn=0x000000000036C9C0 string=0x000000000036C9C4 "K"
 *   insn=0x000000000036C9C4 string=0x000000000036C9C8 "+"
 *   insn=0x000000000036C9E0 string=0x000000000036C9E4 "J"
 *   insn=0x000000000036C9E8 string=0x000000000036C9EC "(a"
 *   insn=0x000000000036C9F8 string=0x000000000036C9FC "J=G"
 *   insn=0x000000000036C9FC string=0x000000000036CA00 ")!"
 *   insn=0x000000000036CA04 string=0x000000000036CA08 "*"
 *   insn=0x000000000036CA08 string=0x000000000036CA0C "K"
 *   insn=0x000000000036CA0C string=0x000000000036CA10 "+"
 *   insn=0x000000000036CA24 string=0x000000000036CA28 "_"
 *   insn=0x000000000036CA34 string=0x000000000036CA38 "K"
 *   insn=0x000000000036CA38 string=0x000000000036CA3C "+"
 *   insn=0x000000000036CA3C string=0x000000000036CA40 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MainMenuViewController::Update(Caver::MainMenuViewController *this, float a2)
{
  __int64 v4; // x0
  __int64 v5; // x8
  float v6; // s0
  _QWORD *v7; // x20
  __int64 v8; // x9
  __int64 v9; // x8
  _QWORD *v10; // x20
  __int64 v11; // x9
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  Caver::OnlineController *v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  Caver::OnlineController *v20; // x0
  __int64 v21; // x0
  Caver::OnlineController *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  char v25; // w0
  void *v26; // x0
  unsigned int *v27; // x8
  int v28; // w9
  _QWORD v29[3]; // [xsp+8h] [xbp-38h] BYREF

  v29[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::GUIViewController::Update(this, a2);
  v5 = *((_QWORD *)this + 3);
  v6 = *((float *)this + 69) + a2;
  *((float *)this + 69) = v6;
  if ( v6 <= 0.5 )
  {
    if ( v5 )
    {
      v10 = (_QWORD *)*((_QWORD *)this + 4);
      if ( v10 )
      {
LABEL_10:
        v11 = v10[1];
        *(_BYTE *)(v5 + 229) = 0;
        v10[1] = v11;
        if ( !v11 )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
          v12 = v10[2] - 1LL;
          v10[2] = v12;
          if ( !v12 )
          {
            v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
            if ( !*((_BYTE *)this + 281) )
              goto LABEL_42;
            goto LABEL_32;
          }
        }
LABEL_31:
        if ( !*((_BYTE *)this + 281) )
          goto LABEL_42;
        goto LABEL_32;
      }
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(Caver::MainMenuViewController *))(*(_QWORD *)this + 24LL))(this);
      v5 = *((_QWORD *)this + 3);
      v10 = (_QWORD *)*((_QWORD *)this + 4);
      if ( v10 )
        goto LABEL_10;
    }
    *(_BYTE *)(v5 + 229) = 0;
    goto LABEL_31;
  }
  if ( !v5 )
  {
    v4 = (*(__int64 (__fastcall **)(Caver::MainMenuViewController *))(*(_QWORD *)this + 24LL))(this);
    v5 = *((_QWORD *)this + 3);
    v7 = (_QWORD *)*((_QWORD *)this + 4);
    if ( v7 )
      goto LABEL_4;
LABEL_15:
    *(_BYTE *)(v5 + 229) = 1;
    goto LABEL_16;
  }
  v7 = (_QWORD *)*((_QWORD *)this + 4);
  if ( !v7 )
    goto LABEL_15;
LABEL_4:
  v8 = v7[1];
  *(_BYTE *)(v5 + 229) = 1;
  v7[1] = v8;
  if ( !v8 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    v9 = v7[2] - 1LL;
    v7[2] = v9;
    if ( !v9 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
      if ( *((_BYTE *)this + 281) )
        goto LABEL_31;
      goto LABEL_17;
    }
  }
LABEL_16:
  if ( *((_BYTE *)this + 281) )
    goto LABEL_31;
LABEL_17:
  v13 = Caver::OnlineController::SharedController((Caver::OnlineController *)v4);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL))(v13);
  if ( (v4 & 1) == 0 )
    goto LABEL_31;
  v14 = Caver::StoreController::SharedController((Caver::StoreController *)v4);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 80LL))(v14);
  if ( (v4 & 1) == 0 )
    goto LABEL_31;
  v15 = Caver::OnlineController::SharedController((Caver::OnlineController *)v4);
  v16 = (Caver::OnlineController *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 272LL))(v15);
  if ( ((unsigned __int8)v16 & 1) == 0 )
    goto LABEL_41;
  v17 = Caver::OnlineController::SharedController(v16);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 80LL))(v17);
  if ( (v4 & 1) != 0 )
  {
    v18 = Caver::OnlineController::SharedController((Caver::OnlineController *)v4);
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 160LL))(v18);
    if ( !(_DWORD)v4 )
      goto LABEL_31;
    if ( (_DWORD)v4 != 2 )
    {
      v19 = Caver::OnlineController::SharedController((Caver::OnlineController *)v4);
      v20 = (Caver::OnlineController *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 120LL))(v19);
      if ( ((unsigned __int8)v20 & 1) == 0 )
      {
        v21 = Caver::OnlineController::SharedController(v20);
        v22 = (Caver::OnlineController *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 112LL))(v21);
        if ( ((unsigned __int8)v22 & 1) != 0 )
        {
          v23 = Caver::OnlineController::SharedController(v22);
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 88LL))(v23);
          if ( (v4 & 1) != 0 )
          {
            if ( !*((_QWORD *)this + 31) )
            {
              Caver::MainMenuViewController::ShowPrivacyPolicyConsentDialog(this);
              if ( !*((_BYTE *)this + 281) )
                goto LABEL_42;
LABEL_32:
              v24 = Caver::OnlineController::SharedController((Caver::OnlineController *)v4);
              v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 88LL))(v24);
              *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 14) + 360LL) + 228LL) = 0;
              if ( (v25 & 1) != 0 )
              {
                sub_566BB8((int)v29, "Privacy Options");
                Caver::MainMenuView::SetPrivacyButtonTitle();
                v26 = (void *)(v29[0] - 24LL);
                if ( (__int64 *)(v29[0] - 24LL) == &qword_6FD2E0 )
                  return;
                v27 = (unsigned int *)(v29[0] - 8LL);
                if ( &pthread_create )
                {
                  do
                    v28 = __ldaxr(v27);
                  while ( __stlxr(v28 - 1, v27) );
                  goto LABEL_51;
                }
              }
              else
              {
                sub_566BB8((int)v29, "Privacy Policy");
                Caver::MainMenuView::SetPrivacyButtonTitle();
                v26 = (void *)(v29[0] - 24LL);
                if ( (__int64 *)(v29[0] - 24LL) == &qword_6FD2E0 )
                  return;
                v27 = (unsigned int *)(v29[0] - 8LL);
                if ( &pthread_create )
                {
                  do
                    v28 = __ldaxr(v27);
                  while ( __stlxr(v28 - 1, v27) );
                  goto LABEL_51;
                }
              }
              goto LABEL_50;
            }
            goto LABEL_31;
          }
        }
      }
    }
LABEL_41:
    v4 = Caver::MainMenuViewController::CompleteInitialPrivacy(this);
    if ( !*((_BYTE *)this + 281) )
      goto LABEL_42;
    goto LABEL_32;
  }
  if ( *((_QWORD *)this + 29) )
    goto LABEL_31;
  Caver::MainMenuViewController::ShowNeutralAgeScreenDialog(this);
  if ( *((_BYTE *)this + 281) )
    goto LABEL_32;
LABEL_42:
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 14) + 360LL) + 228LL) = 0;
  sub_566BB8((int)v29, "Privacy Policy");
  Caver::MainMenuView::SetPrivacyButtonTitle();
  v26 = (void *)(v29[0] - 24LL);
  if ( (__int64 *)(v29[0] - 24LL) == &qword_6FD2E0 )
    return;
  v27 = (unsigned int *)(v29[0] - 8LL);
  if ( &pthread_create )
  {
    do
      v28 = __ldaxr(v27);
    while ( __stlxr(v28 - 1, v27) );
    goto LABEL_51;
  }
LABEL_50:
  v28 = (*v27)--;
LABEL_51:
  if ( v28 <= 0 )
    operator delete(v26);
}

