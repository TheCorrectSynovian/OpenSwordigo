/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00442c90
 * Function: Caver::GameMenuViewController::~GameMenuViewController
 * Signature: undefined __thiscall ~GameMenuViewController(GameMenuViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameMenuViewController::~GameMenuViewController() */

void __thiscall Caver::GameMenuViewController::~GameMenuViewController(GameMenuViewController *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
  puVar2 = PTR_vtable_007e63f0;
                    /* try { // try from 00442c9c to 00542ca3 has its CatchHandler @ 00442cb8 */
                    /* try { // try from 00442ca4 to 00542cc3 has its CatchHandler @ 004426e4 */
  plVar4 = *(long **)(this + 0xc0);
  puVar1 = PTR_vtable_007e63f0 + 0xe0;
                    /* catch() { ... } // from try @ 00442aa4 with catch @ 00442cb8
                       catch() { ... } // from try @ 00442bfc with catch @ 00442cb8
                       catch() { ... } // from try @ 00442c9c with catch @ 00442cb8 */
  *(undefined **)this = PTR_vtable_007e63f0 + 0x10;
  *(undefined **)(this + 0x50) = puVar2 + 0x100;
  *(undefined **)(this + 0x48) = puVar1;
  *(undefined **)(this + 0x60) = puVar2 + 0x138;
  *(undefined **)(this + 0x58) = puVar2 + 0x118;
  *(undefined **)(this + 0x70) = puVar2 + 0x180;
  *(undefined **)(this + 0x68) = puVar2 + 0x168;
  *(undefined **)(this + 0x78) = puVar2 + 0x198;
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0xb0);
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00442d5c to 00542dfb has its CatchHandler @ 00442d5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00442d5c with catch @ 00442d5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00442e08 with catch @ 00442d5c
                       catch(type#1 @ 00000000) { ... } // from try @ 00442e8c with catch @ 00442d5c
                        */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0xa0);
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x90);
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
                    /* try { // try from 00442dfc to 00542e07 has its CatchHandler @ 00442e64 */
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 00442e08 to 00542e83 has its CatchHandler @ 00442d5c */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
  return;
}


