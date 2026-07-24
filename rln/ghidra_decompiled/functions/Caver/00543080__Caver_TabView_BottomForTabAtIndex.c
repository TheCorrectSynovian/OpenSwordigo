/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00543080
 * Function: Caver::TabView::BottomForTabAtIndex
 * Signature: undefined __thiscall BottomForTabAtIndex(TabView * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TabView::BottomForTabAtIndex(int) */

float __thiscall Caver::TabView::BottomForTabAtIndex(TabView *this,int param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = GUIWindow::mainWindow();
                    /* try { // try from 005430a4 to 006430b7 has its CatchHandler @ 00543734 */
                    /* try { // try from 005430b8 to 006430c3 has its CatchHandler @ 005436fc */
  fVar2 = 10.0;
  if (*(float *)(lVar1 + 0x90) < _DAT_006884d0) {
    fVar2 = 6.0;
  }
  return (*(float *)(*(long *)(this + 0xf8) + 0x58) + fVar2) * (float)param_1;
}


