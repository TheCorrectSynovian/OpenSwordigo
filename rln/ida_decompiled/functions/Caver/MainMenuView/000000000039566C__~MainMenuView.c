/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000039566C
 * Mangled: _ZN5Caver12MainMenuViewD0Ev
 * Demangled: Caver::MainMenuView::~MainMenuView()
 *
 * Callers: 1
 *   0x00000000003946D8  Caver::MainMenuView::~MainMenuView()
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FFF30  Caver::MainMenuView::~MainMenuView()
 *   0x00000000003956A4  Caver::MainMenuView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 3
 *   insn=0x0000000000395678 string=0x000000000039567C "-"
 *   insn=0x0000000000395688 string=0x000000000039568C "\t"
 *   insn=0x000000000039568C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MainMenuView::~MainMenuView(Caver::MainMenuView *this)
{
  Caver::MainMenuView::~MainMenuView(this);
  operator delete(this);
}

