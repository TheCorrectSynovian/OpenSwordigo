/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005cf90c
 * Function: Caver::DateTime::SecondsSinceDate
 * Signature: undefined __thiscall SecondsSinceDate(DateTime * this, DateTime * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::DateTime::SecondsSinceDate(Caver::DateTime const&) */

undefined1  [16] __thiscall Caver::DateTime::SecondsSinceDate(DateTime *this,DateTime *param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(double *)this - *(double *)param_1;
  auVar1._8_8_ = 0;
  return auVar1;
}


