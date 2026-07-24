/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005601f8
 * Function: Caver::ObjectTemplate::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(ObjectTemplate * this, ObjectTemplate * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectTemplate::SaveToProtobufMessage(Caver::Proto::ObjectTemplate*) const */

void __thiscall
Caver::ObjectTemplate::SaveToProtobufMessage(ObjectTemplate *this,ObjectTemplate *param_1)

{
  SceneObject *this_00;
  
                    /* try { // try from 00560210 to 00660223 has its CatchHandler @ 005603c8 */
  this_00 = *(SceneObject **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 1;
  if (this_00 == (SceneObject *)0x0) {
                    /* try { // try from 00560228 to 00660233 has its CatchHandler @ 00560354 */
    this_00 = operator_new(0x90);
    Proto::SceneObject::SceneObject(this_00);
                    /* try { // try from 00560234 to 0066027f has its CatchHandler @ 005601e8 */
    *(SceneObject **)(param_1 + 0x10) = this_00;
  }
  SceneObject::SaveToProtobufMessage((SceneObject *)this,this_00);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x130);
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
  return;
}


