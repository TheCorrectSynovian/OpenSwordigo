/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049A550
 * Mangled: _ZN5Caver23GUINavigationController24SetCurrentViewControllerERKN5boost10shared_ptrINS_17GUIViewControllerEEE
 * Demangled: Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callers: 1
 *   0x00000000002024B0  Caver::GUINavigationController::SetCurrentViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *
 * Callees: 7
 *   0x00000000001F5100  Caver::GUIView::PurgeRemovedSubviews(void)
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FDB60  Caver::GUINavigationController::~GUINavigationController()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000049AB18  boost::_bi::list4<boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>>::list4(boost::_bi::value<Caver::GUINavigationController *>,boost::_bi::value<boost::shared_ptr<Caver::GUIViewController>>,boost::arg<1>,boost::arg<2>)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 115
 *   insn=0x000000000049A564 string=0x000000000049A568 "`*@"
 *   insn=0x000000000049A570 string=0x000000000049A574 ""
 *   insn=0x000000000049A574 string=0x000000000049A578 "!@"
 *   insn=0x000000000049A57C string=0x000000000049A580 "v*@"
 *   insn=0x000000000049A584 string=0x000000000049A588 "u.@"
 *   insn=0x000000000049A590 string=0x000000000049A594 ""
 *   insn=0x000000000049A5A4 string=0x000000000049A5A8 "6"
 *   insn=0x000000000049A5BC string=0x000000000049A5C0 "\t@"
 *   insn=0x000000000049A5CC string=0x000000000049A5D0 ""
 *   insn=0x000000000049A5DC string=0x000000000049A5E0 "@"
 *   insn=0x000000000049A5E8 string=0x000000000049A5EC "\n"
 *   insn=0x000000000049A5F0 string=0x000000000049A5F4 "@"
 *   insn=0x000000000049A604 string=0x000000000049A608 "6"
 *   insn=0x000000000049A618 string=0x000000000049A61C ""
 *   insn=0x000000000049A620 string=0x000000000049A624 "!"
 *   insn=0x000000000049A62C string=0x000000000049A630 "\t@"
 *   insn=0x000000000049A638 string=0x000000000049A63C ""
 *   insn=0x000000000049A648 string=0x000000000049A64C "u*@"
 *   insn=0x000000000049A648 string=0x000000000049A6E8 "u.@"
 *   insn=0x000000000049A65C string=0x000000000049A660 "@"
 *   insn=0x000000000049A670 string=0x000000000049A680 ""
 *   insn=0x000000000049A674 string=0x000000000049A678 ""
 *   insn=0x000000000049A680 string=0x000000000049A684 "=@"
 *   insn=0x000000000049A690 string=0x000000000049A694 ""
 *   insn=0x000000000049A698 string=0x000000000049A69C "a"
 *   insn=0x000000000049A6A4 string=0x000000000049A6A8 "\t@"
 *   insn=0x000000000049A6B0 string=0x000000000049A6B4 ""
 *   insn=0x000000000049A6B8 string=0x000000000049A6BC "a"
 *   insn=0x000000000049A6C4 string=0x000000000049A6C8 "@"
 *   insn=0x000000000049A6D8 string=0x000000000049A6DC "@"
 *   insn=0x000000000049A6E0 string=0x000000000049A6E4 "W"
 *   insn=0x000000000049A6EC string=0x000000000049A6F0 "5"
 *   insn=0x000000000049A6F0 string=0x000000000049A734 "`"
 *   insn=0x000000000049A6F4 string=0x000000000049A6F8 ""
 *   insn=0x000000000049A708 string=0x000000000049A70C "\t@"
 *   insn=0x000000000049A714 string=0x000000000049A718 ""
 *   insn=0x000000000049A728 string=0x000000000049A72C "@"
 *   insn=0x000000000049A738 string=0x000000000049A73C "h"
 *   insn=0x000000000049A738 string=0x000000000049A750 "u"
 *   insn=0x000000000049A740 string=0x000000000049A744 "@"
 *   insn=0x000000000049A748 string=0x000000000049A74C "`"
 *   insn=0x000000000049A754 string=0x000000000049A764 "gj"
 *   insn=0x000000000049A758 string=0x000000000049A75C ""
 *   insn=0x000000000049A764 string=0x000000000049A768 "5"
 *   insn=0x000000000049A764 string=0x00000000001F5100 "P'"
 *   insn=0x000000000049A76C string=0x000000000049A770 ""
 *   insn=0x000000000049A780 string=0x000000000049A784 "\t@"
 *   insn=0x000000000049A78C string=0x000000000049A790 ""
 *   insn=0x000000000049A7A0 string=0x000000000049A7A4 "@"
 *   insn=0x000000000049A7B8 string=0x000000000049A7BC "*"
 *   insn=0x000000000049A7B8 string=0x000000000049A7C8 "u.@"
 *   insn=0x000000000049A7BC string=0x000000000049A7C0 "J"
 *   insn=0x000000000049A7C0 string=0x000000000049A7C4 "*"
 *   insn=0x000000000049A7C8 string=0x000000000049A7CC "h&"
 *   insn=0x000000000049A7CC string=0x000000000049A7D0 "5"
 *   insn=0x000000000049A7D4 string=0x000000000049A7D8 ""
 *   insn=0x000000000049A7E8 string=0x000000000049A7EC "\t@"
 *   insn=0x000000000049A7F4 string=0x000000000049A7F8 ""
 *   insn=0x000000000049A808 string=0x000000000049A80C "@"
 *   insn=0x000000000049A818 string=0x000000000049A81C "v"
 *   insn=0x000000000049A834 string=0x000000000049A838 "\t@"
 *   insn=0x000000000049A840 string=0x000000000049A844 ""
 *   insn=0x000000000049A854 string=0x000000000049A858 "@"
 *   insn=0x000000000049A85C string=0x000000000049A860 "V"
 *   insn=0x000000000049A860 string=0x000000000049A888 "h"
 *   insn=0x000000000049A86C string=0x000000000049A870 "@"
 *   insn=0x000000000049A87C string=0x000000000049A880 "U"
 *   insn=0x000000000049A890 string=0x000000000049A894 "1@"
 *   insn=0x000000000049A89C string=0x000000000049A8A0 "i""
 *   insn=0x000000000049A8A0 string=0x000000000049A8A4 "\t!"
 *   insn=0x000000000049A8C4 string=0x000000000049A8C8 ""
 *   insn=0x000000000049A8CC string=0x000000000049A8D0 "a"
 *   insn=0x000000000049A8D4 string=0x000000000049A8D8 "\t@"
 *   insn=0x000000000049A8E4 string=0x000000000049A8E8 ""
 *   insn=0x000000000049A8EC string=0x000000000049A8F0 "a"
 *   insn=0x000000000049A8F4 string=0x000000000049A8F8 "@"
 *   insn=0x000000000049A900 string=0x000000000049A904 "&"
 *   insn=0x000000000049A910 string=0x000000000049A914 ""
 *   insn=0x000000000049A920 string=0x000000000049A924 "\t@"
 *   insn=0x000000000049A930 string=0x000000000049A934 ""
 *   insn=0x000000000049A940 string=0x000000000049A944 "@"
 *   insn=0x000000000049A954 string=0x000000000049A958 "5"
 *   insn=0x000000000049A95C string=0x000000000049A960 ""
 *   insn=0x000000000049A96C string=0x000000000049A970 "\t@"
 *   insn=0x000000000049A97C string=0x000000000049A980 ""
 *   insn=0x000000000049A98C string=0x000000000049A990 "@"
 *   insn=0x000000000049A9A0 string=0x000000000049A9A4 "j"
 *   insn=0x000000000049A9B4 string=0x000000000049A9B8 "h"
 *   insn=0x000000000049A9BC string=0x000000000049A9C0 ""
 *   insn=0x000000000049A9C0 string=0x000000000049A9C4 "t6@"
 *   insn=0x000000000049A9C4 string=0x000000000049A9C8 "\tA"
 *   insn=0x000000000049A9C8 string=0x000000000049A9CC "!"
 *   insn=0x000000000049A9CC string=0x000000000049A9D0 "i"
 *   insn=0x000000000049A9D0 string=0x000000000049A9D4 "h&"
 *   insn=0x000000000049A9D4 string=0x000000000049A9D8 "4"
 *   insn=0x000000000049A9D8 string=0x000000000049AA1C "t.@"
 *   insn=0x000000000049A9DC string=0x000000000049A9E0 ""
 *   insn=0x000000000049A9EC string=0x000000000049A9F0 "\t@"
 *   insn=0x000000000049A9FC string=0x000000000049AA00 ""
 *   insn=0x000000000049AA0C string=0x000000000049AA10 "@"
 *   insn=0x000000000049AA1C string=0x000000000049AA20 "4"
 *   insn=0x000000000049AA24 string=0x000000000049AA28 ""
 *   insn=0x000000000049AA34 string=0x000000000049AA38 "\t@"
 *   insn=0x000000000049AA44 string=0x000000000049AA48 ""
 *   insn=0x000000000049AA54 string=0x000000000049AA58 "@"
 *   insn=0x000000000049AA74 string=0x00000000001F6590 "0'"
 *   insn=0x000000000049AA84 string=0x000000000049AA88 "5"
 *   insn=0x000000000049AA8C string=0x000000000049AA90 ""
 *   insn=0x000000000049AA9C string=0x000000000049AAA0 "\t@"
 *   insn=0x000000000049AAAC string=0x000000000049AAB0 ""
 *   insn=0x000000000049AABC string=0x000000000049AAC0 "@"
 *   insn=0x000000000049AAD4 string=0x000000000049AAD8 "{"
 *   insn=0x000000000049AAF0 string=0x00000000001FDB60 "0'"
 *   insn=0x000000000049AB00 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049AB10 string=0x000000000049AB14 "l"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUINavigationController::SetCurrentViewController(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // x0
  _QWORD *v5; // x22
  _QWORD *v6; // x21
  __int64 v7; // x8
  _QWORD *v8; // x22
  bool v9; // w23
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x21
  __int64 v14; // x0
  _QWORD *v15; // x21
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x21
  __int64 v19; // x8
  __int64 v20; // x8
  Caver::GUIView *v21; // x0
  _QWORD *v22; // x21
  __int64 v23; // x8
  __int64 v24; // x8
  _QWORD *v25; // x8
  __int64 v26; // x9
  _QWORD *v27; // x21
  __int64 v28; // x8
  __int64 v29; // x8
  _QWORD *v30; // x21
  __int64 v31; // x22
  _QWORD *v32; // x21
  __int64 v33; // x8

  result = a1[10];
  if ( !result )
    goto LABEL_36;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)result + 64LL))(result);
  v5 = (_QWORD *)a1[10];
  v5[8] = 0;
  v6 = (_QWORD *)a1[11];
  if ( v6 )
    ++v6[1];
  v7 = v5[3];
  if ( !v7 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    v7 = v5[3];
    v8 = (_QWORD *)v5[4];
    if ( v8 )
      goto LABEL_6;
LABEL_10:
    v9 = v7 == 0;
    goto LABEL_11;
  }
  v8 = (_QWORD *)v5[4];
  if ( !v8 )
    goto LABEL_10;
LABEL_6:
  v9 = v7 == 0;
  if ( !v8[1] )
  {
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
    v10 = v8[2] - 1LL;
    v8[2] = v10;
    if ( !v10 )
      (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
  }
LABEL_11:
  if ( !v6
    || (v11 = v6[1] - 1LL, (v6[1] = v11) != 0)
    || ((*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6), v12 = v6[2] - 1LL, (v6[2] = v12) != 0) )
  {
    if ( !v9 )
    {
LABEL_15:
      v13 = (_QWORD *)a1[10];
      v14 = v13[3];
      if ( !v14 )
      {
        (*(void (__fastcall **)(_QWORD))(*v13 + 24LL))(a1[10]);
        v14 = v13[3];
      }
      v15 = (_QWORD *)v13[4];
      if ( v15 )
        ++v15[1];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 120LL))(v14);
      if ( v15 )
      {
        v16 = v15[1] - 1LL;
        v15[1] = v16;
        if ( !v16 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
          v17 = v15[2] - 1LL;
          v15[2] = v17;
          if ( !v17 )
            (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
        }
      }
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*v6 + 24LL))(v6);
    if ( !v9 )
      goto LABEL_15;
  }
  v18 = (_QWORD *)a1[11];
  a1[10] = 0;
  a1[11] = 0;
  if ( v18 )
  {
    v19 = v18[1] - 1LL;
    v18[1] = v19;
    if ( !v19 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
      v20 = v18[2] - 1LL;
      v18[2] = v20;
      if ( !v20 )
        (*(void (__fastcall **)(_QWORD *))(*v18 + 24LL))(v18);
    }
  }
  v21 = (Caver::GUIView *)a1[3];
  if ( !v21 )
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
    v21 = (Caver::GUIView *)a1[3];
  }
  v22 = (_QWORD *)a1[4];
  if ( v22 )
    ++v22[1];
  result = Caver::GUIView::PurgeRemovedSubviews(v21);
  if ( v22 )
  {
    v23 = v22[1] - 1LL;
    v22[1] = v23;
    if ( !v23 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
LABEL_36:
  v25 = (_QWORD *)*a2;
  if ( !*a2 )
    return result;
  v26 = a2[1];
  if ( v26 )
    ++*(_QWORD *)(v26 + 8);
  v27 = (_QWORD *)a1[11];
  a1[10] = v25;
  a1[11] = v26;
  if ( v27 )
  {
    v28 = v27[1] - 1LL;
    v27[1] = v28;
    if ( !v28 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
      v29 = v27[2] - 1LL;
      v27[2] = v29;
      if ( !v29 )
        result = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 24LL))(v27);
    }
  }
  v30 = (_QWORD *)*a2;
  v31 = *(_QWORD *)(*a2 + 24LL);
  if ( v31 )
  {
    v32 = (_QWORD *)v30[4];
    if ( !v32 )
      goto LABEL_50;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(*v30 + 24LL))(*a2);
    v31 = v30[3];
    v32 = (_QWORD *)v30[4];
    if ( !v32 )
      goto LABEL_50;
  }
  if ( !v32[1] )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
    v33 = v32[2] - 1LL;
    v32[2] = v33;
    if ( !v33 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD *))(*v32 + 24LL))(v32);
      if ( !v31 )
        goto LABEL_52;
      goto LABEL_51;
    }
  }
LABEL_50:
  if ( v31 )
LABEL_51:
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 96LL))(a1, *a2);
LABEL_52:
  *(_QWORD *)(*a2 + 64LL) = a1 + 9;
  return result;
}

