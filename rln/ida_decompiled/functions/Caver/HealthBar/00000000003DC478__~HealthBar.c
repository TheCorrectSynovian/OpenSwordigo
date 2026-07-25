/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DC478
 * Mangled: _ZN5Caver9HealthBarD2Ev
 * Demangled: Caver::HealthBar::~HealthBar()
 *
 * Callers: 1
 *   0x0000000000201EA0  Caver::HealthBar::~HealthBar()
 *
 * Callees: 7
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000201EA0  Caver::HealthBar::~HealthBar()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003DC7BC  boost::detail::sp_counted_impl_p<Caver::Vector2>::~sp_counted_impl_p()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 101
 *   insn=0x00000000003DC488 string=0x00000000003DC48C "H"
 *   insn=0x00000000003DC48C string=0x00000000003DC490 "tZY"
 *   insn=0x00000000003DC490 string=0x00000000003DC494 ""
 *   insn=0x00000000003DC498 string=0x00000000003DC49C "A"
 *   insn=0x00000000003DC49C string=0x00000000003DC4A0 "h"
 *   insn=0x00000000003DC4A4 string=0x00000000003DC500 "t"
 *   insn=0x00000000003DC4A8 string=0x00000000003DC4AC "5"
 *   insn=0x00000000003DC4B0 string=0x00000000003DC4B4 ""
 *   insn=0x00000000003DC4C0 string=0x00000000003DC4C4 "\t@"
 *   insn=0x00000000003DC4D0 string=0x00000000003DC4D4 ""
 *   insn=0x00000000003DC4E0 string=0x00000000003DC4E4 "@"
 *   insn=0x00000000003DC4F8 string=0x00000000003DC4FC "t"
 *   insn=0x00000000003DC500 string=0x00000000003DC50C "t"
 *   insn=0x00000000003DC504 string=0x00000000003DC508 "jk"
 *   insn=0x00000000003DC508 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DC50C string=0x00000000003DC510 "4"
 *   insn=0x00000000003DC510 string=0x00000000003DC554 "`"
 *   insn=0x00000000003DC514 string=0x00000000003DC518 ""
 *   insn=0x00000000003DC524 string=0x00000000003DC528 "\t@"
 *   insn=0x00000000003DC534 string=0x00000000003DC538 ""
 *   insn=0x00000000003DC544 string=0x00000000003DC548 "@"
 *   insn=0x00000000003DC554 string=0x00000000003DC558 "@"
 *   insn=0x00000000003DC558 string=0x00000000003DC560 "`"
 *   insn=0x00000000003DC55C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003DC560 string=0x00000000003DC564 "@"
 *   insn=0x00000000003DC564 string=0x00000000003DC568 "~b"
 *   insn=0x00000000003DC564 string=0x00000000003DC56C "`"
 *   insn=0x00000000003DC570 string=0x00000000003DC574 "@"
 *   insn=0x00000000003DC570 string=0x00000000003DC590 "`"
 *   insn=0x00000000003DC574 string=0x00000000003DC578 ""
 *   insn=0x00000000003DC578 string=0x00000000003DC57C ""
 *   insn=0x00000000003DC580 string=0x00000000003DC584 ""
 *   insn=0x00000000003DC584 string=0x00000000003DC588 ""
 *   insn=0x00000000003DC594 string=0x00000000003DC598 "@"
 *   insn=0x00000000003DC594 string=0x00000000003DC5B4 "`~@"
 *   insn=0x00000000003DC598 string=0x00000000003DC59C ""
 *   insn=0x00000000003DC59C string=0x00000000003DC5A0 ""
 *   insn=0x00000000003DC5A4 string=0x00000000003DC5A8 ""
 *   insn=0x00000000003DC5A8 string=0x00000000003DC5AC ""
 *   insn=0x00000000003DC5B8 string=0x00000000003DC5BC "@"
 *   insn=0x00000000003DC5B8 string=0x00000000003DC5D8 "`z@"
 *   insn=0x00000000003DC5BC string=0x00000000003DC5C0 ""
 *   insn=0x00000000003DC5C0 string=0x00000000003DC5C4 ""
 *   insn=0x00000000003DC5C8 string=0x00000000003DC5CC ""
 *   insn=0x00000000003DC5CC string=0x00000000003DC5D0 ""
 *   insn=0x00000000003DC5DC string=0x00000000003DC5E0 "@"
 *   insn=0x00000000003DC5E0 string=0x00000000003DC5E4 ""
 *   insn=0x00000000003DC5E4 string=0x00000000003DC5E8 ""
 *   insn=0x00000000003DC5EC string=0x00000000003DC5F0 ""
 *   insn=0x00000000003DC5F0 string=0x00000000003DC5F4 ""
 *   insn=0x00000000003DC608 string=0x00000000003DC60C "\t"
 *   insn=0x00000000003DC610 string=0x00000000003DC614 "W"
 *   insn=0x00000000003DC618 string=0x00000000003DC61C "`z@"
 *   insn=0x00000000003DC620 string=0x00000000003DC624 "S"
 *   insn=0x00000000003DC620 string=0x00000000003DC754 "@"
 *   insn=0x00000000003DC628 string=0x00000000003DC62C "`~@"
 *   insn=0x00000000003DC630 string=0x00000000003DC634 "F"
 *   insn=0x00000000003DC630 string=0x00000000003DC730 "@"
 *   insn=0x00000000003DC634 string=0x00000000003DC74C "`z@"
 *   insn=0x00000000003DC638 string=0x00000000003DC63C "`"
 *   insn=0x00000000003DC63C string=0x00000000003DC640 "`"
 *   insn=0x00000000003DC640 string=0x00000000003DC644 "9"
 *   insn=0x00000000003DC640 string=0x00000000003DC70C "@"
 *   insn=0x00000000003DC644 string=0x00000000003DC728 "`~@"
 *   insn=0x00000000003DC648 string=0x00000000003DC64C "`"
 *   insn=0x00000000003DC64C string=0x00000000003DC650 "`"
 *   insn=0x00000000003DC650 string=0x00000000003DC6BC "`"
 *   insn=0x00000000003DC654 string=0x00000000003DC6D0 "$b"
 *   insn=0x00000000003DC65C string=0x00000000003DC660 "h"
 *   insn=0x00000000003DC660 string=0x00000000003DC66C "u"
 *   insn=0x00000000003DC66C string=0x00000000003DC670 "5"
 *   insn=0x00000000003DC670 string=0x00000000003DC6B4 "`"
 *   insn=0x00000000003DC674 string=0x00000000003DC678 ""
 *   insn=0x00000000003DC684 string=0x00000000003DC688 "\t@"
 *   insn=0x00000000003DC694 string=0x00000000003DC698 ""
 *   insn=0x00000000003DC6A4 string=0x00000000003DC6A8 "@"
 *   insn=0x00000000003DC6C0 string=0x00000000003DC6C4 "`"
 *   insn=0x00000000003DC6C0 string=0x00000000003DC6DC "!b"
 *   insn=0x00000000003DC6C8 string=0x00000000003DC6E8 "@"
 *   insn=0x00000000003DC6CC string=0x00000000003DC704 "`"
 *   insn=0x00000000003DC6D0 string=0x00000000003DC6D4 "`"
 *   insn=0x00000000003DC6D4 string=0x00000000003DC6D8 "`"
 *   insn=0x00000000003DC6DC string=0x00000000003DC6E0 "`"
 *   insn=0x00000000003DC6E8 string=0x00000000003DC6EC ""
 *   insn=0x00000000003DC6EC string=0x00000000003DC6F0 ""
 *   insn=0x00000000003DC6F4 string=0x00000000003DC6F8 ""
 *   insn=0x00000000003DC6F8 string=0x00000000003DC6FC ""
 *   insn=0x00000000003DC70C string=0x00000000003DC710 ""
 *   insn=0x00000000003DC710 string=0x00000000003DC714 ""
 *   insn=0x00000000003DC718 string=0x00000000003DC71C ""
 *   insn=0x00000000003DC71C string=0x00000000003DC720 ""
 *   insn=0x00000000003DC730 string=0x00000000003DC734 ""
 *   insn=0x00000000003DC734 string=0x00000000003DC738 ""
 *   insn=0x00000000003DC73C string=0x00000000003DC740 ""
 *   insn=0x00000000003DC740 string=0x00000000003DC744 ""
 *   insn=0x00000000003DC754 string=0x00000000003DC758 ""
 *   insn=0x00000000003DC758 string=0x00000000003DC75C ""
 *   insn=0x00000000003DC760 string=0x00000000003DC764 ""
 *   insn=0x00000000003DC764 string=0x00000000003DC768 ""
 *   insn=0x00000000003DC778 string=0x00000000003DC77C "R"
 *   insn=0x00000000003DC7B4 string=0x00000000003DC7B8 "C"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::HealthBar::~HealthBar(Caver::HealthBar *this)
{
  _QWORD *v2; // x20
  _QWORD *v3; // x22
  _QWORD *v4; // x21
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  void *v10; // x0
  void *v11; // x0
  _DWORD *v12; // x0
  int v13; // w8
  _DWORD *v14; // x0
  int v15; // w8
  _DWORD *v16; // x0
  int v17; // w8
  _DWORD *v18; // x0
  int v19; // w8

  v2 = (_QWORD *)*((_QWORD *)this + 50);
  v3 = (_QWORD *)*((_QWORD *)this + 51);
  *(_QWORD *)this = off_6CFF90;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (_QWORD *)v2[1];
      if ( v4 )
      {
        v5 = v4[1] - 1LL;
        v4[1] = v5;
        if ( !v5 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
          v6 = v4[2] - 1LL;
          v4[2] = v6;
          if ( !v6 )
            (*(void (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
        }
      }
      v2 += 2;
    }
    while ( v3 != v2 );
    v2 = (_QWORD *)*((_QWORD *)this + 50);
  }
  if ( v2 )
    operator delete(v2);
  v7 = (_QWORD *)*((_QWORD *)this + 49);
  if ( v7 )
  {
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
  }
  v10 = (void *)*((_QWORD *)this + 44);
  if ( v10 )
    operator delete[](v10);
  v11 = (void *)*((_QWORD *)this + 41);
  if ( v11 )
    operator delete[](v11);
  v12 = (_DWORD *)*((_QWORD *)this + 37);
  if ( v12 )
  {
    v13 = v12[2] - 1;
    v12[2] = v13;
    if ( !v13 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  v14 = (_DWORD *)*((_QWORD *)this + 32);
  if ( v14 )
  {
    v15 = v14[2] - 1;
    v14[2] = v15;
    if ( !v15 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 8LL))(v14);
  }
  v16 = (_DWORD *)*((_QWORD *)this + 31);
  if ( v16 )
  {
    v17 = v16[2] - 1;
    v16[2] = v17;
    if ( !v17 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  v18 = (_DWORD *)*((_QWORD *)this + 30);
  if ( v18 )
  {
    v19 = v18[2] - 1;
    v18[2] = v19;
    if ( !v19 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
  }
  Caver::GUIView::~GUIView(this);
}

