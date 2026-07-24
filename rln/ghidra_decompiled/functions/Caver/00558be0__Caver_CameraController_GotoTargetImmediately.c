/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00558be0
 * Function: Caver::CameraController::GotoTargetImmediately
 * Signature: undefined __thiscall GotoTargetImmediately(CameraController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CameraController::GotoTargetImmediately() */

void __thiscall Caver::CameraController::GotoTargetImmediately(CameraController *this)

{
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x10);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x18);
  *(undefined8 *)(this + 0x3c) = *(undefined8 *)(this + 0x20);
                    /* try { // try from 00558bfc to 00658c13 has its CatchHandler @ 005592d4 */
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(this + 0x28);
  return;
}


