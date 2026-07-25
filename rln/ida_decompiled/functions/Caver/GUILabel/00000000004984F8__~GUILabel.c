/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004984F8
 * Mangled: _ZN5Caver8GUILabelD2Ev
 * Demangled: Caver::GUILabel::~GUILabel()
 *
 * Callers: 1
 *   0x0000000000202C10  Caver::GUILabel::~GUILabel()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000202C10  Caver::GUILabel::~GUILabel()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004987E8  Caver::GUILoadingView::GUILoadingView(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 71
 *   insn=0x0000000000498508 string=0x000000000049850C "U"
 *   insn=0x0000000000498518 string=0x000000000049851C "h"
 *   insn=0x000000000049851C string=0x0000000000498520 "t"
 *   insn=0x0000000000498520 string=0x0000000000498524 ""
 *   insn=0x0000000000498524 string=0x0000000000498528 "A"
 *   insn=0x0000000000498528 string=0x000000000049852C "h"
 *   insn=0x000000000049852C string=0x0000000000498530 "4"
 *   insn=0x0000000000498530 string=0x0000000000498574 "t"
 *   insn=0x0000000000498534 string=0x0000000000498538 ""
 *   insn=0x0000000000498544 string=0x0000000000498548 "\t@"
 *   insn=0x0000000000498554 string=0x0000000000498558 ""
 *   insn=0x0000000000498564 string=0x0000000000498568 "@"
 *   insn=0x0000000000498574 string=0x0000000000498578 "4"
 *   insn=0x0000000000498578 string=0x00000000004985BC "h"
 *   insn=0x000000000049857C string=0x0000000000498580 ""
 *   insn=0x000000000049858C string=0x0000000000498590 "\t@"
 *   insn=0x000000000049859C string=0x00000000004985A0 ""
 *   insn=0x00000000004985AC string=0x00000000004985B0 "@"
 *   insn=0x00000000004985BC string=0x00000000004985C0 "i"
 *   insn=0x00000000004985C0 string=0x00000000004985C4 ")"
 *   insn=0x00000000004985D0 string=0x00000000004985D4 "t~@"
 *   insn=0x00000000004985D0 string=0x0000000000498648 "i"
 *   insn=0x00000000004985D4 string=0x00000000004985D8 "4"
 *   insn=0x00000000004985DC string=0x00000000004985E0 ""
 *   insn=0x00000000004985EC string=0x00000000004985F0 "\t@"
 *   insn=0x00000000004985FC string=0x0000000000498600 ""
 *   insn=0x000000000049860C string=0x0000000000498610 "@"
 *   insn=0x000000000049862C string=0x0000000000498630 "!"
 *   insn=0x0000000000498648 string=0x000000000049864C ")=G"
 *   insn=0x000000000049864C string=0x0000000000498650 "!"
 *   insn=0x0000000000498654 string=0x0000000000498658 "\t"
 *   insn=0x0000000000498654 string=0x000000000049866C "\t"
 *   insn=0x0000000000498658 string=0x000000000049865C "*"
 *   insn=0x000000000049865C string=0x0000000000498660 "\n"
 *   insn=0x0000000000498668 string=0x0000000000498678 "?"
 *   insn=0x000000000049866C string=0x0000000000498670 "*"
 *   insn=0x0000000000498670 string=0x0000000000498674 "\n"
 *   insn=0x0000000000498680 string=0x0000000000498684 "HG"
 *   insn=0x0000000000498684 string=0x0000000000498688 "t~@"
 *   insn=0x0000000000498694 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000498698 string=0x000000000049869C ":"
 *   insn=0x00000000004986A4 string=0x00000000004986F4 "h"
 *   insn=0x00000000004986AC string=0x00000000004986B0 "5"
 *   insn=0x00000000004986B4 string=0x00000000004986B8 ""
 *   insn=0x00000000004986C4 string=0x00000000004986C8 "\t@"
 *   insn=0x00000000004986D4 string=0x00000000004986D8 ""
 *   insn=0x00000000004986E4 string=0x00000000004986E8 "@"
 *   insn=0x00000000004986F4 string=0x00000000004986F8 "i"
 *   insn=0x00000000004986F8 string=0x00000000004986FC ")"
 *   insn=0x0000000000498708 string=0x000000000049870C "i"
 *   insn=0x0000000000498708 string=0x000000000049873C "u~@"
 *   insn=0x000000000049870C string=0x0000000000498710 ")=G"
 *   insn=0x0000000000498710 string=0x0000000000498714 "!"
 *   insn=0x0000000000498718 string=0x000000000049871C "\t"
 *   insn=0x0000000000498718 string=0x0000000000498794 "\t"
 *   insn=0x000000000049871C string=0x0000000000498720 "*"
 *   insn=0x0000000000498720 string=0x0000000000498724 "\n"
 *   insn=0x0000000000498728 string=0x000000000049872C "?"
 *   insn=0x000000000049872C string=0x0000000000498730 "l"
 *   insn=0x0000000000498734 string=0x0000000000498738 "G"
 *   insn=0x000000000049873C string=0x0000000000498740 "5"
 *   insn=0x0000000000498744 string=0x0000000000498748 ""
 *   insn=0x0000000000498754 string=0x0000000000498758 "\t@"
 *   insn=0x0000000000498764 string=0x0000000000498768 ""
 *   insn=0x0000000000498774 string=0x0000000000498778 "@"
 *   insn=0x000000000049878C string=0x0000000000498790 "M"
 *   insn=0x0000000000498794 string=0x0000000000498798 "*"
 *   insn=0x0000000000498798 string=0x000000000049879C "\n"
 *   insn=0x000000000049879C string=0x00000000004987A0 "?"
 *   insn=0x00000000004987D0 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004987E0 string=0x00000000004987E4 "8"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUILabel::~GUILabel(Caver::GUILabel *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  unsigned int *v13; // x8
  int v14; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 37);
  *(_QWORD *)this = off_6D5F20;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 35);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = *((_QWORD *)this + 32);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) == &qword_6FD2E0 )
    goto LABEL_10;
  v13 = (unsigned int *)(v8 - 8);
  if ( &pthread_create )
  {
    do
      v14 = __ldaxr(v13);
    while ( __stlxr(v14 - 1, v13) );
  }
  else
  {
    v14 = (*v13)--;
  }
  if ( v14 > 0 )
  {
LABEL_10:
    v10 = (_QWORD *)*((_QWORD *)this + 31);
    if ( !v10 )
      goto LABEL_14;
  }
  else
  {
    operator delete(v9);
    v10 = (_QWORD *)*((_QWORD *)this + 31);
    if ( !v10 )
      goto LABEL_14;
  }
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
LABEL_14:
  Caver::GUIView::~GUIView(this);
}

