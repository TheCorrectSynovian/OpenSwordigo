/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00602dec
 * Function: CSourceStream::~CSourceStream
 * Signature: undefined __thiscall ~CSourceStream(CSourceStream * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* CSourceStream::~CSourceStream() */

void __thiscall CSourceStream::~CSourceStream(CSourceStream *this)

{
  *(undefined **)this = PTR_vtable_007e72f0 + 0x10;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00602e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}


