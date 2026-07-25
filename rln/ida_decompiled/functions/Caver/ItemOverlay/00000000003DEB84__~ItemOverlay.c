/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DEB84
 * Mangled: _ZN5Caver11ItemOverlayD2Ev
 * Demangled: Caver::ItemOverlay::~ItemOverlay()
 *
 * Callers: 1
 *   0x00000000001F5140  Caver::ItemOverlay::~ItemOverlay()
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8990  Caver::FontText::~FontText()
 *   0x00000000001FC1B0  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ulong>> *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003DEEE8  Caver::ItemOverlay::~ItemOverlay()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 98
 *   insn=0x00000000003DEB94 string=0x00000000003DEB98 "("
 *   insn=0x00000000003DEB98 string=0x00000000003DEB9C "5C"
 *   insn=0x00000000003DEBA0 string=0x00000000003DEBA4 "`"
 *   insn=0x00000000003DEBA4 string=0x00000000003DEBA8 "A"
 *   insn=0x00000000003DEBA8 string=0x00000000003DEBAC "h"
 *   insn=0x00000000003DEBAC string=0x00000000003DEBB0 "xg"
 *   insn=0x00000000003DEBB0 string=0x00000000003DEBB4 "`"
 *   insn=0x00000000003DEBB0 string=0x00000000001F8990 "0'"
 *   insn=0x00000000003DEBB4 string=0x00000000003DEBB8 "@"
 *   insn=0x00000000003DEBB8 string=0x00000000003DEBC0 "`"
 *   insn=0x00000000003DEBBC string=0x00000000001F4F60 "P'"
 *   insn=0x00000000003DEBC0 string=0x00000000003DEBC4 "@"
 *   insn=0x00000000003DEBC4 string=0x00000000003DEBCC "`"
 *   insn=0x00000000003DEBD0 string=0x00000000003DEBD4 "@"
 *   insn=0x00000000003DEBD0 string=0x00000000003DEBF0 "`"
 *   insn=0x00000000003DEBD4 string=0x00000000003DEBD8 ""
 *   insn=0x00000000003DEBD8 string=0x00000000003DEBDC ""
 *   insn=0x00000000003DEBE0 string=0x00000000003DEBE4 ""
 *   insn=0x00000000003DEBE4 string=0x00000000003DEBE8 ""
 *   insn=0x00000000003DEBF0 string=0x00000000003DEBF4 "@"
 *   insn=0x00000000003DEBF4 string=0x00000000003DEBFC "`"
 *   insn=0x00000000003DEBFC string=0x00000000003DEC00 "@"
 *   insn=0x00000000003DEC00 string=0x00000000003DEC08 "`"
 *   insn=0x00000000003DEC0C string=0x00000000003DEC10 "@"
 *   insn=0x00000000003DEC0C string=0x00000000003DEC2C "a"
 *   insn=0x00000000003DEC10 string=0x00000000003DEC14 ""
 *   insn=0x00000000003DEC14 string=0x00000000003DEC18 ""
 *   insn=0x00000000003DEC1C string=0x00000000003DEC20 ""
 *   insn=0x00000000003DEC20 string=0x00000000003DEC24 ""
 *   insn=0x00000000003DEC2C string=0x00000000003DEC30 "`"
 *   insn=0x00000000003DEC30 string=0x00000000003DEC34 "_u"
 *   insn=0x00000000003DEC34 string=0x00000000003DEC38 "t"
 *   insn=0x00000000003DEC34 string=0x00000000001FC1B0 "0'"
 *   insn=0x00000000003DEC40 string=0x00000000003DEC9C "t"
 *   insn=0x00000000003DEC44 string=0x00000000003DEC48 "5"
 *   insn=0x00000000003DEC4C string=0x00000000003DEC50 ""
 *   insn=0x00000000003DEC5C string=0x00000000003DEC60 "\t@"
 *   insn=0x00000000003DEC6C string=0x00000000003DEC70 ""
 *   insn=0x00000000003DEC7C string=0x00000000003DEC80 "@"
 *   insn=0x00000000003DEC94 string=0x00000000003DEC98 "t"
 *   insn=0x00000000003DEC9C string=0x00000000003DECA8 "t~@"
 *   insn=0x00000000003DECA4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DECA8 string=0x00000000003DECAC "4"
 *   insn=0x00000000003DECB0 string=0x00000000003DECB4 ""
 *   insn=0x00000000003DECC0 string=0x00000000003DECC4 "\t@"
 *   insn=0x00000000003DECD0 string=0x00000000003DECD4 ""
 *   insn=0x00000000003DECE0 string=0x00000000003DECE4 "@"
 *   insn=0x00000000003DED00 string=0x00000000003DED04 "K"
 *   insn=0x00000000003DED08 string=0x00000000003DED0C ")"
 *   insn=0x00000000003DED0C string=0x00000000003DEDB0 "a"
 *   insn=0x00000000003DED10 string=0x00000000003DED14 "`"
 *   insn=0x00000000003DED14 string=0x00000000003DED18 " "
 *   insn=0x00000000003DED18 string=0x00000000003DED7C "yX"
 *   insn=0x00000000003DED1C string=0x00000000003DED80 "`"
 *   insn=0x00000000003DED20 string=0x00000000003DED24 "j"
 *   insn=0x00000000003DED28 string=0x00000000003DED2C "$"
 *   insn=0x00000000003DED2C string=0x00000000003DEDBC "h"
 *   insn=0x00000000003DED34 string=0x00000000003DED38 "h"
 *   insn=0x00000000003DED38 string=0x00000000003DED44 "`"
 *   insn=0x00000000003DED44 string=0x00000000003DED48 "@"
 *   insn=0x00000000003DED48 string=0x00000000003DED50 "`"
 *   insn=0x00000000003DED54 string=0x00000000003DED58 "@"
 *   insn=0x00000000003DED54 string=0x00000000003DED74 "`"
 *   insn=0x00000000003DED58 string=0x00000000003DED5C ""
 *   insn=0x00000000003DED5C string=0x00000000003DED60 ""
 *   insn=0x00000000003DED64 string=0x00000000003DED68 ""
 *   insn=0x00000000003DED68 string=0x00000000003DED6C ""
 *   insn=0x00000000003DED74 string=0x00000000003DED78 "@"
 *   insn=0x00000000003DED80 string=0x00000000003DED84 "@"
 *   insn=0x00000000003DED84 string=0x00000000003DED88 "vX"
 *   insn=0x00000000003DED84 string=0x00000000003DED8C "`"
 *   insn=0x00000000003DED90 string=0x00000000003DED94 "@"
 *   insn=0x00000000003DED94 string=0x00000000003DED98 ""
 *   insn=0x00000000003DED98 string=0x00000000003DED9C ""
 *   insn=0x00000000003DEDA0 string=0x00000000003DEDA4 ""
 *   insn=0x00000000003DEDA4 string=0x00000000003DEDA8 ""
 *   insn=0x00000000003DEDB0 string=0x00000000003DEDB4 "`"
 *   insn=0x00000000003DEDDC string=0x00000000003DEE34 "a"
 *   insn=0x00000000003DEDE0 string=0x00000000003DEDE4 "J"
 *   insn=0x00000000003DEDE8 string=0x00000000003DEDEC "A"
 *   insn=0x00000000003DEDF0 string=0x00000000003DEDF4 ")\t@"
 *   insn=0x00000000003DEDFC string=0x00000000003DEE00 " "
 *   insn=0x00000000003DEE0C string=0x00000000003DEE10 "J"
 *   insn=0x00000000003DEE1C string=0x00000000003DEE20 "@"
 *   insn=0x00000000003DEE34 string=0x00000000003DEE38 "?"
 *   insn=0x00000000003DEE3C string=0x00000000003DEE40 "`"
 *   insn=0x00000000003DEE48 string=0x00000000003DEE84 "u~@"
 *   insn=0x00000000003DEE50 string=0x00000000003DEE54 "h"
 *   insn=0x00000000003DEE58 string=0x00000000003DEE5C "<"
 *   insn=0x00000000003DEE68 string=0x00000000003DEE6C "8"
 *   insn=0x00000000003DEE6C string=0x00000000003DEE70 "h"
 *   insn=0x00000000003DEE74 string=0x00000000003DEE78 "h"
 *   insn=0x00000000003DEE84 string=0x00000000003DEE88 "5"
 *   insn=0x00000000003DEE8C string=0x00000000003DEE90 ""
 *   insn=0x00000000003DEE9C string=0x00000000003DEEA0 "\t@"
 *   insn=0x00000000003DEEAC string=0x00000000003DEEB0 ""
 *   insn=0x00000000003DEEBC string=0x00000000003DEEC0 "@"
 *   insn=0x00000000003DEED4 string=0x00000000003DEED8 "{"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemOverlay::~ItemOverlay(Caver::ItemOverlay *this)
{
  void *v2; // x0
  void *v3; // x0
  _DWORD *v4; // x0
  int v5; // w8
  void *v6; // x0
  void *v7; // x0
  _DWORD *v8; // x0
  int v9; // w8
  _QWORD *v10; // x20
  _QWORD *v11; // x22
  _QWORD *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x8
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x8

  *(_QWORD *)this = off_6D0190;
  Caver::FontText::~FontText((Caver::ItemOverlay *)((char *)this + 512));
  v2 = (void *)*((_QWORD *)this + 60);
  if ( v2 )
    operator delete[](v2);
  v3 = (void *)*((_QWORD *)this + 57);
  if ( v3 )
    operator delete[](v3);
  v4 = (_DWORD *)*((_QWORD *)this + 53);
  if ( v4 )
  {
    v5 = v4[2] - 1;
    v4[2] = v5;
    if ( !v5 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v6 = (void *)*((_QWORD *)this + 49);
  if ( v6 )
    operator delete[](v6);
  v7 = (void *)*((_QWORD *)this + 46);
  if ( v7 )
    operator delete[](v7);
  v8 = (_DWORD *)*((_QWORD *)this + 42);
  if ( v8 )
  {
    v9 = v8[2] - 1;
    v8[2] = v9;
    if ( !v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  std::_Rb_tree<std::string,std::pair<std::string const,unsigned long>,std::_Select1st<std::pair<std::string const,unsigned long>>,std::less<std::string>,std::allocator<std::pair<std::string const,unsigned long>>>::_M_erase();
  v10 = (_QWORD *)*((_QWORD *)this + 33);
  v11 = (_QWORD *)*((_QWORD *)this + 34);
  if ( v10 != v11 )
  {
    do
    {
      v12 = (_QWORD *)v10[1];
      if ( v12 )
      {
        v13 = v12[1] - 1LL;
        v12[1] = v13;
        if ( !v13 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
          v14 = v12[2] - 1LL;
          v12[2] = v14;
          if ( !v14 )
            (*(void (__fastcall **)(_QWORD *))(*v12 + 24LL))(v12);
        }
      }
      v10 += 3;
    }
    while ( v11 != v10 );
    v10 = (_QWORD *)*((_QWORD *)this + 33);
  }
  if ( v10 )
    operator delete(v10);
  v15 = (_QWORD *)*((_QWORD *)this + 31);
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
  Caver::GUIView::~GUIView(this);
}

