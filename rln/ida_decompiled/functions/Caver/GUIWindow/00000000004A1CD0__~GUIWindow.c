/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A1CD0
 * Mangled: _ZN5Caver9GUIWindowD2Ev
 * Demangled: Caver::GUIWindow::~GUIWindow()
 *
 * Callers: 1
 *   0x0000000000203CE0  Caver::GUIWindow::~GUIWindow()
 *
 * Callees: 9
 *   0x00000000001F5D20  std::_Rb_tree<uint,uint,std::_Identity<uint>,std::less<uint>,std::allocator<uint>>::_M_erase(std::_Rb_tree_node<uint> *)
 *   0x00000000001F6A10  std::_Rb_tree<ulong,std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>,std::less<ulong>,std::allocator<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,boost::shared_ptr<Caver::GUIView>>> *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FE860  std::_Rb_tree<ulong,std::pair<ulong const,Caver::FWTouch>,std::_Select1st<std::pair<ulong const,Caver::FWTouch>>,std::less<ulong>,std::allocator<std::pair<ulong const,Caver::FWTouch>>>::_M_erase(std::_Rb_tree_node<std::pair<ulong const,Caver::FWTouch>> *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000203CE0  Caver::GUIWindow::~GUIWindow()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000004A2184  boost::shared_ptr<Caver::GUIWindow>::~shared_ptr()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 114
 *   insn=0x00000000004A1CE0 string=0x00000000004A1CE4 "("
 *   insn=0x00000000004A1CE4 string=0x00000000004A1CE8 "eD"
 *   insn=0x00000000004A1CEC string=0x00000000004A1CF0 "t"
 *   insn=0x00000000004A1CF0 string=0x00000000004A1CF4 "\n!"
 *   insn=0x00000000004A1CF4 string=0x00000000004A1CF8 "\tA"
 *   insn=0x00000000004A1CF8 string=0x00000000004A1CFC "@"
 *   insn=0x00000000004A1CFC string=0x00000000004A1D00 ""
 *   insn=0x00000000004A1D04 string=0x00000000004A1D08 "i"
 *   insn=0x00000000004A1D08 string=0x00000000004A1D0C "`>"
 *   insn=0x00000000004A1D0C string=0x00000000004A1D10 "4"
 *   insn=0x00000000004A1D10 string=0x00000000004A1D54 "`"
 *   insn=0x00000000004A1D14 string=0x00000000004A1D18 ""
 *   insn=0x00000000004A1D24 string=0x00000000004A1D28 "\t@"
 *   insn=0x00000000004A1D34 string=0x00000000004A1D38 ""
 *   insn=0x00000000004A1D44 string=0x00000000004A1D48 "@"
 *   insn=0x00000000004A1D58 string=0x00000000004A1D5C "@"
 *   insn=0x00000000004A1D58 string=0x00000000004A1D78 "t"
 *   insn=0x00000000004A1D5C string=0x00000000004A1D60 ""
 *   insn=0x00000000004A1D60 string=0x00000000004A1D64 ""
 *   insn=0x00000000004A1D68 string=0x00000000004A1D6C ""
 *   insn=0x00000000004A1D6C string=0x00000000004A1D70 ""
 *   insn=0x00000000004A1D78 string=0x00000000004A1D7C "4"
 *   insn=0x00000000004A1D7C string=0x00000000004A1DC0 "t"
 *   insn=0x00000000004A1D80 string=0x00000000004A1D84 ""
 *   insn=0x00000000004A1D90 string=0x00000000004A1D94 "\t@"
 *   insn=0x00000000004A1DA0 string=0x00000000004A1DA4 ""
 *   insn=0x00000000004A1DB0 string=0x00000000004A1DB4 "@"
 *   insn=0x00000000004A1DC0 string=0x00000000004A1DC4 "v"
 *   insn=0x00000000004A1DC8 string=0x00000000004A1DCC " "
 *   insn=0x00000000004A1DCC string=0x00000000004A1E30 "`"
 *   insn=0x00000000004A1DD4 string=0x00000000004A1DD8 "5"
 *   insn=0x00000000004A1DDC string=0x00000000004A1DE0 ""
 *   insn=0x00000000004A1DEC string=0x00000000004A1DF0 "\t@"
 *   insn=0x00000000004A1DFC string=0x00000000004A1E00 ""
 *   insn=0x00000000004A1E0C string=0x00000000004A1E10 "@"
 *   insn=0x00000000004A1E1C string=0x00000000004A1E20 "$U"
 *   insn=0x00000000004A1E20 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004A1E28 string=0x00000000004A1E2C "!"
 *   insn=0x00000000004A1E30 string=0x00000000004A1E34 "t"
 *   insn=0x00000000004A1E3C string=0x00000000004A1E54 "a"
 *   insn=0x00000000004A1E40 string=0x00000000004A1E44 "U"
 *   insn=0x00000000004A1E54 string=0x00000000004A1E58 "`"
 *   insn=0x00000000004A1E5C string=0x00000000004A1E60 "a"
 *   insn=0x00000000004A1E5C string=0x00000000001F6A10 "0'"
 *   insn=0x00000000004A1E60 string=0x00000000004A1E64 "`B"
 *   insn=0x00000000004A1E64 string=0x00000000004A1E68 "~r"
 *   insn=0x00000000004A1E68 string=0x00000000004A1E6C "a"
 *   insn=0x00000000004A1E6C string=0x00000000004A1E70 "`"
 *   insn=0x00000000004A1E74 string=0x00000000004A1E78 "t"
 *   insn=0x00000000004A1E74 string=0x00000000001F5D20 "P'"
 *   insn=0x00000000004A1E78 string=0x00000000004A1E7C "4"
 *   insn=0x00000000004A1E7C string=0x00000000004A1EC0 "t"
 *   insn=0x00000000004A1E80 string=0x00000000004A1E84 ""
 *   insn=0x00000000004A1E90 string=0x00000000004A1E94 "\t@"
 *   insn=0x00000000004A1EA0 string=0x00000000004A1EA4 ""
 *   insn=0x00000000004A1EB0 string=0x00000000004A1EB4 "@"
 *   insn=0x00000000004A1EC0 string=0x00000000004A1EC4 "4"
 *   insn=0x00000000004A1EC8 string=0x00000000004A1ECC ""
 *   insn=0x00000000004A1ED8 string=0x00000000004A1EDC "\t@"
 *   insn=0x00000000004A1EE8 string=0x00000000004A1EEC ""
 *   insn=0x00000000004A1EF8 string=0x00000000004A1EFC "@"
 *   insn=0x00000000004A1F20 string=0x00000000004A1F24 "u"
 *   insn=0x00000000004A1F28 string=0x00000000004A1F2C "&"
 *   insn=0x00000000004A1F2C string=0x00000000004A1FC4 "u"
 *   insn=0x00000000004A1F38 string=0x00000000004A1F3C "u"
 *   insn=0x00000000004A1F40 string=0x00000000004A1F44 "}"
 *   insn=0x00000000004A1F54 string=0x00000000004A1F58 "("
 *   insn=0x00000000004A1F58 string=0x00000000004A1F5C "\t\t@"
 *   insn=0x00000000004A1F58 string=0x00000000004A1F7C "u"
 *   insn=0x00000000004A1F5C string=0x00000000004A1F60 ")"
 *   insn=0x00000000004A1F60 string=0x00000000004A1F64 "\t\t"
 *   insn=0x00000000004A1F68 string=0x00000000004A1F6C "\t"
 *   insn=0x00000000004A1F6C string=0x00000000004A1F70 ")"
 *   insn=0x00000000004A1F74 string=0x00000000004A1F78 " "
 *   insn=0x00000000004A1F7C string=0x00000000004A1F80 "5"
 *   insn=0x00000000004A1F84 string=0x00000000004A1F88 ""
 *   insn=0x00000000004A1F94 string=0x00000000004A1F98 "\t@"
 *   insn=0x00000000004A1FA4 string=0x00000000004A1FA8 ""
 *   insn=0x00000000004A1FB4 string=0x00000000004A1FB8 "@"
 *   insn=0x00000000004A1FC4 string=0x00000000004A1FC8 "w"
 *   insn=0x00000000004A1FD0 string=0x00000000004A2060 "`"
 *   insn=0x00000000004A1FD8 string=0x00000000004A1FDC "6"
 *   insn=0x00000000004A1FE0 string=0x00000000004A1FE4 ""
 *   insn=0x00000000004A1FF0 string=0x00000000004A1FF4 "\t@"
 *   insn=0x00000000004A2000 string=0x00000000004A2004 ""
 *   insn=0x00000000004A2010 string=0x00000000004A2014 "@"
 *   insn=0x00000000004A202C string=0x00000000004A2030 "!"
 *   insn=0x00000000004A2030 string=0x00000000004A2034 ""
 *   insn=0x00000000004A203C string=0x00000000004A2040 "u"
 *   insn=0x00000000004A2040 string=0x00000000004A2044 "u"
 *   insn=0x00000000004A2044 string=0x00000000004A2048 "*"
 *   insn=0x00000000004A2048 string=0x00000000004A20F0 "u"
 *   insn=0x00000000004A2050 string=0x00000000004A209C "a"
 *   insn=0x00000000004A2058 string=0x00000000004A2090 "a"
 *   insn=0x00000000004A2060 string=0x00000000004A2064 "u"
 *   insn=0x00000000004A206C string=0x00000000004A2084 "a"
 *   insn=0x00000000004A2084 string=0x00000000004A2088 "`"
 *   insn=0x00000000004A2088 string=0x00000000004A208C "aR"
 *   insn=0x00000000004A2090 string=0x00000000004A2094 "`B"
 *   insn=0x00000000004A209C string=0x00000000004A20A0 "`"
 *   insn=0x00000000004A20A4 string=0x00000000004A20A8 "u"
 *   insn=0x00000000004A20A8 string=0x00000000004A20AC "5"
 *   insn=0x00000000004A20B0 string=0x00000000004A20B4 ""
 *   insn=0x00000000004A20C0 string=0x00000000004A20C4 "\t@"
 *   insn=0x00000000004A20D0 string=0x00000000004A20D4 ""
 *   insn=0x00000000004A20E0 string=0x00000000004A20E4 "@"
 *   insn=0x00000000004A20F0 string=0x00000000004A20F4 "5"
 *   insn=0x00000000004A20F8 string=0x00000000004A20FC ""
 *   insn=0x00000000004A2108 string=0x00000000004A210C "\t@"
 *   insn=0x00000000004A2118 string=0x00000000004A211C ""
 *   insn=0x00000000004A2128 string=0x00000000004A212C "@"
 *   insn=0x00000000004A2138 string=0x00000000004A213C "=s"
 *   insn=0x00000000004A2168 string=0x00000000004A216C "QT"
 *   insn=0x00000000004A2174 string=0x00000000004A2178 "NT"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIWindow::~GUIWindow(Caver::GUIWindow *this)
{
  _QWORD *v2; // x20
  __int128 v3; // q0
  __int64 v4; // x8
  __int64 v5; // x8
  _DWORD *v6; // x0
  int v7; // w8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  Caver::GUIWindow **v11; // x20
  Caver::GUIWindow *v12; // x21
  Caver::GUIWindow *v13; // x23
  __int64 v14; // x8
  __int64 v15; // x8
  Caver::GUIWindow **v16; // x0
  Caver::GUIWindow *v17; // x21
  _QWORD *v18; // x20
  __int64 v19; // x8
  __int64 v20; // x8
  _QWORD *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 67);
  *(_QWORD *)&v3 = &off_6D6B58;
  *((_QWORD *)&v3 + 1) = off_6D6B88;
  *(_QWORD *)this = off_6D69E0;
  *((_OWORD *)this + 15) = v3;
  if ( v2 )
  {
    v4 = v2[1] - 1LL;
    v2[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v5 = v2[2] - 1LL;
      v2[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v6 = (_DWORD *)*((_QWORD *)this + 65);
  if ( v6 )
  {
    v7 = v6[2] - 1;
    v6[2] = v7;
    if ( !v7 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v8 = (_QWORD *)*((_QWORD *)this + 62);
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
  v11 = (Caver::GUIWindow **)*((_QWORD *)this + 56);
  if ( v11 != (Caver::GUIWindow **)((char *)this + 448) )
  {
    do
    {
      v12 = v11[3];
      v13 = *v11;
      if ( v12 )
      {
        v14 = *((_QWORD *)v12 + 1) - 1LL;
        *((_QWORD *)v12 + 1) = v14;
        if ( !v14 )
        {
          (*(void (__fastcall **)(Caver::GUIWindow *))(*(_QWORD *)v12 + 16LL))(v12);
          v15 = *((_QWORD *)v12 + 2) - 1LL;
          *((_QWORD *)v12 + 2) = v15;
          if ( !v15 )
            (*(void (__fastcall **)(Caver::GUIWindow *))(*(_QWORD *)v12 + 24LL))(v12);
        }
      }
      operator delete(v11);
      v11 = (Caver::GUIWindow **)v13;
    }
    while ( v13 != (Caver::GUIWindow *)((char *)this + 448) );
  }
  v16 = (Caver::GUIWindow **)*((_QWORD *)this + 54);
  if ( v16 != (Caver::GUIWindow **)((char *)this + 432) )
  {
    do
    {
      v17 = *v16;
      operator delete(v16);
      v16 = (Caver::GUIWindow **)v17;
    }
    while ( v17 != (Caver::GUIWindow *)((char *)this + 432) );
  }
  std::_Rb_tree<unsigned long,std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,boost::shared_ptr<Caver::GUIView>>>>::_M_erase();
  std::_Rb_tree<unsigned long,std::pair<unsigned long const,Caver::FWTouch>,std::_Select1st<std::pair<unsigned long const,Caver::FWTouch>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Caver::FWTouch>>>::_M_erase();
  std::_Rb_tree<unsigned int,unsigned int,std::_Identity<unsigned int>,std::less<unsigned int>,std::allocator<unsigned int>>::_M_erase();
  v18 = (_QWORD *)*((_QWORD *)this + 35);
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
  v21 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v21 )
  {
    v22 = v21[1] - 1LL;
    v21[1] = v22;
    if ( !v22 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
      v23 = v21[2] - 1LL;
      v21[2] = v23;
      if ( !v23 )
        (*(void (__fastcall **)(_QWORD *))(*v21 + 24LL))(v21);
    }
  }
  Caver::GUIView::~GUIView(this);
}

