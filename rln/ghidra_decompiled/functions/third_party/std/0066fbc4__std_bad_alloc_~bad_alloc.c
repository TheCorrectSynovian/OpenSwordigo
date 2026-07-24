/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fbc4
 * Function: std::bad_alloc::~bad_alloc
 * Signature: undefined __thiscall ~bad_alloc(bad_alloc * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::bad_alloc::~bad_alloc() */

void __thiscall std::bad_alloc::~bad_alloc(bad_alloc *this)

{
  ~bad_alloc(this);
                    /* try { // try from 0066fbdc to 0076fbdf has its CatchHandler @ 0066fc58 */
  operator_delete(this);
  return;
}


