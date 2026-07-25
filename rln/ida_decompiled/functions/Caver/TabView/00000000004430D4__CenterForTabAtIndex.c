/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004430D4
 * Mangled: _ZN5Caver7TabView19CenterForTabAtIndexEi
 * Demangled: Caver::TabView::CenterForTabAtIndex(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203290  Caver::GUIWindow::mainWindow(void)
 *
 * Referenced strings: 5
 *   insn=0x00000000004430E4 string=0x00000000004430E8 "j"
 *   insn=0x00000000004430E8 string=0x00000000004430EC "(\n"
 *   insn=0x000000000044310C string=0x0000000000443110 "!"
 *   insn=0x0000000000443110 string=0x0000000000443114 "b"
 *   insn=0x0000000000443118 string=0x000000000044311C "!""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::TabView::CenterForTabAtIndex(Caver::TabView *this, int a2)
{
  __int64 v4; // x0
  float v5; // s1

  v4 = Caver::GUIWindow::mainWindow(this);
  v5 = 10.0;
  if ( *(float *)(v4 + 144) < 350.0 )
    v5 = 6.0;
  return (float)(*(float *)(*((_QWORD *)this + 31) + 88LL) * 0.5)
       + (float)((float)(*(float *)(*((_QWORD *)this + 31) + 88LL) + v5) * (float)a2);
}

