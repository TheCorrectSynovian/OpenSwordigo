/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000040E918
 * Mangled: _ZN5Caver20InventoryTrinketSlotD2Ev
 * Demangled: Caver::InventoryTrinketSlot::~InventoryTrinketSlot()
 *
 * Callers: 1
 *   0x00000000001FC150  Caver::InventoryTrinketSlot::~InventoryTrinketSlot()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC150  Caver::InventoryTrinketSlot::~InventoryTrinketSlot()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000040EBC8  boost::detail::sp_counted_impl_p<Caver::DraggableMenuItem>::~sp_counted_impl_p()
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 56
 *   insn=0x000000000040E92C string=0x000000000040E930 ""
 *   insn=0x000000000040E930 string=0x000000000040E934 "t"
 *   insn=0x000000000040E934 string=0x000000000040E938 "\tA"
 *   insn=0x000000000040E938 string=0x000000000040E93C ""
 *   insn=0x000000000040E93C string=0x000000000040E940 "i"
 *   insn=0x000000000040E940 string=0x000000000040E944 "hz"
 *   insn=0x000000000040E944 string=0x000000000040E948 "4"
 *   insn=0x000000000040E948 string=0x000000000040E98C "t"
 *   insn=0x000000000040E94C string=0x000000000040E950 ""
 *   insn=0x000000000040E95C string=0x000000000040E960 "\t@"
 *   insn=0x000000000040E96C string=0x000000000040E970 ""
 *   insn=0x000000000040E97C string=0x000000000040E980 "@"
 *   insn=0x000000000040E98C string=0x000000000040E990 "4"
 *   insn=0x000000000040E990 string=0x000000000040E9D4 "t"
 *   insn=0x000000000040E994 string=0x000000000040E998 ""
 *   insn=0x000000000040E9A4 string=0x000000000040E9A8 "\t@"
 *   insn=0x000000000040E9B4 string=0x000000000040E9B8 ""
 *   insn=0x000000000040E9C4 string=0x000000000040E9C8 "@"
 *   insn=0x000000000040E9D4 string=0x000000000040E9D8 "4"
 *   insn=0x000000000040E9D8 string=0x000000000040EA1C "t"
 *   insn=0x000000000040E9DC string=0x000000000040E9E0 ""
 *   insn=0x000000000040E9EC string=0x000000000040E9F0 "\t@"
 *   insn=0x000000000040E9FC string=0x000000000040EA00 ""
 *   insn=0x000000000040EA0C string=0x000000000040EA10 "@"
 *   insn=0x000000000040EA1C string=0x000000000040EA20 "4"
 *   insn=0x000000000040EA24 string=0x000000000040EA28 ""
 *   insn=0x000000000040EA34 string=0x000000000040EA38 "\t@"
 *   insn=0x000000000040EA44 string=0x000000000040EA48 ""
 *   insn=0x000000000040EA54 string=0x000000000040EA58 "@"
 *   insn=0x000000000040EA78 string=0x000000000040EA7C "@"
 *   insn=0x000000000040EA80 string=0x000000000040EA84 "u"
 *   insn=0x000000000040EA88 string=0x000000000040EA8C "<"
 *   insn=0x000000000040EA90 string=0x000000000040EA94 "u"
 *   insn=0x000000000040EA98 string=0x000000000040EA9C "&"
 *   insn=0x000000000040EA9C string=0x000000000040EB34 "u"
 *   insn=0x000000000040EAA4 string=0x000000000040EAA8 "5"
 *   insn=0x000000000040EAA8 string=0x000000000040EAEC "u"
 *   insn=0x000000000040EAAC string=0x000000000040EAB0 ""
 *   insn=0x000000000040EABC string=0x000000000040EAC0 "\t@"
 *   insn=0x000000000040EACC string=0x000000000040EAD0 ""
 *   insn=0x000000000040EADC string=0x000000000040EAE0 "@"
 *   insn=0x000000000040EAEC string=0x000000000040EAF0 "5"
 *   insn=0x000000000040EAF4 string=0x000000000040EAF8 ""
 *   insn=0x000000000040EB04 string=0x000000000040EB08 "\t@"
 *   insn=0x000000000040EB14 string=0x000000000040EB18 ""
 *   insn=0x000000000040EB24 string=0x000000000040EB28 "@"
 *   insn=0x000000000040EB34 string=0x000000000040EB38 "5"
 *   insn=0x000000000040EB3C string=0x000000000040EB40 ""
 *   insn=0x000000000040EB4C string=0x000000000040EB50 "\t@"
 *   insn=0x000000000040EB5C string=0x000000000040EB60 ""
 *   insn=0x000000000040EB6C string=0x000000000040EB70 "@"
 *   insn=0x000000000040EB84 string=0x000000000040EB88 "O"
 *   insn=0x000000000040EB9C string=0x000000000040EBA0 "l"
 *   insn=0x000000000040EBA0 string=0x00000000001FC150 "0'"
 *   insn=0x000000000040EBB0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000040EBC0 string=0x000000000040EBC4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::InventoryTrinketSlot::~InventoryTrinketSlot(Caver::InventoryTrinketSlot *this)
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

  v2 = (_QWORD *)*((_QWORD *)this + 39);
  *(_QWORD *)this = off_6D1DC0;
  *((_QWORD *)this + 30) = off_6D1F10;
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
  v5 = (_QWORD *)*((_QWORD *)this + 37);
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
  v8 = (_QWORD *)*((_QWORD *)this + 35);
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
  v11 = (_QWORD *)*((_QWORD *)this + 33);
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
  Caver::GUIView::~GUIView(this);
}

