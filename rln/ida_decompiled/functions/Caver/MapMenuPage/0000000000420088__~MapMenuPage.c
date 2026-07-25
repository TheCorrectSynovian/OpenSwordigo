/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000420088
 * Mangled: _ZN5Caver11MapMenuPageD0Ev
 * Demangled: Caver::MapMenuPage::~MapMenuPage()
 *
 * Callers: 1
 *   0x000000000041FB28  Caver::MapMenuPage::~MapMenuPage()
 *
 * Callees: 4
 *   0x00000000001F7000  Caver::MapMenuPage::~MapMenuPage()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000004200C0  boost::shared_ptr<Caver::MapView>::shared_ptr<Caver::MapView>(Caver::MapView *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x0000000000420098 string=0x00000000001F7000 "0'"
 *   insn=0x00000000004200A8 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapMenuPage::~MapMenuPage(Caver::MapMenuPage *this)
{
  Caver::MapMenuPage::~MapMenuPage(this);
  operator delete(this);
}

