/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00556c54
 * Function: Caver::Camera::ViewPointFromWorldPosition
 * Signature: undefined __cdecl ViewPointFromWorldPosition(Vector3 * param_1, float * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Camera::ViewPointFromWorldPosition(Caver::Vector3 const&, float*) const */

void Caver::Camera::ViewPointFromWorldPosition(Vector3 *param_1,float *param_2)

{
  ScreenPointFromWorldPosition(param_1,(Rectangle *)param_2,(float *)param_1);
  return;
}


