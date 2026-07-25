/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000428DBC
 * Mangled: _ZN5Caver7MapViewD0Ev
 * Demangled: Caver::MapView::~MapView()
 *
 * Callers: 1
 *   0x0000000000427E78  Caver::MapView::~MapView()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FD0E0  Caver::MapView::~MapView()
 *   0x0000000000428DF4  std::vector<std::string,std::allocator<std::string>>::operator=(std::vector<std::string,std::allocator<std::string>> const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x0000000000428DCC string=0x00000000001FD0E0 "0'"
 *   insn=0x0000000000428DD8 string=0x0000000000428DDC "59"
 *   insn=0x0000000000428DDC string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000428DE4 string=0x0000000000428DE8 "29"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapView::~MapView(Caver::MapView *this)
{
  Caver::MapView::~MapView(this);
  operator delete(this);
}

