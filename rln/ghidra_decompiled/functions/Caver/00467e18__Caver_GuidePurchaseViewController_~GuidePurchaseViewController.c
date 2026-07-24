/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00467e18
 * Function: Caver::GuidePurchaseViewController::~GuidePurchaseViewController
 * Signature: undefined __thiscall ~GuidePurchaseViewController(GuidePurchaseViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::~GuidePurchaseViewController() */

void __thiscall
Caver::GuidePurchaseViewController::~GuidePurchaseViewController(GuidePurchaseViewController *this)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  
                    /* try { // try from 00467e28 to 00567e63 has its CatchHandler @ 00468114 */
  plVar4 = *(long **)(this + 0x88);
  puVar1 = PTR_vtable_007e6710 + 0xa0;
  puVar2 = PTR_vtable_007e6710 + 200;
  *(undefined **)this = PTR_vtable_007e6710 + 0x10;
  *(undefined **)(this + 0x50) = puVar2;
  *(undefined **)(this + 0x48) = puVar1;
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 00467e8c to 00567e9f has its CatchHandler @ 00468110 */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x78);
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
                    /* try { // try from 00467eb0 to 00567ebb has its CatchHandler @ 004680d8 */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  plVar4 = *(long **)(this + 0x68);
                    /* try { // try from 00467ee4 to 00567f1f has its CatchHandler @ 0046807c */
  if ((plVar4 != (long *)0x0) && (lVar3 = plVar4[1], plVar4[1] = lVar3 + -1, lVar3 + -1 == 0)) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar3 = plVar4[2];
    plVar4[2] = lVar3 + -1;
    if (lVar3 + -1 == 0) {
                    /* try { // try from 00467f20 to 005681e7 has its CatchHandler @ 00467da4 */
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  GUIViewController::~GUIViewController((GUIViewController *)this);
  return;
}


