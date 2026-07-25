/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4708
 * Mangled: _ZN5Caver14GUIPopoverViewD2Ev
 * Demangled: Caver::GUIPopoverView::~GUIPopoverView()
 *
 * Callers: 1
 *   0x00000000001F5AE0  Caver::GUIPopoverView::~GUIPopoverView()
 *
 * Callees: 6
 *   0x00000000001F5AE0  Caver::GUIPopoverView::~GUIPopoverView()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004D4910  Caver::GUIMargins::LoadFromProtobufMessage(Caver::Proto::GUIMargins const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 42
 *   insn=0x00000000004D471C string=0x00000000004D4720 "t"
 *   insn=0x00000000004D4720 string=0x00000000004D4724 ""
 *   insn=0x00000000004D4724 string=0x00000000004D4728 "A"
 *   insn=0x00000000004D4728 string=0x00000000004D472C "h"
 *   insn=0x00000000004D472C string=0x00000000004D4730 "4"
 *   insn=0x00000000004D4730 string=0x00000000004D4774 "t"
 *   insn=0x00000000004D4734 string=0x00000000004D4738 ""
 *   insn=0x00000000004D4744 string=0x00000000004D4748 "\t@"
 *   insn=0x00000000004D4754 string=0x00000000004D4758 ""
 *   insn=0x00000000004D4764 string=0x00000000004D4768 "@"
 *   insn=0x00000000004D4774 string=0x00000000004D4778 "4"
 *   insn=0x00000000004D4778 string=0x00000000004D47BC "t"
 *   insn=0x00000000004D477C string=0x00000000004D4780 ""
 *   insn=0x00000000004D478C string=0x00000000004D4790 "\t@"
 *   insn=0x00000000004D479C string=0x00000000004D47A0 ""
 *   insn=0x00000000004D47AC string=0x00000000004D47B0 "@"
 *   insn=0x00000000004D47BC string=0x00000000004D47C0 "4"
 *   insn=0x00000000004D47C4 string=0x00000000004D47C8 ""
 *   insn=0x00000000004D47D4 string=0x00000000004D47D8 "\t@"
 *   insn=0x00000000004D47E4 string=0x00000000004D47E8 ""
 *   insn=0x00000000004D47F4 string=0x00000000004D47F8 "@"
 *   insn=0x00000000004D4818 string=0x00000000004D481C "*"
 *   insn=0x00000000004D4820 string=0x00000000004D4824 "u"
 *   insn=0x00000000004D4828 string=0x00000000004D482C "&"
 *   insn=0x00000000004D4834 string=0x00000000004D4838 "5"
 *   insn=0x00000000004D4838 string=0x00000000004D487C "u"
 *   insn=0x00000000004D483C string=0x00000000004D4840 ""
 *   insn=0x00000000004D484C string=0x00000000004D4850 "\t@"
 *   insn=0x00000000004D485C string=0x00000000004D4860 ""
 *   insn=0x00000000004D486C string=0x00000000004D4870 "@"
 *   insn=0x00000000004D487C string=0x00000000004D4880 "5"
 *   insn=0x00000000004D4884 string=0x00000000004D4888 ""
 *   insn=0x00000000004D4894 string=0x00000000004D4898 "\t@"
 *   insn=0x00000000004D48A4 string=0x00000000004D48A8 ""
 *   insn=0x00000000004D48B4 string=0x00000000004D48B8 "@"
 *   insn=0x00000000004D48C4 string=0x00000000004D48C8 "Z"
 *   insn=0x00000000004D48E4 string=0x00000000004D48E8 "~"
 *   insn=0x00000000004D48E8 string=0x00000000001F5AE0 "P'"
 *   insn=0x00000000004D48F4 string=0x00000000004D48F8 "n"
 *   insn=0x00000000004D48F8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004D4900 string=0x00000000004D4904 "k"
 *   insn=0x00000000004D490C string=0x00000000004D4910 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIPopoverView::~GUIPopoverView(Caver::GUIPopoverView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 40);
  *(_QWORD *)this = off_6D7EF0;
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
  v5 = (_QWORD *)*((_QWORD *)this + 38);
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
  v8 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  Caver::GUIView::~GUIView(this);
}

