/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000443080
 * Mangled: _ZN5Caver7TabView19BottomForTabAtIndexEi
 * Demangled: Caver::TabView::BottomForTabAtIndex(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203290  Caver::GUIWindow::mainWindow(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000443098 string=0x000000000044309C "(\n"
 *   insn=0x00000000004430A4 string=0x00000000004430A8 "#Y@"
 *   insn=0x00000000004430BC string=0x00000000004430C0 "a"
 *   insn=0x00000000004430C0 string=0x00000000004430C4 "`( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::TabView::BottomForTabAtIndex(Caver::TabView *this, int a2)
{
  __int64 v4; // x0
  float v5; // s0

  v4 = Caver::GUIWindow::mainWindow(this);
  v5 = 10.0;
  if ( *(float *)(v4 + 144) < 350.0 )
    v5 = 6.0;
  return (float)(*(float *)(*((_QWORD *)this + 31) + 88LL) + v5) * (float)a2;
}

