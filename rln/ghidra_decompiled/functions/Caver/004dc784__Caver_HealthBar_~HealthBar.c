/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004dc784
 * Function: Caver::HealthBar::~HealthBar
 * Signature: undefined __thiscall ~HealthBar(HealthBar * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HealthBar::~HealthBar() */

void __thiscall Caver::HealthBar::~HealthBar(HealthBar *this)

{
                    /* try { // try from 004dc784 to 005dc787 has its CatchHandler @ 004dc798 */
  ~HealthBar(this);
                    /* catch() { ... } // from try @ 004dc784 with catch @ 004dc798 */
  operator_delete(this);
  return;
}


