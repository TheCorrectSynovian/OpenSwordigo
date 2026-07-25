/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042BB38
 * Mangled: _ZN5Caver11NewMenuViewD2Ev
 * Demangled: Caver::NewMenuView::~NewMenuView()
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA120  .strcmp
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x0000000000200BA0  std::vector<boost::shared_ptr<Caver::GUIButton>,std::allocator<boost::shared_ptr<Caver::GUIButton>>>::~vector()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 36
 *   insn=0x000000000042BB44 string=0x000000000042BB48 ""
 *   insn=0x000000000042BB4C string=0x000000000042BB50 "A"
 *   insn=0x000000000042BB50 string=0x000000000042BB54 ""
 *   insn=0x000000000042BB78 string=0x000000000042BB7C "RW"
 *   insn=0x000000000042BB98 string=0x000000000042BB9C "t"
 *   insn=0x000000000042BB9C string=0x000000000042BBA0 ""
 *   insn=0x000000000042BBA4 string=0x000000000042BBA8 "A"
 *   insn=0x000000000042BBA8 string=0x000000000042BBAC "h"
 *   insn=0x000000000042BBB0 string=0x000000000042BC0C "t"
 *   insn=0x000000000042BBB4 string=0x000000000042BBB8 "5"
 *   insn=0x000000000042BBBC string=0x000000000042BBC0 ""
 *   insn=0x000000000042BBCC string=0x000000000042BBD0 "\t@"
 *   insn=0x000000000042BBDC string=0x000000000042BBE0 ""
 *   insn=0x000000000042BBEC string=0x000000000042BBF0 "@"
 *   insn=0x000000000042BC04 string=0x000000000042BC08 "t~@"
 *   insn=0x000000000042BC14 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000042BC34 string=0x000000000042BC38 ""
 *   insn=0x000000000042BC40 string=0x000000000042BC44 "h"
 *   insn=0x000000000042BC50 string=0x000000000042BC54 "wL"
 *   insn=0x000000000042BC78 string=0x000000000042BC7C "_"
 *   insn=0x000000000042BC84 string=0x000000000042BC9C "_"
 *   insn=0x000000000042BC88 string=0x000000000042BC8C ""
 *   insn=0x000000000042BC90 string=0x000000000042BC94 "h"
 *   insn=0x000000000042BCA0 string=0x000000000042BCB8 "_"
 *   insn=0x000000000042BCA4 string=0x000000000042BCA8 "h\n"
 *   insn=0x000000000042BCAC string=0x000000000042BCB0 "`"
 *   insn=0x000000000042BCBC string=0x000000000042BCC0 "_"
 *   insn=0x000000000042BCC0 string=0x000000000042BCC4 "!"
 *   insn=0x000000000042BCC4 string=0x000000000042BCC8 "h"
 *   insn=0x000000000042BCCC string=0x000000000042BCD0 ""
 *   insn=0x000000000042BCD4 string=0x000000000042BCD8 "*"
 *   insn=0x000000000042BCD8 string=0x000000000042BCDC "!"
 *   insn=0x000000000042BCDC string=0x000000000042BCE0 "_"
 *   insn=0x000000000042BCDC string=0x0000000000594A60 "N5boost3_bi6bind_tIvNS_4_mfi3mf2IvN5Caver11NewMenuViewEPvPNS4_8GUIEventEEENS0_5list3INS0_5valueIPS5_EENS_3argILi1EEENSE_ILi2EEEEEEE"
 *   insn=0x000000000042BCE0 string=0x000000000042BCE4 " "
 *   insn=0x000000000042BCE8 string=0x00000000001FA120 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::NewMenuView::~NewMenuView(Caver::NewMenuView *this)
{
  *(_QWORD *)this = off_6D3070;
  std::vector<boost::shared_ptr<Caver::GUIButton>>::~vector();
  Caver::GUIView::~GUIView(this);
}

