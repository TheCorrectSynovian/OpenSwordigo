/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00543134
 * Function: Caver::TabView::AddTab
 * Signature: undefined __thiscall AddTab(TabView * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::TabView::AddTab(std::string const&) */

void __thiscall Caver::TabView::AddTab(TabView *this,string *param_1)

{
  int iVar1;
  
                    /* try { // try from 00543140 to 00643153 has its CatchHandler @ 00543680 */
  iVar1 = *(int *)(this + 0x210);
                    /* try { // try from 00543154 to 0064315f has its CatchHandler @ 00543648 */
  if (*(int *)(this + 0x214) <= iVar1) {
    iVar1 = *(int *)(this + 0x214) * 2;
    if (iVar1 < 0xb) {
      iVar1 = 10;
    }
                    /* try { // try from 00543174 to 00643187 has its CatchHandler @ 00543644 */
    FastVector<std::string>::Resize((FastVector<std::string> *)(this + 0x210),iVar1);
    iVar1 = *(int *)(this + 0x210);
  }
                    /* try { // try from 00543188 to 00643193 has its CatchHandler @ 0054360c */
  FUN_0066a6a8(*(long *)(this + 0x218) + (long)iVar1 * 8,param_1);
  *(int *)(this + 0x210) = *(int *)(this + 0x210) + 1;
  UpdateSprite(this);
  return;
}


