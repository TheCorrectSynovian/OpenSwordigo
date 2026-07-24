/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005b5df4
 * Function: boost::gregorian::bad_month::~bad_month
 * Signature: undefined __thiscall ~bad_month(bad_month * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::gregorian::bad_month::~bad_month() */

void __thiscall boost::gregorian::bad_month::~bad_month(bad_month *this)

{
  FUN_0064a3f8();
                    /* catch() { ... } // from try @ 005b58f0 with catch @ 005b5e08 */
  operator_delete(this);
  return;
}


