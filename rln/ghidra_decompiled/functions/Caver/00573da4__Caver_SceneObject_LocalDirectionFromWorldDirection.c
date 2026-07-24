/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573da4
 * Function: Caver::SceneObject::LocalDirectionFromWorldDirection
 * Signature: undefined __cdecl LocalDirectionFromWorldDirection(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::LocalDirectionFromWorldDirection(Caver::Vector2 const&) */

void Caver::SceneObject::LocalDirectionFromWorldDirection(Vector2 *param_1)

{
  undefined8 *in_x1;
  Vector2 *in_x8;
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x80);
  *(undefined8 *)in_x8 = *in_x1;
  Vector2::Rotate(in_x8,-fVar1);
  if (param_1[0x90] != (Vector2)0x0) {
    *(float *)in_x8 = -*(float *)in_x8;
  }
  return;
}


