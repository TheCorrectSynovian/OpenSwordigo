/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042FBF4
 * Mangled: _ZN5Caver10PortalViewD2Ev
 * Demangled: Caver::PortalView::~PortalView()
 *
 * Callers: 1
 *   0x00000000001F6140  Caver::PortalView::~PortalView()
 *
 * Callees: 6
 *   0x00000000001F6140  Caver::PortalView::~PortalView()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004301BC  Caver::PortalView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 125
 *   insn=0x000000000042FC08 string=0x000000000042FC0C "t"
 *   insn=0x000000000042FC0C string=0x000000000042FC10 ""
 *   insn=0x000000000042FC10 string=0x000000000042FC14 "A"
 *   insn=0x000000000042FC14 string=0x000000000042FC18 "h"
 *   insn=0x000000000042FC18 string=0x000000000042FC1C "4"
 *   insn=0x000000000042FC1C string=0x000000000042FC60 "t"
 *   insn=0x000000000042FC20 string=0x000000000042FC24 ""
 *   insn=0x000000000042FC30 string=0x000000000042FC34 "\t@"
 *   insn=0x000000000042FC40 string=0x000000000042FC44 ""
 *   insn=0x000000000042FC50 string=0x000000000042FC54 "@"
 *   insn=0x000000000042FC60 string=0x000000000042FC64 "4"
 *   insn=0x000000000042FC64 string=0x000000000042FCA8 "t"
 *   insn=0x000000000042FC68 string=0x000000000042FC6C ""
 *   insn=0x000000000042FC78 string=0x000000000042FC7C "\t@"
 *   insn=0x000000000042FC88 string=0x000000000042FC8C ""
 *   insn=0x000000000042FC98 string=0x000000000042FC9C "@"
 *   insn=0x000000000042FCA8 string=0x000000000042FCAC "4"
 *   insn=0x000000000042FCAC string=0x000000000042FCF0 "t"
 *   insn=0x000000000042FCB0 string=0x000000000042FCB4 ""
 *   insn=0x000000000042FCC0 string=0x000000000042FCC4 "\t@"
 *   insn=0x000000000042FCD0 string=0x000000000042FCD4 ""
 *   insn=0x000000000042FCE0 string=0x000000000042FCE4 "@"
 *   insn=0x000000000042FCF0 string=0x000000000042FCF4 "4"
 *   insn=0x000000000042FCF4 string=0x000000000042FD38 "t"
 *   insn=0x000000000042FCF8 string=0x000000000042FCFC ""
 *   insn=0x000000000042FD08 string=0x000000000042FD0C "\t@"
 *   insn=0x000000000042FD18 string=0x000000000042FD1C ""
 *   insn=0x000000000042FD28 string=0x000000000042FD2C "@"
 *   insn=0x000000000042FD38 string=0x000000000042FD3C "4"
 *   insn=0x000000000042FD3C string=0x000000000042FD80 "t"
 *   insn=0x000000000042FD40 string=0x000000000042FD44 ""
 *   insn=0x000000000042FD50 string=0x000000000042FD54 "\t@"
 *   insn=0x000000000042FD60 string=0x000000000042FD64 ""
 *   insn=0x000000000042FD70 string=0x000000000042FD74 "@"
 *   insn=0x000000000042FD80 string=0x000000000042FD84 "4"
 *   insn=0x000000000042FD84 string=0x000000000042FDC8 "t"
 *   insn=0x000000000042FD88 string=0x000000000042FD8C ""
 *   insn=0x000000000042FD98 string=0x000000000042FD9C "\t@"
 *   insn=0x000000000042FDA8 string=0x000000000042FDAC ""
 *   insn=0x000000000042FDB8 string=0x000000000042FDBC "@"
 *   insn=0x000000000042FDC8 string=0x000000000042FDCC "4"
 *   insn=0x000000000042FDCC string=0x000000000042FE10 "t"
 *   insn=0x000000000042FDD0 string=0x000000000042FDD4 ""
 *   insn=0x000000000042FDE0 string=0x000000000042FDE4 "\t@"
 *   insn=0x000000000042FDF0 string=0x000000000042FDF4 ""
 *   insn=0x000000000042FE00 string=0x000000000042FE04 "@"
 *   insn=0x000000000042FE10 string=0x000000000042FE14 "4"
 *   insn=0x000000000042FE14 string=0x000000000042FE58 "t~@"
 *   insn=0x000000000042FE18 string=0x000000000042FE1C ""
 *   insn=0x000000000042FE28 string=0x000000000042FE2C "\t@"
 *   insn=0x000000000042FE38 string=0x000000000042FE3C ""
 *   insn=0x000000000042FE48 string=0x000000000042FE4C "@"
 *   insn=0x000000000042FE58 string=0x000000000042FE5C "4"
 *   insn=0x000000000042FE60 string=0x000000000042FE64 ""
 *   insn=0x000000000042FE70 string=0x000000000042FE74 "\t@"
 *   insn=0x000000000042FE80 string=0x000000000042FE84 ""
 *   insn=0x000000000042FE90 string=0x000000000042FE94 "@"
 *   insn=0x000000000042FEBC string=0x000000000042FEC0 "u~@"
 *   insn=0x000000000042FEC0 string=0x000000000042FEC4 "u"
 *   insn=0x000000000042FECC string=0x000000000042FED0 "u"
 *   insn=0x000000000042FED8 string=0x0000000000430128 "u~@"
 *   insn=0x000000000042FEDC string=0x000000000042FEE0 "u"
 *   insn=0x000000000042FEE4 string=0x000000000042FEE8 "~"
 *   insn=0x000000000042FEE8 string=0x00000000004300E0 "u"
 *   insn=0x000000000042FEEC string=0x000000000042FEF0 "u"
 *   insn=0x000000000042FEF0 string=0x000000000042FEF4 "5"
 *   insn=0x000000000042FEF4 string=0x000000000042FEF8 "h"
 *   insn=0x000000000042FEF8 string=0x0000000000430098 "u"
 *   insn=0x000000000042FEFC string=0x000000000042FF00 "u"
 *   insn=0x000000000042FF00 string=0x000000000042FF04 "u"
 *   insn=0x000000000042FF04 string=0x000000000042FF08 "R"
 *   insn=0x000000000042FF08 string=0x0000000000430050 "u"
 *   insn=0x000000000042FF0C string=0x000000000042FF10 "u"
 *   insn=0x000000000042FF14 string=0x000000000042FF18 "<"
 *   insn=0x000000000042FF18 string=0x0000000000430008 "u"
 *   insn=0x000000000042FF1C string=0x000000000042FF20 "u"
 *   insn=0x000000000042FF24 string=0x000000000042FF28 "&"
 *   insn=0x000000000042FF28 string=0x000000000042FFC0 "u"
 *   insn=0x000000000042FF30 string=0x000000000042FF34 "5"
 *   insn=0x000000000042FF34 string=0x000000000042FF78 "u"
 *   insn=0x000000000042FF38 string=0x000000000042FF3C ""
 *   insn=0x000000000042FF48 string=0x000000000042FF4C "\t@"
 *   insn=0x000000000042FF58 string=0x000000000042FF5C ""
 *   insn=0x000000000042FF68 string=0x000000000042FF6C "@"
 *   insn=0x000000000042FF78 string=0x000000000042FF7C "5"
 *   insn=0x000000000042FF80 string=0x000000000042FF84 ""
 *   insn=0x000000000042FF90 string=0x000000000042FF94 "\t@"
 *   insn=0x000000000042FFA0 string=0x000000000042FFA4 ""
 *   insn=0x000000000042FFB0 string=0x000000000042FFB4 "@"
 *   insn=0x000000000042FFC0 string=0x000000000042FFC4 "5"
 *   insn=0x000000000042FFC8 string=0x000000000042FFCC ""
 *   insn=0x000000000042FFD8 string=0x000000000042FFDC "\t@"
 *   insn=0x000000000042FFE8 string=0x000000000042FFEC ""
 *   insn=0x000000000042FFF8 string=0x000000000042FFFC "@"
 *   insn=0x0000000000430008 string=0x000000000043000C "5"
 *   insn=0x0000000000430010 string=0x0000000000430014 ""
 *   insn=0x0000000000430020 string=0x0000000000430024 "\t@"
 *   insn=0x0000000000430030 string=0x0000000000430034 ""
 *   insn=0x0000000000430040 string=0x0000000000430044 "@"
 *   insn=0x0000000000430050 string=0x0000000000430054 "5"
 *   insn=0x0000000000430058 string=0x000000000043005C ""
 *   insn=0x0000000000430068 string=0x000000000043006C "\t@"
 *   insn=0x0000000000430078 string=0x000000000043007C ""
 *   insn=0x0000000000430088 string=0x000000000043008C "@"
 *   insn=0x0000000000430098 string=0x000000000043009C "5"
 *   insn=0x00000000004300A0 string=0x00000000004300A4 ""
 *   insn=0x00000000004300B0 string=0x00000000004300B4 "\t@"
 *   insn=0x00000000004300C0 string=0x00000000004300C4 ""
 *   insn=0x00000000004300D0 string=0x00000000004300D4 "@"
 *   insn=0x00000000004300E0 string=0x00000000004300E4 "5"
 *   insn=0x00000000004300E8 string=0x00000000004300EC ""
 *   insn=0x00000000004300F8 string=0x00000000004300FC "\t@"
 *   insn=0x0000000000430108 string=0x000000000043010C ""
 *   insn=0x0000000000430118 string=0x000000000043011C "@"
 *   insn=0x0000000000430128 string=0x000000000043012C "5"
 *   insn=0x0000000000430130 string=0x0000000000430134 ""
 *   insn=0x0000000000430140 string=0x0000000000430144 "\t@"
 *   insn=0x0000000000430150 string=0x0000000000430154 ""
 *   insn=0x0000000000430160 string=0x0000000000430164 "@"
 *   insn=0x0000000000430170 string=0x0000000000430174 "/;"
 *   insn=0x000000000043017C string=0x0000000000430180 "sx"
 *   insn=0x0000000000430194 string=0x00000000001F6140 "0'"
 *   insn=0x00000000004301A0 string=0x00000000004301A4 "C"
 *   insn=0x00000000004301A4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004301AC string=0x00000000004301B0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PortalView::~PortalView(Caver::PortalView *this)
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
  _QWORD *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x8
  _QWORD *v26; // x20
  __int64 v27; // x8
  __int64 v28; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 47);
  *(_QWORD *)this = off_6D34A0;
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
  v5 = (_QWORD *)*((_QWORD *)this + 45);
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
  v8 = (_QWORD *)*((_QWORD *)this + 43);
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
  v11 = (_QWORD *)*((_QWORD *)this + 41);
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
  v14 = (_QWORD *)*((_QWORD *)this + 39);
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
  v17 = (_QWORD *)*((_QWORD *)this + 37);
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
  v20 = (_QWORD *)*((_QWORD *)this + 35);
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
  v23 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v23 )
  {
    v24 = v23[1] - 1LL;
    v23[1] = v24;
    if ( !v24 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v23 + 16LL))(v23);
      v25 = v23[2] - 1LL;
      v23[2] = v25;
      if ( !v25 )
        (*(void (__fastcall **)(_QWORD *))(*v23 + 24LL))(v23);
    }
  }
  v26 = (_QWORD *)*((_QWORD *)this + 31);
  if ( v26 )
  {
    v27 = v26[1] - 1LL;
    v26[1] = v27;
    if ( !v27 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v26 + 16LL))(v26);
      v28 = v26[2] - 1LL;
      v26[2] = v28;
      if ( !v28 )
        (*(void (__fastcall **)(_QWORD *))(*v26 + 24LL))(v26);
    }
  }
  Caver::GUIView::~GUIView(this);
}

