/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00614980
 * Function: CPVRTString::operator<
 * Signature: undefined __thiscall operator<(CPVRTString * this, CPVRTString * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTString::TEMPNAMEPLACEHOLDERVALUE(CPVRTString const&) const */

uint __thiscall CPVRTString::operator<(CPVRTString *this,CPVRTString *param_1)

{
  uint uVar1;
  
                    /* try { // try from 0061498c to 0071498f has its CatchHandler @ 006149e4 */
  uVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
                    /* try { // try from 0061499c to 007149a7 has its CatchHandler @ 006149dc */
  return uVar1 >> 0x1f;
}


