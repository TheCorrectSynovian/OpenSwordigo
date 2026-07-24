/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00613d0c
 * Function: CPVRTResourceFile::Close
 * Signature: undefined __thiscall Close(CPVRTResourceFile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTResourceFile::Close() */

void __thiscall CPVRTResourceFile::Close(CPVRTResourceFile *this)

{
  if (this[8] != (CPVRTResourceFile)0x0) {
    if ((this[9] == (CPVRTResourceFile)0x0) && (*(void **)(this + 0x18) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 0x18));
    }
    *(undefined2 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x18) = 0;
  }
  return;
}


