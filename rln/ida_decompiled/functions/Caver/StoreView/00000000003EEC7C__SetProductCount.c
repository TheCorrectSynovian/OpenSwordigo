/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003EEC7C
 * Mangled: _ZN5Caver9StoreView15SetProductCountEi
 * Demangled: Caver::StoreView::SetProductCount(int)
 *
 * Callers: 2
 *   0x00000000001FA640  Caver::StoreView::SetProductCount(int)
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *
 * Callees: 16
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *   0x00000000001F45E0  .__cxa_begin_catch
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F5E80  boost::shared_ptr<Caver::StoreProductView>::shared_ptr<Caver::StoreProductView>(Caver::StoreProductView *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F7BE0  std::vector<boost::shared_ptr<Caver::StoreProductView>,std::allocator<boost::shared_ptr<Caver::StoreProductView>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::StoreProductView>*,std::vector<boost::shared_ptr<Caver::StoreProductView>,std::allocator<boost::shared_ptr<Caver::StoreProductView>>>>,boost::shared_ptr<Caver::StoreProductView> const&)
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001F9BA0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreProductView,Caver::StoreProductView>(boost::shared_ptr<Caver::StoreProductView> const*,Caver::StoreProductView *)
 *   0x00000000001FA3F0  Caver::StoreProductView::StoreProductView(void)
 *   0x00000000001FB170  Caver::GUIView::SetFrame(Caver::Rectangle const&)
 *   0x00000000001FD590  .__cxa_end_catch
 *   0x0000000000202B70  .__cxa_rethrow
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 187
 *   insn=0x00000000003EEC90 string=0x00000000003EEC94 "V"
 *   insn=0x00000000003EEC9C string=0x00000000003EECA0 "7|@"
 *   insn=0x00000000003EECA4 string=0x00000000003EECA8 "i"T"
 *   insn=0x00000000003EECA8 string=0x00000000003EECAC "\t"
 *   insn=0x00000000003EECAC string=0x00000000003EECB0 ")"
 *   insn=0x00000000003EECB0 string=0x00000000003EECB4 "?"
 *   insn=0x00000000003EECB8 string=0x00000000003EED88 "?"
 *   insn=0x00000000003EECC0 string=0x00000000003EECD0 ""
 *   insn=0x00000000003EECC4 string=0x00000000003EECC8 ""
 *   insn=0x00000000003EECD0 string=0x00000000003EECD4 "=@"
 *   insn=0x00000000003EECD8 string=0x00000000003EECDC "h"
 *   insn=0x00000000003EECDC string=0x00000000003EECE0 "\tA"
 *   insn=0x00000000003EECE0 string=0x00000000003EECE4 "i"
 *   insn=0x00000000003EECE8 string=0x00000000003EECEC "5"
 *   insn=0x00000000003EECEC string=0x00000000003EED30 "4"
 *   insn=0x00000000003EECF0 string=0x00000000003EECF4 ""
 *   insn=0x00000000003EED00 string=0x00000000003EED04 "\t@"
 *   insn=0x00000000003EED10 string=0x00000000003EED14 ""
 *   insn=0x00000000003EED20 string=0x00000000003EED24 "@"
 *   insn=0x00000000003EED30 string=0x00000000003EED74 "i"T"
 *   insn=0x00000000003EED34 string=0x00000000003EED38 ""
 *   insn=0x00000000003EED48 string=0x00000000003EED4C "\t@"
 *   insn=0x00000000003EED54 string=0x00000000003EED58 ""
 *   insn=0x00000000003EED68 string=0x00000000003EED6C "@"
 *   insn=0x00000000003EED74 string=0x00000000003EED78 "\t"
 *   insn=0x00000000003EED78 string=0x00000000003EED7C ")"
 *   insn=0x00000000003EED7C string=0x00000000003EED80 "?"
 *   insn=0x00000000003EED8C string=0x00000000003EED90 "t"
 *   insn=0x00000000003EED8C string=0x00000000003EEECC "`"
 *   insn=0x00000000003EED98 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000003EEDA0 string=0x00000000001FA3F0 "0'"
 *   insn=0x00000000003EEDA8 string=0x00000000003EEDAC "5"
 *   insn=0x00000000003EEDAC string=0x00000000003EEDB0 "`"
 *   insn=0x00000000003EEDAC string=0x00000000001F5E80 "P'"
 *   insn=0x00000000003EEDB4 string=0x00000000003EEDB8 ""
 *   insn=0x00000000003EEDB8 string=0x00000000003EEDBC "1@"
 *   insn=0x00000000003EEDC4 string=0x00000000003EEDC8 "*"
 *   insn=0x00000000003EEDC8 string=0x00000000003EEDCC "J"
 *   insn=0x00000000003EEDCC string=0x00000000003EEDD0 "*"
 *   insn=0x00000000003EEDDC string=0x00000000003EEDE0 "5"
 *   insn=0x00000000003EEDE0 string=0x00000000003EEE24 "a"
 *   insn=0x00000000003EEDE4 string=0x00000000003EEDE8 ""
 *   insn=0x00000000003EEDF4 string=0x00000000003EEDF8 "\t@"
 *   insn=0x00000000003EEE04 string=0x00000000003EEE08 ""
 *   insn=0x00000000003EEE14 string=0x00000000003EEE18 "@"
 *   insn=0x00000000003EEE24 string=0x00000000003EEE28 "?"
 *   insn=0x00000000003EEE30 string=0x00000000003EEE34 "("
 *   insn=0x00000000003EEE38 string=0x00000000003EEE3C "("
 *   insn=0x00000000003EEE40 string=0x00000000003EEE44 "\t"
 *   insn=0x00000000003EEE40 string=0x00000000003EEE50 "(@"
 *   insn=0x00000000003EEE44 string=0x00000000003EEE48 ")"
 *   insn=0x00000000003EEE48 string=0x00000000003EEE4C "\t"
 *   insn=0x00000000003EEE50 string=0x00000000003EEE54 "h"
 *   insn=0x00000000003EEE60 string=0x00000000003EEEB8 "h&T"
 *   insn=0x00000000003EEE68 string=0x00000000003EEE6C "]#"
 *   insn=0x00000000003EEE6C string=0x00000000001F7BE0 "0'"
 *   insn=0x00000000003EEE70 string=0x00000000003EEE74 "5"
 *   insn=0x00000000003EEE78 string=0x00000000003EEE7C ""
 *   insn=0x00000000003EEE8C string=0x00000000003EEE90 "\t@"
 *   insn=0x00000000003EEE98 string=0x00000000003EEE9C ""
 *   insn=0x00000000003EEEAC string=0x00000000003EEEB0 "@"
 *   insn=0x00000000003EEEB8 string=0x00000000003EEEBC "("
 *   insn=0x00000000003EEEBC string=0x00000000003EEEC0 ""
 *   insn=0x00000000003EEEC4 string=0x00000000003EEEC8 "c"
 *   insn=0x00000000003EEED8 string=0x00000000003EEEDC "h"
 *   insn=0x00000000003EEEE0 string=0x00000000003EEEE4 "-@"
 *   insn=0x00000000003EEF14 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003EEF24 string=0x00000000003EEF28 ">"
 *   insn=0x00000000003EEF30 string=0x00000000003EEF34 "4"
 *   insn=0x00000000003EEF38 string=0x00000000003EEF3C ""
 *   insn=0x00000000003EEF48 string=0x00000000003EEF4C "\t@"
 *   insn=0x00000000003EEF58 string=0x00000000003EEF5C ""
 *   insn=0x00000000003EEF68 string=0x00000000003EEF6C "@"
 *   insn=0x00000000003EEF78 string=0x00000000003EEF7C "4"
 *   insn=0x00000000003EEF80 string=0x00000000003EEF84 ""
 *   insn=0x00000000003EEF90 string=0x00000000003EEF94 "\t@"
 *   insn=0x00000000003EEFA0 string=0x00000000003EEFA4 ""
 *   insn=0x00000000003EEFB0 string=0x00000000003EEFB4 "@"
 *   insn=0x00000000003EEFCC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003EEFD0 string=0x00000000003EEFD4 "<J"
 *   insn=0x00000000003EEFD8 string=0x00000000003EEFDC "4"
 *   insn=0x00000000003EEFE0 string=0x00000000003EEFE4 ""
 *   insn=0x00000000003EEFF0 string=0x00000000003EEFF4 "\t@"
 *   insn=0x00000000003EF000 string=0x00000000003EF004 ""
 *   insn=0x00000000003EF010 string=0x00000000003EF014 "@"
 *   insn=0x00000000003EF020 string=0x00000000003EF024 "(J"
 *   insn=0x00000000003EF044 string=0x00000000003EF048 "f"
 *   insn=0x00000000003EF04C string=0x00000000003EF050 ")"
 *   insn=0x00000000003EF05C string=0x00000000003EF060 "(A"
 *   insn=0x00000000003EF064 string=0x00000000003EF068 ""
 *   insn=0x00000000003EF070 string=0x00000000003EF074 "`""
 *   insn=0x00000000003EF080 string=0x00000000001F9BA0 "0'"
 *   insn=0x00000000003EF094 string=0x00000000003EF098 "4"
 *   insn=0x00000000003EF09C string=0x00000000003EF0A0 ""
 *   insn=0x00000000003EF0AC string=0x00000000003EF0B0 "\t@"
 *   insn=0x00000000003EF0BC string=0x00000000003EF0C0 ""
 *   insn=0x00000000003EF0CC string=0x00000000003EF0D0 "@"
 *   insn=0x00000000003EF0E4 string=0x00000000003EF0E8 ">"
 *   insn=0x00000000003EF0E8 string=0x00000000001F45E0 "P'"
 *   insn=0x00000000003EF0EC string=0x00000000003EF0F0 "h"
 *   insn=0x00000000003EF0F0 string=0x00000000003EF0F4 "!@"
 *   insn=0x00000000003EF104 string=0x00000000003EF108 ""9"
 *   insn=0x00000000003EF108 string=0x00000000001FD590 "0'"
 *   insn=0x00000000003EF130 string=0x00000000003EF134 "U"
 *   insn=0x00000000003EF144 string=0x00000000003EF148 "`"
 *   insn=0x00000000003EF144 string=0x00000000001F94B0 "0'"
 *   insn=0x00000000003EF148 string=0x00000000003EF14C "`"
 *   insn=0x00000000003EF14C string=0x00000000003EF150 "a"
 *   insn=0x00000000003EF150 string=0x00000000003EF154 "h"
 *   insn=0x00000000003EF180 string=0x00000000003EF184 "h"
 *   insn=0x00000000003EF180 string=0x00000000001FB170 "0'"
 *   insn=0x00000000003EF184 string=0x00000000003EF188 ")"
 *   insn=0x00000000003EF188 string=0x00000000003EF18C " EA"
 *   insn=0x00000000003EF18C string=0x00000000003EF190 "i"
 *   insn=0x00000000003EF190 string=0x00000000003EF194 ""
 *   insn=0x00000000003EF194 string=0x00000000003EF198 "`"
 *   insn=0x00000000003EF1A8 string=0x00000000003EF1AC "tz@"
 *   insn=0x00000000003EF1B8 string=0x00000000003EF1BC "h"
 *   insn=0x00000000003EF1B8 string=0x00000000001F5CB0 "P'"
 *   insn=0x00000000003EF1C4 string=0x00000000003EF1C8 "iz@"
 *   insn=0x00000000003EF1D4 string=0x00000000003EF1D8 "$"
 *   insn=0x00000000003EF1D8 string=0x00000000003EF1DC "\n"
 *   insn=0x00000000003EF1DC string=0x00000000003EF1E0 "\t"
 *   insn=0x00000000003EF1E4 string=0x00000000003EF1E8 "c*"
 *   insn=0x00000000003EF1EC string=0x00000000003EF1F0 "B(#"
 *   insn=0x00000000003EF1F0 string=0x00000000003EF1F4 "!*"
 *   insn=0x00000000003EF1F8 string=0x00000000003EF1FC "A8!"
 *   insn=0x00000000003EF200 string=0x00000000003EF204 "!@&"
 *   insn=0x00000000003EF218 string=0x00000000003EF21C "tz@"
 *   insn=0x00000000003EF21C string=0x00000000003EF220 ""
 *   insn=0x00000000003EF230 string=0x00000000001F3C90 "P'"
 *   insn=0x00000000003EF240 string=0x00000000003EF244 "t"
 *   insn=0x00000000003EF248 string=0x00000000003EF24C "i"
 *   insn=0x00000000003EF254 string=0x00000000003EF258 "h"
 *   insn=0x00000000003EF258 string=0x00000000003EF25C """
 *   insn=0x00000000003EF274 string=0x00000000003EF278 "!*"
 *   insn=0x00000000003EF278 string=0x00000000003EF27C "c*"
 *   insn=0x00000000003EF280 string=0x00000000003EF284 "A(!"
 *   insn=0x00000000003EF284 string=0x00000000003EF288 "!8#"
 *   insn=0x00000000003EF288 string=0x00000000003EF28C "!@&"
 *   insn=0x00000000003EF2A0 string=0x00000000003EF2A4 "t"
 *   insn=0x00000000003EF2B0 string=0x00000000003EF2B4 "w"
 *   insn=0x00000000003EF2C4 string=0x00000000003EF2C8 "z"
 *   insn=0x00000000003EF2D4 string=0x00000000003EF2D8 "(("
 *   insn=0x00000000003EF2D8 string=0x00000000003EF2DC "u"
 *   insn=0x00000000003EF2E0 string=0x00000000003EF2E4 "`"
 *   insn=0x00000000003EF2E4 string=0x00000000003EF2E8 "h"
 *   insn=0x00000000003EF308 string=0x00000000003EF30C "h&T"
 *   insn=0x00000000003EF30C string=0x00000000003EF310 "?"
 *   insn=0x00000000003EF314 string=0x00000000003EF32C ")"
 *   insn=0x00000000003EF320 string=0x00000000003EF324 "m"
 *   insn=0x00000000003EF324 string=0x00000000003EF328 "!"
 *   insn=0x00000000003EF324 string=0x00000000003EF390 ")"
 *   insn=0x00000000003EF328 string=0x00000000003EF3AC "`"
 *   insn=0x00000000003EF32C string=0x00000000003EF330 ")"
 *   insn=0x00000000003EF340 string=0x00000000003EF344 "i"
 *   insn=0x00000000003EF348 string=0x00000000003EF34C "))"
 *   insn=0x00000000003EF350 string=0x00000000003EF354 ")"
 *   insn=0x00000000003EF364 string=0x00000000003EF368 "h&T"
 *   insn=0x00000000003EF370 string=0x00000000003EF374 ")"
 *   insn=0x00000000003EF374 string=0x00000000003EF378 "*"
 *   insn=0x00000000003EF378 string=0x00000000003EF37C "_"
 *   insn=0x00000000003EF37C string=0x00000000003EF380 "("
 *   insn=0x00000000003EF380 string=0x00000000003EF384 "("
 *   insn=0x00000000003EF390 string=0x00000000003EF394 " "
 *   insn=0x00000000003EF394 string=0x00000000003EF398 ""
 *   insn=0x00000000003EF398 string=0x00000000003EF39C ""
 *   insn=0x00000000003EF3A0 string=0x00000000003EF3A4 ") "
 *   insn=0x00000000003EF3B8 string=0x00000000003EF3BC ""
 *   insn=0x00000000003EF3BC string=0x00000000003EF3C0 "\t"
 *   insn=0x00000000003EF3C4 string=0x00000000003EF3C8 ""
 *   insn=0x00000000003EF3DC string=0x00000000003EF3E0 "h"
 *   insn=0x00000000003EF3E4 string=0x00000000003EF3E8 ""EI"
 *   insn=0x00000000003EF3E4 string=0x0000000000583944 "\n"
 *   insn=0x00000000003EF3FC string=0x00000000003EF400 "!(#"
 *   insn=0x00000000003EF404 string=0x00000000003EF408 "!8$"
 *   insn=0x00000000003EF408 string=0x00000000003EF40C "c"
 *   insn=0x00000000003EF40C string=0x00000000003EF410 "` ""
 *   insn=0x00000000003EF410 string=0x00000000003EF414 "!@!"
 *   insn=0x00000000003EF414 string=0x00000000003EF418 "M"
 *   insn=0x00000000003EF424 string=0x00000000003EF428 "\t"
 *   insn=0x00000000003EF42C string=0x00000000003EF430 "#8#"
 *   insn=0x00000000003EF430 string=0x00000000003EF434 "c"
 *   insn=0x00000000003EF434 string=0x00000000003EF438 "` ""
 *   insn=0x00000000003EF438 string=0x00000000003EF43C "M"
 *   insn=0x00000000003EF43C string=0x00000000003EF444 "\t"
 *   insn=0x00000000003EF45C string=0x00000000003EF460 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StoreView::SetProductCount(Caver::StoreView *this, int a2)
{
  unsigned __int64 v3; // x23
  __int64 v4; // x8
  unsigned __int64 v5; // x9
  __int64 v6; // x0
  _QWORD *v7; // x20
  __int64 v8; // x8
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  Caver::StoreProductView *v14; // x0
  void (*v15)(void); // x8
  __int64 v16; // x8
  __int64 v17; // x8
  _QWORD *v18; // x1
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // [xsp+C0h] [xbp-48h]
  _QWORD *v23; // [xsp+C8h] [xbp-40h]

  v3 = a2;
  _ReadStatusReg(TPIDR_EL0);
  v4 = *((_QWORD *)this + 41);
  v5 = (v4 - *((_QWORD *)this + 40)) >> 4;
  if ( v5 > a2 )
  {
    do
    {
      v6 = *(_QWORD *)(v4 - 16);
      v7 = *(_QWORD **)(v4 - 8);
      if ( v7 )
        ++v7[1];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6);
      v8 = *((_QWORD *)this + 41);
      *((_QWORD *)this + 41) = v8 - 16;
      v9 = *(_QWORD **)(v8 - 8);
      if ( v9 )
      {
        v10 = v9[1] - 1LL;
        v9[1] = v10;
        if ( !v10 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
          v11 = v9[2] - 1LL;
          v9[2] = v11;
          if ( !v11 )
            (*(void (__fastcall **)(_QWORD *))(*v9 + 24LL))(v9);
        }
      }
      if ( v7 )
      {
        v12 = v7[1] - 1LL;
        v7[1] = v12;
        if ( !v12 )
        {
          (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
          v13 = v7[2] - 1LL;
          v7[2] = v13;
          if ( !v13 )
            (*(void (__fastcall **)(_QWORD *))(*v7 + 24LL))(v7);
        }
      }
      v4 = *((_QWORD *)this + 41);
      v5 = (v4 - *((_QWORD *)this + 40)) >> 4;
    }
    while ( v5 > v3 );
  }
  if ( v5 < v3 )
  {
    while ( 1 )
    {
      v14 = (Caver::StoreProductView *)operator new(0x150u);
      Caver::StoreProductView::StoreProductView(v14);
      boost::shared_ptr<Caver::StoreProductView>::shared_ptr<Caver::StoreProductView>();
      v15 = *(void (**)(void))(**((_QWORD **)this + 38) + 96LL);
      if ( v23 )
        ++v23[1];
      v15();
      if ( v23 )
      {
        v16 = v23[1] - 1LL;
        v23[1] = v16;
        if ( !v16 )
        {
          (*(void (__fastcall **)())(*v23 + 16LL))();
          v17 = v23[2] - 1LL;
          v23[2] = v17;
          if ( !v17 )
            (*(void (__fastcall **)())(*v23 + 24LL))();
        }
      }
      v18 = (_QWORD *)*((_QWORD *)this + 41);
      if ( v18 != *((_QWORD **)this + 42) )
        break;
      std::vector<boost::shared_ptr<Caver::StoreProductView>>::_M_insert_aux();
      v19 = v23;
      if ( v23 )
        goto LABEL_26;
LABEL_29:
      if ( (__int64)(*((_QWORD *)this + 41) - *((_QWORD *)this + 40)) >> 4 >= v3 )
        goto LABEL_30;
    }
    *v18 = v22;
    v18[1] = v23;
    if ( v23 )
      ++v23[1];
    *((_QWORD *)this + 41) = v18 + 2;
    v19 = v23;
    if ( !v23 )
      goto LABEL_29;
LABEL_26:
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
    goto LABEL_29;
  }
LABEL_30:
  if ( *((float *)this + 35) > 1.0 )
    (*(void (__fastcall **)(Caver::StoreView *))(*(_QWORD *)this + 88LL))(this);
}

