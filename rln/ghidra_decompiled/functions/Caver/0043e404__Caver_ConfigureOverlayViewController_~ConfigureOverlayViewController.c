/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043e404
 * Function: Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController
 * Signature: undefined __thiscall ~ConfigureOverlayViewController(ConfigureOverlayViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController() */

void __thiscall
Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController
          (ConfigureOverlayViewController *this)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x68);
  puVar1 = PTR_vtable_007e5e58 + 0x88;
  *(undefined **)this = PTR_vtable_007e5e58 + 0x10;
  *(undefined **)(this + 0x48) = puVar1;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* try { // try from 0043e450 to 0053e457 has its CatchHandler @ 0043e4a4 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
                    /* try { // try from 0043e458 to 0053e4c7 has its CatchHandler @ 0043e3d0 */
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  plVar3 = *(long **)(this + 0x58);
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0043e450 with catch @ 0043e4a4
                        */
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* try { // try from 0043e4c8 to 0053e4cf has its CatchHandler @ 0043e4d8 */
                    /* try { // try from 0043e4d0 to 0053e4db has its CatchHandler @ 0043e3d0 */
  GUIViewController::~GUIViewController((GUIViewController *)this);
  return;
}


