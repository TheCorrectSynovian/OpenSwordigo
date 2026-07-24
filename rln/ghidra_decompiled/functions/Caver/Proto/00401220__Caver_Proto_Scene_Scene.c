/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00401220
 * Function: Caver::Proto::Scene::Scene
 * Signature: undefined __thiscall Scene(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::Scene() */

void __thiscall Caver::Proto::Scene::Scene(Scene *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_007e5680;
  *(Scene **)(this + 0x10) = this + 0x28;
  *(Scene **)(this + 0x48) = this + 0x60;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 4;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x98) = 0;
  return;
}


