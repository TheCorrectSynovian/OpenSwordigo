/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00613cbc
 * Function: CPVRTResourceFile::~CPVRTResourceFile
 * Signature: undefined __thiscall ~CPVRTResourceFile(CPVRTResourceFile * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CPVRTResourceFile::~CPVRTResourceFile() */

void __thiscall CPVRTResourceFile::~CPVRTResourceFile(CPVRTResourceFile *this)

{
  *(undefined **)this = PTR_vtable_007e4890 + 0x10;
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


