/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000443B68
 * Mangled: _ZN5Caver7TabViewD0Ev
 * Demangled: Caver::TabView::~TabView()
 *
 * Callers: 1
 *   0x0000000000443814  Caver::TabView::~TabView()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200000  Caver::TabView::~TabView()
 *   0x0000000000443BA0  Caver::FastVector<std::string>::Resize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000443B74 string=0x0000000000443B78 """
 *   insn=0x0000000000443B88 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000443B98 string=0x0000000000443B9C "J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TabView::~TabView(Caver::TabView *this)
{
  Caver::TabView::~TabView(this);
  operator delete(this);
}

