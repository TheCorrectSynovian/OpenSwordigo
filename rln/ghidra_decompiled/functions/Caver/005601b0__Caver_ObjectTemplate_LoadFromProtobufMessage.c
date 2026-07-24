/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005601b0
 * Function: Caver::ObjectTemplate::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(ObjectTemplate * this, ObjectTemplate * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectTemplate::LoadFromProtobufMessage(Caver::Proto::ObjectTemplate const&) */

void __thiscall
Caver::ObjectTemplate::LoadFromProtobufMessage(ObjectTemplate *this,ObjectTemplate *param_1)

{
  ObjectTemplate *pOVar1;
  
  pOVar1 = *(ObjectTemplate **)PTR_default_instance__007e4a98;
  if (*(long *)(param_1 + 0x10) != 0) {
    pOVar1 = param_1;
  }
  SceneObject::LoadFromProtobufMessage((SceneObject *)this,*(SceneObject **)(pOVar1 + 0x10));
                    /* try { // try from 005601e8 to 0066020f has its CatchHandler @ 005601e8
                       catch() { ... } // from try @ 005601e8 with catch @ 005601e8
                       catch() { ... } // from try @ 00560234 with catch @ 005601e8
                       catch() { ... } // from try @ 0056028c with catch @ 005601e8
                       catch() { ... } // from try @ 0056034c with catch @ 005601e8 */
  *(undefined4 *)(this + 0x130) = *(undefined4 *)(param_1 + 0x18);
  return;
}


