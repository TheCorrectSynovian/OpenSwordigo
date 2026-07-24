/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00602e18
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
                    /* try { // try from 00602e2c to 00702e53 has its CatchHandler @ 00603c70 */
  *(undefined **)this = PTR_vtable_007e72f0 + 0x10;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  operator_delete(this);
  return;
}


