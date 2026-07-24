/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0061d3d0
 * Function: std::exception::~exception
 * Signature: undefined __thiscall ~exception(exception * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::exception::~exception() */

void __thiscall std::exception::~exception(exception *this)

{
                    /* try { // try from 0061d3d8 to 0071d3e3 has its CatchHandler @ 0061db80 */
  ~exception(this);
                    /* try { // try from 0061d3e4 to 0071d3eb has its CatchHandler @ 0061d864 */
                    /* try { // try from 0061d3ec to 0071d453 has its CatchHandler @ 0061db80 */
  operator_delete(this);
  return;
}


