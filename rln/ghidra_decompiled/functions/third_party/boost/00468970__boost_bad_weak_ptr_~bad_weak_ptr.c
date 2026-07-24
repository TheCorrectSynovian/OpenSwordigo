/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00468970
 * Function: boost::bad_weak_ptr::~bad_weak_ptr
 * Signature: undefined __thiscall ~bad_weak_ptr(bad_weak_ptr * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::bad_weak_ptr::~bad_weak_ptr() */

void __thiscall boost::bad_weak_ptr::~bad_weak_ptr(bad_weak_ptr *this)

{
                    /* try { // try from 00468974 to 00568983 has its CatchHandler @ 00468aa4 */
  std::exception::~exception((exception *)this);
  operator_delete(this);
  return;
}


