/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003DEEE8
 * Mangled: _ZN5Caver11ItemOverlayD0Ev
 * Demangled: Caver::ItemOverlay::~ItemOverlay()
 *
 * Callers: 1
 *   0x00000000003DEB84  Caver::ItemOverlay::~ItemOverlay()
 *
 * Callees: 4
 *   0x00000000001F5140  Caver::ItemOverlay::~ItemOverlay()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000003DEF20  std::_Rb_tree<std::string,std::pair<std::string const,ulong>,std::_Select1st<std::pair<std::string const,ulong>>,std::less<std::string>,std::allocator<std::pair<std::string const,ulong>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,ulong>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x00000000003DEEF8 string=0x00000000001F5140 "P'"
 *   insn=0x00000000003DEF08 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003DEF18 string=0x00000000003DEF1C "j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ItemOverlay::~ItemOverlay(Caver::ItemOverlay *this)
{
  Caver::ItemOverlay::~ItemOverlay(this);
  operator delete(this);
}

