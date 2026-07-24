/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573d84
 * Function: Caver::SceneObject::WorldDirectionFromLocalDirection
 * Signature: undefined __cdecl WorldDirectionFromLocalDirection(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::WorldDirectionFromLocalDirection(Caver::Vector2 const&) */

void Caver::SceneObject::WorldDirectionFromLocalDirection(Vector2 *param_1)

{
  uint uVar1;
  uint *in_x1;
  Vector2 *in_x8;
  uint uVar2;
  float fVar3;
  
  uVar2 = *in_x1;
  uVar1 = in_x1[1];
  if (param_1[0x90] != (Vector2)0x0) {
    uVar2 = uVar2 ^ 0x80000000;
  }
  fVar3 = *(float *)(param_1 + 0x80);
  *(uint *)in_x8 = uVar2;
  *(uint *)(in_x8 + 4) = uVar1;
  Vector2::Rotate(in_x8,fVar3);
  return;
}


