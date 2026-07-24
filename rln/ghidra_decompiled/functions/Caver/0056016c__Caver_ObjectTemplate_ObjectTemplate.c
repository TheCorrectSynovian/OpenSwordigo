/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056016c
 * Function: Caver::ObjectTemplate::ObjectTemplate
 * Signature: undefined __thiscall ObjectTemplate(ObjectTemplate * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectTemplate::ObjectTemplate() */

void __thiscall Caver::ObjectTemplate::ObjectTemplate(ObjectTemplate *this)

{
  undefined *puVar1;
  
                    /* catch() { ... } // from try @ 0055ffc8 with catch @ 0056017c */
  SceneObject::SceneObject((SceneObject *)this);
  puVar1 = PTR_vtable_007e4780;
                    /* catch() { ... } // from try @ 00560054 with catch @ 00560180 */
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 0x130) = 0x3f800000;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x10) = puVar1 + 0x70;
  return;
}


