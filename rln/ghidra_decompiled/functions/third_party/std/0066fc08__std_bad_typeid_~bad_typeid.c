/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066fc08
 * Function: std::bad_typeid::~bad_typeid
 * Signature: undefined __thiscall ~bad_typeid(bad_typeid * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::bad_typeid::~bad_typeid() */

void __thiscall std::bad_typeid::~bad_typeid(bad_typeid *this)

{
                    /* try { // try from 0066fc0c to 0076fc0f has its CatchHandler @ 0066fcc8 */
                    /* try { // try from 0066fc10 to 0076fc87 has its CatchHandler @ 0066fa00 */
  ~bad_typeid(this);
  operator_delete(this);
  return;
}


