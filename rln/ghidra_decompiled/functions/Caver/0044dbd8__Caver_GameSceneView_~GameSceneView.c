/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044dbd8
 * Function: Caver::GameSceneView::~GameSceneView
 * Signature: undefined __thiscall ~GameSceneView(GameSceneView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneView::~GameSceneView() */

void __thiscall Caver::GameSceneView::~GameSceneView(GameSceneView *this)

{
  long lVar1;
  long *plVar2;
  
                    /* catch() { ... } // from try @ 0044a264 with catch @ 0044dbdc */
                    /* catch() { ... } // from try @ 0044a218 with catch @ 0044dbe0 */
  plVar2 = *(long **)(this + 400);
                    /* try { // try from 0044dbfc to 0054dc0b has its CatchHandler @ 0044f4b4 */
  *(undefined **)this = PTR_vtable_007e6960 + 0x10;
                    /* try { // try from 0044dc0c to 0054dc63 has its CatchHandler @ 00447cc4 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* catch() { ... } // from try @ 0044a1c4 with catch @ 0044dc44 */
  plVar2 = *(long **)(this + 0x178);
                    /* catch() { ... } // from try @ 0044a178 with catch @ 0044dc48 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 0044dc64 to 0054dc73 has its CatchHandler @ 0044f4b4 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 0044dc74 to 0054dccb has its CatchHandler @ 00447cc4 */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x168);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0044a124 with catch @ 0044dcac */
                    /* catch() { ... } // from try @ 0044a0d8 with catch @ 0044dcb0 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* try { // try from 0044dccc to 0054dcdb has its CatchHandler @ 0044f4b4 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x150);
                    /* try { // try from 0044dcdc to 0054dd33 has its CatchHandler @ 00447cc4 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 0044a094 with catch @ 0044dd14 */
                    /* catch() { ... } // from try @ 0044a048 with catch @ 0044dd18 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x138);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 0044dd34 to 0054dd43 has its CatchHandler @ 0044f4b4 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* try { // try from 0044dd44 to 0054dd9b has its CatchHandler @ 00447cc4 */
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x128);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 0044a004 with catch @ 0044dd7c */
                    /* catch() { ... } // from try @ 00449fb8 with catch @ 0044dd80 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* try { // try from 0044dd9c to 0054ddab has its CatchHandler @ 0044f4b4 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
                    /* try { // try from 0044ddac to 0054de03 has its CatchHandler @ 00447cc4 */
  plVar2 = *(long **)(this + 0x118);
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* catch() { ... } // from try @ 00449f64 with catch @ 0044dde4 */
                    /* catch() { ... } // from try @ 00449f18 with catch @ 0044dde8 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0x108);
                    /* try { // try from 0044de04 to 0054de13 has its CatchHandler @ 0044f4b4 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
                    /* try { // try from 0044de14 to 0054de6b has its CatchHandler @ 00447cc4 */
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  plVar2 = *(long **)(this + 0xf8);
                    /* catch() { ... } // from try @ 00449ec4 with catch @ 0044de4c */
                    /* catch() { ... } // from try @ 00449e78 with catch @ 0044de50 */
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
                    /* try { // try from 0044de6c to 0054de7b has its CatchHandler @ 0044f4b4 */
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
                    /* try { // try from 0044de7c to 0054ded3 has its CatchHandler @ 00447cc4 */
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  GUIView::~GUIView((GUIView *)this);
  return;
}


