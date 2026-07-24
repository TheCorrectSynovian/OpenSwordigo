/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005430d4
 * Function: Caver::TabView::CenterForTabAtIndex
 * Signature: undefined __thiscall CenterForTabAtIndex(TabView * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TabView::CenterForTabAtIndex(int) */

float __thiscall Caver::TabView::CenterForTabAtIndex(TabView *this,int param_1)

{
  long lVar1;
  float fVar2;
  
                    /* try { // try from 005430d8 to 006430eb has its CatchHandler @ 005436f8 */
  lVar1 = GUIWindow::mainWindow();
                    /* try { // try from 005430ec to 006430f7 has its CatchHandler @ 005436c0 */
                    /* try { // try from 0054310c to 0064311f has its CatchHandler @ 005436bc */
  fVar2 = 10.0;
  if (*(float *)(lVar1 + 0x90) < _DAT_006884d0) {
    fVar2 = 6.0;
  }
                    /* try { // try from 00543120 to 0064312b has its CatchHandler @ 00543684 */
  return *(float *)(*(long *)(this + 0xf8) + 0x58) * 0.5 +
         (*(float *)(*(long *)(this + 0xf8) + 0x58) + fVar2) * (float)param_1;
}


