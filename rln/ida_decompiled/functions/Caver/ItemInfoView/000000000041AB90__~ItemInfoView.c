/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000041AB90
 * Mangled: _ZN5Caver12ItemInfoViewD2Ev
 * Demangled: Caver::ItemInfoView::~ItemInfoView()
 *
 * Callers: 1
 *   0x0000000000200060  Caver::ItemInfoView::~ItemInfoView()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000200060  Caver::ItemInfoView::~ItemInfoView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000041B12C  boost::detail::function::functor_manager<boost::_bi::bind_t<void,boost::_mfi::mf2<void,Caver::ItemInfoView,void *,Caver::GUIEvent *>,boost::_bi::list3<boost::_bi::value<Caver::ItemInfoView*>,boost::arg<1>,boost::arg<2>>>>::manage(boost::detail::function::function_buffer const&,boost::detail::function::function_buffer&,boost::detail::function::functor_manager_operation_type)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 123
 *   insn=0x000000000041ABA0 string=0x000000000041ABA4 "h"
 *   insn=0x000000000041ABA4 string=0x000000000041ABA8 "`"
 *   insn=0x000000000041ABA8 string=0x000000000041ABAC "5D"
 *   insn=0x000000000041ABAC string=0x000000000041ABB0 "A"
 *   insn=0x000000000041ABB0 string=0x000000000041ABB4 "h"
 *   insn=0x000000000041ABB8 string=0x000000000041ABBC "@"
 *   insn=0x000000000041ABB8 string=0x000000000041ABD8 "t"
 *   insn=0x000000000041ABBC string=0x000000000041ABC0 ""
 *   insn=0x000000000041ABC0 string=0x000000000041ABC4 ""
 *   insn=0x000000000041ABC8 string=0x000000000041ABCC ""
 *   insn=0x000000000041ABCC string=0x000000000041ABD0 ""
 *   insn=0x000000000041ABD8 string=0x000000000041ABDC "4"
 *   insn=0x000000000041ABDC string=0x000000000041AC20 "t"
 *   insn=0x000000000041ABE0 string=0x000000000041ABE4 ""
 *   insn=0x000000000041ABF0 string=0x000000000041ABF4 "\t@"
 *   insn=0x000000000041AC00 string=0x000000000041AC04 ""
 *   insn=0x000000000041AC10 string=0x000000000041AC14 "@"
 *   insn=0x000000000041AC20 string=0x000000000041AC24 "4"
 *   insn=0x000000000041AC24 string=0x000000000041AC68 "t"
 *   insn=0x000000000041AC28 string=0x000000000041AC2C ""
 *   insn=0x000000000041AC38 string=0x000000000041AC3C "\t@"
 *   insn=0x000000000041AC48 string=0x000000000041AC4C ""
 *   insn=0x000000000041AC58 string=0x000000000041AC5C "@"
 *   insn=0x000000000041AC68 string=0x000000000041AC6C "4"
 *   insn=0x000000000041AC6C string=0x000000000041ACB0 "t"
 *   insn=0x000000000041AC70 string=0x000000000041AC74 ""
 *   insn=0x000000000041AC80 string=0x000000000041AC84 "\t@"
 *   insn=0x000000000041AC90 string=0x000000000041AC94 ""
 *   insn=0x000000000041ACA0 string=0x000000000041ACA4 "@"
 *   insn=0x000000000041ACB0 string=0x000000000041ACB4 "4"
 *   insn=0x000000000041ACB4 string=0x000000000041ACF8 "t"
 *   insn=0x000000000041ACB8 string=0x000000000041ACBC ""
 *   insn=0x000000000041ACC8 string=0x000000000041ACCC "\t@"
 *   insn=0x000000000041ACD8 string=0x000000000041ACDC ""
 *   insn=0x000000000041ACE8 string=0x000000000041ACEC "@"
 *   insn=0x000000000041ACF8 string=0x000000000041ACFC "4"
 *   insn=0x000000000041ACFC string=0x000000000041AD40 "t"
 *   insn=0x000000000041AD00 string=0x000000000041AD04 ""
 *   insn=0x000000000041AD10 string=0x000000000041AD14 "\t@"
 *   insn=0x000000000041AD20 string=0x000000000041AD24 ""
 *   insn=0x000000000041AD30 string=0x000000000041AD34 "@"
 *   insn=0x000000000041AD40 string=0x000000000041AD44 "4"
 *   insn=0x000000000041AD44 string=0x000000000041AD88 "t"
 *   insn=0x000000000041AD48 string=0x000000000041AD4C ""
 *   insn=0x000000000041AD58 string=0x000000000041AD5C "\t@"
 *   insn=0x000000000041AD68 string=0x000000000041AD6C ""
 *   insn=0x000000000041AD78 string=0x000000000041AD7C "@"
 *   insn=0x000000000041AD88 string=0x000000000041AD8C "4"
 *   insn=0x000000000041AD8C string=0x000000000041ADD0 "t~@"
 *   insn=0x000000000041AD90 string=0x000000000041AD94 ""
 *   insn=0x000000000041ADA0 string=0x000000000041ADA4 "\t@"
 *   insn=0x000000000041ADB0 string=0x000000000041ADB4 ""
 *   insn=0x000000000041ADC0 string=0x000000000041ADC4 "@"
 *   insn=0x000000000041ADD0 string=0x000000000041ADD4 "4"
 *   insn=0x000000000041ADD8 string=0x000000000041ADDC ""
 *   insn=0x000000000041ADE8 string=0x000000000041ADEC "\t@"
 *   insn=0x000000000041ADF8 string=0x000000000041ADFC ""
 *   insn=0x000000000041AE08 string=0x000000000041AE0C "@"
 *   insn=0x000000000041AE34 string=0x000000000041AEE8 "u"
 *   insn=0x000000000041AE38 string=0x000000000041AE3C ""
 *   insn=0x000000000041AE40 string=0x000000000041AE44 "!"
 *   insn=0x000000000041AE48 string=0x000000000041AE4C "\t@"
 *   insn=0x000000000041AE58 string=0x000000000041AE5C ""
 *   insn=0x000000000041AE60 string=0x000000000041AE64 "!"
 *   insn=0x000000000041AE68 string=0x000000000041AE6C "@"
 *   insn=0x000000000041AE84 string=0x000000000041AE88 "u~@"
 *   insn=0x000000000041AE94 string=0x000000000041AE98 "u"
 *   insn=0x000000000041AE9C string=0x000000000041AEA0 "~"
 *   insn=0x000000000041AEA0 string=0x000000000041B098 "u~@"
 *   insn=0x000000000041AEA4 string=0x000000000041AEA8 "u"
 *   insn=0x000000000041AEA8 string=0x000000000041AEAC "5"
 *   insn=0x000000000041AEAC string=0x000000000041AEB0 "h"
 *   insn=0x000000000041AEB0 string=0x000000000041B050 "u"
 *   insn=0x000000000041AEB4 string=0x000000000041AEB8 "u"
 *   insn=0x000000000041AEB8 string=0x000000000041AEBC "u"
 *   insn=0x000000000041AEBC string=0x000000000041AEC0 "R"
 *   insn=0x000000000041AEC0 string=0x000000000041B008 "u"
 *   insn=0x000000000041AEC4 string=0x000000000041AEC8 "u"
 *   insn=0x000000000041AECC string=0x000000000041AED0 "<"
 *   insn=0x000000000041AED0 string=0x000000000041AFC0 "u"
 *   insn=0x000000000041AED4 string=0x000000000041AED8 "u"
 *   insn=0x000000000041AEDC string=0x000000000041AEE0 "&"
 *   insn=0x000000000041AEE0 string=0x000000000041AF78 "u"
 *   insn=0x000000000041AEE8 string=0x000000000041AEEC "5"
 *   insn=0x000000000041AEEC string=0x000000000041AF30 "u"
 *   insn=0x000000000041AEF0 string=0x000000000041AEF4 ""
 *   insn=0x000000000041AF00 string=0x000000000041AF04 "\t@"
 *   insn=0x000000000041AF10 string=0x000000000041AF14 ""
 *   insn=0x000000000041AF20 string=0x000000000041AF24 "@"
 *   insn=0x000000000041AF30 string=0x000000000041AF34 "5"
 *   insn=0x000000000041AF38 string=0x000000000041AF3C ""
 *   insn=0x000000000041AF48 string=0x000000000041AF4C "\t@"
 *   insn=0x000000000041AF58 string=0x000000000041AF5C ""
 *   insn=0x000000000041AF68 string=0x000000000041AF6C "@"
 *   insn=0x000000000041AF78 string=0x000000000041AF7C "5"
 *   insn=0x000000000041AF80 string=0x000000000041AF84 ""
 *   insn=0x000000000041AF90 string=0x000000000041AF94 "\t@"
 *   insn=0x000000000041AFA0 string=0x000000000041AFA4 ""
 *   insn=0x000000000041AFB0 string=0x000000000041AFB4 "@"
 *   insn=0x000000000041AFC0 string=0x000000000041AFC4 "5"
 *   insn=0x000000000041AFC8 string=0x000000000041AFCC ""
 *   insn=0x000000000041AFD8 string=0x000000000041AFDC "\t@"
 *   insn=0x000000000041AFE8 string=0x000000000041AFEC ""
 *   insn=0x000000000041AFF8 string=0x000000000041AFFC "@"
 *   insn=0x000000000041B008 string=0x000000000041B00C "5"
 *   insn=0x000000000041B010 string=0x000000000041B014 ""
 *   insn=0x000000000041B020 string=0x000000000041B024 "\t@"
 *   insn=0x000000000041B030 string=0x000000000041B034 ""
 *   insn=0x000000000041B040 string=0x000000000041B044 "@"
 *   insn=0x000000000041B050 string=0x000000000041B054 "5"
 *   insn=0x000000000041B058 string=0x000000000041B05C ""
 *   insn=0x000000000041B068 string=0x000000000041B06C "\t@"
 *   insn=0x000000000041B078 string=0x000000000041B07C ""
 *   insn=0x000000000041B088 string=0x000000000041B08C "@"
 *   insn=0x000000000041B098 string=0x000000000041B09C "5"
 *   insn=0x000000000041B0A0 string=0x000000000041B0A4 ""
 *   insn=0x000000000041B0B0 string=0x000000000041B0B4 "\t@"
 *   insn=0x000000000041B0C0 string=0x000000000041B0C4 ""
 *   insn=0x000000000041B0D0 string=0x000000000041B0D4 "@"
 *   insn=0x000000000041B0E0 string=0x000000000041B0E4 "S"
 *   insn=0x000000000041B110 string=0x000000000041B114 "gp"
 *   insn=0x000000000041B114 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000041B11C string=0x000000000041B120 "dp"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemInfoView::~ItemInfoView(Caver::ItemInfoView *this)
{
  _DWORD *v2; // x0
  int v3; // w8
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x8
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x8
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  _QWORD *v13; // x20
  __int64 v14; // x8
  __int64 v15; // x8
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8

  v2 = (_DWORD *)*((_QWORD *)this + 47);
  *(_QWORD *)this = off_6D2590;
  if ( v2 )
  {
    v3 = v2[2] - 1;
    v2[2] = v3;
    if ( !v3 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 45);
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
  v7 = (_QWORD *)*((_QWORD *)this + 43);
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
  v10 = (_QWORD *)*((_QWORD *)this + 41);
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
  v13 = (_QWORD *)*((_QWORD *)this + 39);
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
  v16 = (_QWORD *)*((_QWORD *)this + 37);
  if ( v16 )
  {
    v17 = v16[1] - 1LL;
    v16[1] = v17;
    if ( !v17 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
      v18 = v16[2] - 1LL;
      v16[2] = v18;
      if ( !v18 )
        (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
    }
  }
  v19 = (_QWORD *)*((_QWORD *)this + 35);
  if ( v19 )
  {
    v20 = v19[1] - 1LL;
    v19[1] = v20;
    if ( !v20 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      v21 = v19[2] - 1LL;
      v19[2] = v21;
      if ( !v21 )
        (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
    }
  }
  v22 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v22 )
  {
    v23 = v22[1] - 1LL;
    v22[1] = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
  v25 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v25 )
  {
    v26 = v25[1] - 1LL;
    v25[1] = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
  }
  Caver::GUIView::~GUIView(this);
}

