/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b124c
 * Function: Caver::Quaternion::RotationAngle
 * Signature: undefined __thiscall RotationAngle(Quaternion * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Quaternion::RotationAngle() const */

float __thiscall Caver::Quaternion::RotationAngle(Quaternion *this)

{
  double dVar1;
  
  dVar1 = acos((double)*(float *)this);
                    /* catch() { ... } // from try @ 005b1450 with catch @ 005b126c
                       catch() { ... } // from try @ 005b15d4 with catch @ 005b126c */
  return (float)(dVar1 + dVar1);
}


