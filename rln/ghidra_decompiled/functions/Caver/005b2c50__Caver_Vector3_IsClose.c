/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b2c50
 * Function: Caver::Vector3::IsClose
 * Signature: undefined __thiscall IsClose(Vector3 * this, Vector3 * param_1, float param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Vector3::IsClose(Caver::Vector3 const&, float) const */

bool __thiscall Caver::Vector3::IsClose(Vector3 *this,Vector3 *param_1,float param_2)

{
  if (param_2 < ABS(*(float *)this - *(float *)param_1)) {
    return false;
  }
  if (param_2 < ABS(*(float *)(this + 4) - *(float *)(param_1 + 4))) {
    return false;
  }
  return ABS(*(float *)(this + 8) - *(float *)(param_1 + 8)) <= param_2;
}


