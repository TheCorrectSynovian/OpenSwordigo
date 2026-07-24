/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006133ac
 * Function: PVRTMatrixQuaternionIdentityF
 * Signature: undefined __cdecl PVRTMatrixQuaternionIdentityF(PVRTQUATERNIONf * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PVRTMatrixQuaternionIdentityF(PVRTQUATERNIONf&) */

void PVRTMatrixQuaternionIdentityF(PVRTQUATERNIONf *param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 006133ac to 007133d3 has its CatchHandler @ 00613fc8 */
  uVar1 = _DAT_00683800;
  *(undefined8 *)(param_1 + 8) = _UNK_00683808;
  *(undefined8 *)param_1 = uVar1;
  return;
}


