/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f9848
 * Function: Caver::Proto::Scene::InitAsDefaultInstance
 * Signature: undefined __thiscall InitAsDefaultInstance(Scene * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::InitAsDefaultInstance() */

void __thiscall Caver::Proto::Scene::InitAsDefaultInstance(Scene *this)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_default_instance__007e7b58;
  lVar3 = *(long *)PTR_default_instance__007e7b58;
  if (lVar3 == 0) {
    protobuf_AddDesc_Scene_2eproto();
    lVar3 = *(long *)puVar1;
  }
  *(long *)(this + 0x80) = lVar3;
  uVar2 = Rectangle::default_instance();
  *(undefined8 *)(this + 0x88) = uVar2;
  uVar2 = Program::default_instance();
  *(undefined8 *)(this + 0x90) = uVar2;
  return;
}


