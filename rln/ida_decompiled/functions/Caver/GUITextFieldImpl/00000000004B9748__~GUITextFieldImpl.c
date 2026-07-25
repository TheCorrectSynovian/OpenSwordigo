/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B9748
 * Mangled: _ZN5Caver16GUITextFieldImplD2Ev
 * Demangled: Caver::GUITextFieldImpl::~GUITextFieldImpl()
 *
 * Callers: 2
 *   0x00000000001F8780  Caver::GUITextFieldImpl::~GUITextFieldImpl()
 *   0x00000000004B9320  Caver::GUITextFieldImpl::GUITextFieldImpl(void)
 *
 * Callees: 8
 *   0x00000000001F4DB0  Caver::GUIControl::~GUIControl()
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8050  Caver::StopTextInputWithDelegate(Caver::ITextInputDelegate *)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004B9B68  Caver::GUITextFieldImpl::StopEditing(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 121
 *   insn=0x00000000004B9758 string=0x00000000004B975C "U"
 *   insn=0x00000000004B9768 string=0x00000000004B976C "h"
 *   insn=0x00000000004B976C string=0x00000000004B9770 "AD"
 *   insn=0x00000000004B9770 string=0x00000000004B9774 "ibF9\nA"
 *   insn=0x00000000004B9774 string=0x00000000004B9778 "\nA"
 *   insn=0x00000000004B9778 string=0x00000000004B977C "!"
 *   insn=0x00000000004B977C string=0x00000000004B9780 "j"
 *   insn=0x00000000004B9780 string=0x00000000004B9784 "h"
 *   insn=0x00000000004B9788 string=0x00000000004B978C "`"
 *   insn=0x00000000004B9788 string=0x00000000004B9798 "h"
 *   insn=0x00000000004B978C string=0x00000000004B9790 "0"
 *   insn=0x00000000004B9790 string=0x00000000001F8050 "0'"
 *   insn=0x00000000004B9798 string=0x00000000004B979C "t"
 *   insn=0x00000000004B97A8 string=0x00000000004B97AC "A\t"
 *   insn=0x00000000004B97AC string=0x00000000004B97B0 "h"
 *   insn=0x00000000004B97AC string=0x00000000004B98D4 "I"
 *   insn=0x00000000004B97BC string=0x00000000004B97C0 "t"
 *   insn=0x00000000004B97BC string=0x00000000004B98F8 "I"
 *   insn=0x00000000004B97C0 string=0x00000000004B97C4 "4"
 *   insn=0x00000000004B97C4 string=0x00000000004B9808 "t"
 *   insn=0x00000000004B97C8 string=0x00000000004B97CC ""
 *   insn=0x00000000004B97D8 string=0x00000000004B97DC "\t@"
 *   insn=0x00000000004B97E8 string=0x00000000004B97EC ""
 *   insn=0x00000000004B97F8 string=0x00000000004B97FC "@"
 *   insn=0x00000000004B9808 string=0x00000000004B980C "4"
 *   insn=0x00000000004B980C string=0x00000000004B9850 "h"
 *   insn=0x00000000004B9810 string=0x00000000004B9814 ""
 *   insn=0x00000000004B9820 string=0x00000000004B9824 "\t@"
 *   insn=0x00000000004B9830 string=0x00000000004B9834 ""
 *   insn=0x00000000004B9840 string=0x00000000004B9844 "@"
 *   insn=0x00000000004B9850 string=0x00000000004B9854 "t"
 *   insn=0x00000000004B9854 string=0x00000000004B9858 ""
 *   insn=0x00000000004B9858 string=0x00000000004B985C "A"
 *   insn=0x00000000004B985C string=0x00000000004B9860 "h"
 *   insn=0x00000000004B9860 string=0x00000000004B9864 "4"
 *   insn=0x00000000004B9868 string=0x00000000004B986C ""
 *   insn=0x00000000004B9878 string=0x00000000004B987C "\t@"
 *   insn=0x00000000004B9888 string=0x00000000004B988C ""
 *   insn=0x00000000004B9898 string=0x00000000004B989C "@"
 *   insn=0x00000000004B98A8 string=0x00000000004B98AC "A"
 *   insn=0x00000000004B98AC string=0x00000000001F4DB0 "P'"
 *   insn=0x00000000004B98B8 string=0x00000000004B98BC "A"
 *   insn=0x00000000004B98BC string=0x00000000004B9964 "["
 *   insn=0x00000000004B98D4 string=0x00000000004B98D8 ")=G"
 *   insn=0x00000000004B98D8 string=0x00000000004B98DC "!"
 *   insn=0x00000000004B98E0 string=0x00000000004B98E4 "\t"
 *   insn=0x00000000004B98E0 string=0x00000000004B991C "\t"
 *   insn=0x00000000004B98E4 string=0x00000000004B98E8 "*"
 *   insn=0x00000000004B98E8 string=0x00000000004B98EC "\n"
 *   insn=0x00000000004B98F0 string=0x00000000004B98F4 ""
 *   insn=0x00000000004B98F4 string=0x00000000004B9928 "?"
 *   insn=0x00000000004B98F8 string=0x00000000004B98FC ")=G"
 *   insn=0x00000000004B98FC string=0x00000000004B9900 "!"
 *   insn=0x00000000004B9904 string=0x00000000004B9908 "\t"
 *   insn=0x00000000004B9904 string=0x00000000004B993C "\t"
 *   insn=0x00000000004B9908 string=0x00000000004B990C "*"
 *   insn=0x00000000004B990C string=0x00000000004B9910 "\n"
 *   insn=0x00000000004B9918 string=0x00000000004B9948 "?"
 *   insn=0x00000000004B991C string=0x00000000004B9920 "*"
 *   insn=0x00000000004B9920 string=0x00000000004B9924 "\n"
 *   insn=0x00000000004B9928 string=0x00000000004B992C ","
 *   insn=0x00000000004B993C string=0x00000000004B9940 "*"
 *   insn=0x00000000004B9940 string=0x00000000004B9944 "\n"
 *   insn=0x00000000004B9954 string=0x00000000004B9958 "t"
 *   insn=0x00000000004B9958 string=0x00000000004B995C "t"
 *   insn=0x00000000004B9964 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004B9970 string=0x00000000004B9974 "["
 *   insn=0x00000000004B997C string=0x00000000004B9980 "@"
 *   insn=0x00000000004B9980 string=0x00000000004B9A80 "h"
 *   insn=0x00000000004B9984 string=0x00000000004B9988 "u"
 *   insn=0x00000000004B998C string=0x00000000004B9990 "<"
 *   insn=0x00000000004B9994 string=0x00000000004B9998 "u"
 *   insn=0x00000000004B99A0 string=0x00000000004B99A4 "(a"
 *   insn=0x00000000004B99AC string=0x00000000004B99B0 "h"
 *   insn=0x00000000004B99AC string=0x00000000004B9AE8 "J"
 *   insn=0x00000000004B99BC string=0x00000000004B99C0 "I"
 *   insn=0x00000000004B99BC string=0x00000000004B99F0 "u"
 *   insn=0x00000000004B99C0 string=0x00000000004B99C4 ")=G"
 *   insn=0x00000000004B99C4 string=0x00000000004B99C8 "!"
 *   insn=0x00000000004B99C8 string=0x00000000004B99CC ")"
 *   insn=0x00000000004B99CC string=0x00000000004B99D0 "\t"
 *   insn=0x00000000004B99CC string=0x00000000004B9B30 "\t"
 *   insn=0x00000000004B99D0 string=0x00000000004B99D4 "*"
 *   insn=0x00000000004B99D4 string=0x00000000004B99D8 "\n"
 *   insn=0x00000000004B99DC string=0x00000000004B99E0 "?"
 *   insn=0x00000000004B99E0 string=0x00000000004B99E4 "l"
 *   insn=0x00000000004B99E8 string=0x00000000004B99EC "n"
 *   insn=0x00000000004B99F0 string=0x00000000004B99F4 "5"
 *   insn=0x00000000004B99F4 string=0x00000000004B9A38 "u"
 *   insn=0x00000000004B99F8 string=0x00000000004B99FC ""
 *   insn=0x00000000004B9A08 string=0x00000000004B9A0C "\t@"
 *   insn=0x00000000004B9A18 string=0x00000000004B9A1C ""
 *   insn=0x00000000004B9A28 string=0x00000000004B9A2C "@"
 *   insn=0x00000000004B9A38 string=0x00000000004B9A3C "5"
 *   insn=0x00000000004B9A40 string=0x00000000004B9A44 ""
 *   insn=0x00000000004B9A50 string=0x00000000004B9A54 "\t@"
 *   insn=0x00000000004B9A60 string=0x00000000004B9A64 ""
 *   insn=0x00000000004B9A70 string=0x00000000004B9A74 "@"
 *   insn=0x00000000004B9A80 string=0x00000000004B9A84 "u"
 *   insn=0x00000000004B9A84 string=0x00000000004B9A88 ""
 *   insn=0x00000000004B9A88 string=0x00000000004B9A8C "A"
 *   insn=0x00000000004B9A8C string=0x00000000004B9A90 "h"
 *   insn=0x00000000004B9A90 string=0x00000000004B9A94 "5"
 *   insn=0x00000000004B9A98 string=0x00000000004B9A9C ""
 *   insn=0x00000000004B9AA8 string=0x00000000004B9AAC "\t@"
 *   insn=0x00000000004B9AB8 string=0x00000000004B9ABC ""
 *   insn=0x00000000004B9AC8 string=0x00000000004B9ACC "@"
 *   insn=0x00000000004B9AE0 string=0x00000000004B9AE4 "x"
 *   insn=0x00000000004B9AE8 string=0x00000000004B9AEC "J=G"
 *   insn=0x00000000004B9AEC string=0x00000000004B9AF0 ")!"
 *   insn=0x00000000004B9AF4 string=0x00000000004B9AF8 "*"
 *   insn=0x00000000004B9AF4 string=0x00000000004B9B0C "*"
 *   insn=0x00000000004B9AF8 string=0x00000000004B9AFC "K"
 *   insn=0x00000000004B9AFC string=0x00000000004B9B00 "+"
 *   insn=0x00000000004B9B08 string=0x00000000004B9B18 "_"
 *   insn=0x00000000004B9B0C string=0x00000000004B9B10 "K"
 *   insn=0x00000000004B9B10 string=0x00000000004B9B14 "+"
 *   insn=0x00000000004B9B30 string=0x00000000004B9B34 "*"
 *   insn=0x00000000004B9B34 string=0x00000000004B9B38 "\n"
 *   insn=0x00000000004B9B38 string=0x00000000004B9B3C "?"
 *   insn=0x00000000004B9B3C string=0x00000000004B9B40 "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUITextFieldImpl::~GUITextFieldImpl(Caver::GUITextFieldImpl *this)
{
  int v2; // w9
  __int64 v3; // x8
  void *v4; // x0
  __int64 v5; // x8
  void *v6; // x0
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  unsigned int *v16; // x8
  int v17; // w9
  unsigned int *v18; // x8
  int v19; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = *((unsigned __int8 *)this + 408);
  *(_QWORD *)this = off_6D7480;
  *((_QWORD *)this + 40) = &off_6D7678;
  if ( v2 )
  {
    Caver::StopTextInputWithDelegate();
    *((_WORD *)this + 204) = 0;
  }
  v3 = *((_QWORD *)this + 50);
  v4 = (void *)(v3 - 24);
  if ( (__int64 *)(v3 - 24) != &qword_6FD2E0 )
  {
    v16 = (unsigned int *)(v3 - 8);
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
      operator delete(v4);
  }
  v5 = *((_QWORD *)this + 49);
  v6 = (void *)(v5 - 24);
  if ( (__int64 *)(v5 - 24) == &qword_6FD2E0 )
    goto LABEL_5;
  v18 = (unsigned int *)(v5 - 8);
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
  if ( v19 > 0 )
  {
LABEL_5:
    v7 = (_QWORD *)*((_QWORD *)this + 44);
    if ( !v7 )
      goto LABEL_9;
  }
  else
  {
    operator delete(v6);
    v7 = (_QWORD *)*((_QWORD *)this + 44);
    if ( !v7 )
      goto LABEL_9;
  }
  v8 = v7[1] - 1LL;
  v7[1] = v8;
  if ( !v8 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
    v9 = v7[2] - 1LL;
    v7[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
  }
LABEL_9:
  v10 = (_QWORD *)*((_QWORD *)this + 42);
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  v13 = (_QWORD *)*((_QWORD *)this + 38);
  *(_QWORD *)this = off_6D7708;
  if ( v13 )
  {
    v14 = v13[1] - 1LL;
    v13[1] = v14;
    if ( !v14 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
      v15 = v13[2] - 1LL;
      v13[2] = v15;
      if ( !v15 )
        (*(void (__fastcall **)(_QWORD *))(*v13 + 24LL))(v13);
    }
  }
  Caver::GUIControl::~GUIControl(this);
}

