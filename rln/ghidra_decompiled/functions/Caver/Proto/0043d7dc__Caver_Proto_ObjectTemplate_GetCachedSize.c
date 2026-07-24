/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043d7dc
 * Function: Caver::Proto::ObjectTemplate::GetCachedSize
 * Signature: undefined __thiscall GetCachedSize(ObjectTemplate * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::GetCachedSize() const */

undefined4 __thiscall Caver::Proto::ObjectTemplate::GetCachedSize(ObjectTemplate *this)

{
                    /* try { // try from 0043d7e0 to 0053d833 has its CatchHandler @ 0043d7e0
                       catch() { ... } // from try @ 0043d7e0 with catch @ 0043d7e0
                       catch() { ... } // from try @ 0043d894 with catch @ 0043d7e0 */
  return *(undefined4 *)(this + 8);
}


