/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00472b9c
 * Function: Caver::SkillPickerViewController::~SkillPickerViewController
 * Signature: undefined __thiscall ~SkillPickerViewController(SkillPickerViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerViewController::~SkillPickerViewController() */

void __thiscall
Caver::SkillPickerViewController::~SkillPickerViewController(SkillPickerViewController *this)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x58);
  puVar1 = PTR_vtable_007e7a30 + 0x88;
  *(undefined **)this = PTR_vtable_007e7a30 + 0x10;
  *(undefined **)(this + 0x48) = puVar1;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00472b18 with catch @ 00472bdc
                        */
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* try { // try from 00472bfc to 00572c03 has its CatchHandler @ 00472c0c */
                    /* try { // try from 00472c04 to 00572c0f has its CatchHandler @ 00472780 */
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00472bfc with catch @ 00472c0c
                        */
  GUIViewController::~GUIViewController((GUIViewController *)this);
  return;
}


