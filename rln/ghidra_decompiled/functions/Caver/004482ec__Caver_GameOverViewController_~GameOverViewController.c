/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004482ec
 * Function: Caver::GameOverViewController::~GameOverViewController
 * Signature: undefined __thiscall ~GameOverViewController(GameOverViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverViewController::~GameOverViewController() */

void __thiscall Caver::GameOverViewController::~GameOverViewController(GameOverViewController *this)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
                    /* try { // try from 004482f8 to 00548307 has its CatchHandler @ 0044f05c */
  plVar3 = *(long **)(this + 0x70);
  puVar1 = PTR_vtable_007e5538 + 0x80;
  *(undefined **)this = PTR_vtable_007e5538 + 0x10;
  *(undefined **)(this + 0x48) = puVar1;
                    /* try { // try from 00448320 to 0054832f has its CatchHandler @ 0044cf60 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
                    /* try { // try from 00448344 to 00548357 has its CatchHandler @ 0044f058 */
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x60);
                    /* try { // try from 00448374 to 00548383 has its CatchHandler @ 0044cf58 */
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 00448398 to 005483a7 has its CatchHandler @ 0044eff4 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
  return;
}


