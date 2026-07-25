/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040CD64
 * Mangled: _ZN5Caver18InventoryItemPanelD2Ev
 * Demangled: Caver::InventoryItemPanel::~InventoryItemPanel()
 *
 * Callers: 1
 *   0x00000000001F85E0  Caver::InventoryItemPanel::~InventoryItemPanel()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F85E0  Caver::InventoryItemPanel::~InventoryItemPanel()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000040D1F4  boost::detail::shared_count::shared_count<Caver::GUITexturedRect>(Caver::GUITexturedRect *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 100
 *   insn=0x000000000040CD78 string=0x000000000040CD7C "yE"
 *   insn=0x000000000040CD7C string=0x000000000040CD80 "t"
 *   insn=0x000000000040CD80 string=0x000000000040CD84 "\tA"
 *   insn=0x000000000040CD84 string=0x000000000040CD88 "a"
 *   insn=0x000000000040CD88 string=0x000000000040CD8C "i"
 *   insn=0x000000000040CD8C string=0x000000000040CD90 "hz"
 *   insn=0x000000000040CD90 string=0x000000000040CD94 "4"
 *   insn=0x000000000040CD94 string=0x000000000040CDD8 "t"
 *   insn=0x000000000040CD98 string=0x000000000040CD9C ""
 *   insn=0x000000000040CDA8 string=0x000000000040CDAC "\t@"
 *   insn=0x000000000040CDB8 string=0x000000000040CDBC ""
 *   insn=0x000000000040CDC8 string=0x000000000040CDCC "@"
 *   insn=0x000000000040CDD8 string=0x000000000040CDDC "4"
 *   insn=0x000000000040CDDC string=0x000000000040CE20 "t"
 *   insn=0x000000000040CDE0 string=0x000000000040CDE4 ""
 *   insn=0x000000000040CDF0 string=0x000000000040CDF4 "\t@"
 *   insn=0x000000000040CE00 string=0x000000000040CE04 ""
 *   insn=0x000000000040CE10 string=0x000000000040CE14 "@"
 *   insn=0x000000000040CE20 string=0x000000000040CE24 "4"
 *   insn=0x000000000040CE24 string=0x000000000040CE68 "t"
 *   insn=0x000000000040CE28 string=0x000000000040CE2C ""
 *   insn=0x000000000040CE38 string=0x000000000040CE3C "\t@"
 *   insn=0x000000000040CE48 string=0x000000000040CE4C ""
 *   insn=0x000000000040CE58 string=0x000000000040CE5C "@"
 *   insn=0x000000000040CE68 string=0x000000000040CE6C "4"
 *   insn=0x000000000040CE6C string=0x000000000040CEB0 "t"
 *   insn=0x000000000040CE70 string=0x000000000040CE74 ""
 *   insn=0x000000000040CE80 string=0x000000000040CE84 "\t@"
 *   insn=0x000000000040CE90 string=0x000000000040CE94 ""
 *   insn=0x000000000040CEA0 string=0x000000000040CEA4 "@"
 *   insn=0x000000000040CEB0 string=0x000000000040CEB4 "4"
 *   insn=0x000000000040CEB4 string=0x000000000040CEF8 "t"
 *   insn=0x000000000040CEB8 string=0x000000000040CEBC ""
 *   insn=0x000000000040CEC8 string=0x000000000040CECC "\t@"
 *   insn=0x000000000040CED8 string=0x000000000040CEDC ""
 *   insn=0x000000000040CEE8 string=0x000000000040CEEC "@"
 *   insn=0x000000000040CEF8 string=0x000000000040CEFC "4"
 *   insn=0x000000000040CEFC string=0x000000000040CF40 "t"
 *   insn=0x000000000040CF00 string=0x000000000040CF04 ""
 *   insn=0x000000000040CF10 string=0x000000000040CF14 "\t@"
 *   insn=0x000000000040CF20 string=0x000000000040CF24 ""
 *   insn=0x000000000040CF30 string=0x000000000040CF34 "@"
 *   insn=0x000000000040CF40 string=0x000000000040CF44 "4"
 *   insn=0x000000000040CF48 string=0x000000000040CF4C ""
 *   insn=0x000000000040CF58 string=0x000000000040CF5C "\t@"
 *   insn=0x000000000040CF68 string=0x000000000040CF6C ""
 *   insn=0x000000000040CF78 string=0x000000000040CF7C "@"
 *   insn=0x000000000040CFA4 string=0x000000000040CFA8 "u"
 *   insn=0x000000000040CFAC string=0x000000000040CFB0 "~"
 *   insn=0x000000000040CFB4 string=0x000000000040CFB8 "u"
 *   insn=0x000000000040CFB8 string=0x000000000040CFBC "5"
 *   insn=0x000000000040CFBC string=0x000000000040CFC0 "h"
 *   insn=0x000000000040CFC0 string=0x000000000040D160 "u"
 *   insn=0x000000000040CFC4 string=0x000000000040CFC8 "u"
 *   insn=0x000000000040CFC8 string=0x000000000040CFCC "u"
 *   insn=0x000000000040CFCC string=0x000000000040CFD0 "R"
 *   insn=0x000000000040CFD0 string=0x000000000040D118 "u"
 *   insn=0x000000000040CFD4 string=0x000000000040CFD8 "u"
 *   insn=0x000000000040CFDC string=0x000000000040CFE0 "<"
 *   insn=0x000000000040CFE0 string=0x000000000040D0D0 "u"
 *   insn=0x000000000040CFE4 string=0x000000000040CFE8 "u"
 *   insn=0x000000000040CFEC string=0x000000000040CFF0 "&"
 *   insn=0x000000000040CFF0 string=0x000000000040D088 "u"
 *   insn=0x000000000040CFF8 string=0x000000000040CFFC "5"
 *   insn=0x000000000040CFFC string=0x000000000040D040 "u"
 *   insn=0x000000000040D000 string=0x000000000040D004 ""
 *   insn=0x000000000040D010 string=0x000000000040D014 "\t@"
 *   insn=0x000000000040D020 string=0x000000000040D024 ""
 *   insn=0x000000000040D030 string=0x000000000040D034 "@"
 *   insn=0x000000000040D040 string=0x000000000040D044 "5"
 *   insn=0x000000000040D048 string=0x000000000040D04C ""
 *   insn=0x000000000040D058 string=0x000000000040D05C "\t@"
 *   insn=0x000000000040D068 string=0x000000000040D06C ""
 *   insn=0x000000000040D078 string=0x000000000040D07C "@"
 *   insn=0x000000000040D088 string=0x000000000040D08C "5"
 *   insn=0x000000000040D090 string=0x000000000040D094 ""
 *   insn=0x000000000040D0A0 string=0x000000000040D0A4 "\t@"
 *   insn=0x000000000040D0B0 string=0x000000000040D0B4 ""
 *   insn=0x000000000040D0C0 string=0x000000000040D0C4 "@"
 *   insn=0x000000000040D0D0 string=0x000000000040D0D4 "5"
 *   insn=0x000000000040D0D8 string=0x000000000040D0DC ""
 *   insn=0x000000000040D0E8 string=0x000000000040D0EC "\t@"
 *   insn=0x000000000040D0F8 string=0x000000000040D0FC ""
 *   insn=0x000000000040D108 string=0x000000000040D10C "@"
 *   insn=0x000000000040D118 string=0x000000000040D11C "5"
 *   insn=0x000000000040D120 string=0x000000000040D124 ""
 *   insn=0x000000000040D130 string=0x000000000040D134 "\t@"
 *   insn=0x000000000040D140 string=0x000000000040D144 ""
 *   insn=0x000000000040D150 string=0x000000000040D154 "@"
 *   insn=0x000000000040D160 string=0x000000000040D164 "5"
 *   insn=0x000000000040D168 string=0x000000000040D16C ""
 *   insn=0x000000000040D178 string=0x000000000040D17C "\t@"
 *   insn=0x000000000040D188 string=0x000000000040D18C ""
 *   insn=0x000000000040D198 string=0x000000000040D19C "@"
 *   insn=0x000000000040D1A8 string=0x000000000040D1AC "!"
 *   insn=0x000000000040D1B4 string=0x000000000040D1B8 "e"
 *   insn=0x000000000040D1CC string=0x00000000001F85E0 "0'"
 *   insn=0x000000000040D1D8 string=0x000000000040D1DC "5"
 *   insn=0x000000000040D1DC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000040D1E4 string=0x000000000040D1E8 "2"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::InventoryItemPanel::~InventoryItemPanel(Caver::InventoryItemPanel *this)
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
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  _QWORD *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x8
  _QWORD *v17; // x20
  __int64 v18; // x8
  __int64 v19; // x8
  _QWORD *v20; // x20
  __int64 v21; // x8
  __int64 v22; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 45);
  *(_QWORD *)this = off_6D1B60;
  *((_QWORD *)this + 30) = &off_6D1CA8;
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
  v5 = (_QWORD *)*((_QWORD *)this + 43);
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
  v8 = (_QWORD *)*((_QWORD *)this + 41);
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
  v11 = (_QWORD *)*((_QWORD *)this + 39);
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = (_QWORD *)*((_QWORD *)this + 37);
  if ( v14 )
  {
    v15 = v14[1] - 1LL;
    v14[1] = v15;
    if ( !v15 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
      v16 = v14[2] - 1LL;
      v14[2] = v16;
      if ( !v16 )
        (*(void (__fastcall **)(_QWORD *))(*v14 + 24LL))(v14);
    }
  }
  v17 = (_QWORD *)*((_QWORD *)this + 35);
  if ( v17 )
  {
    v18 = v17[1] - 1LL;
    v17[1] = v18;
    if ( !v18 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
      v19 = v17[2] - 1LL;
      v17[2] = v19;
      if ( !v19 )
        (*(void (__fastcall **)(_QWORD *))(*v17 + 24LL))(v17);
    }
  }
  v20 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v20 )
  {
    v21 = v20[1] - 1LL;
    v20[1] = v21;
    if ( !v21 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
      v22 = v20[2] - 1LL;
      v20[2] = v22;
      if ( !v22 )
        (*(void (__fastcall **)(_QWORD *))(*v20 + 24LL))(v20);
    }
  }
  Caver::GUIView::~GUIView(this);
}

