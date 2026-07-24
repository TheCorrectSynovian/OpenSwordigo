/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba09c
 * Function: Caver::GUITextFieldImpl::TextInputDidFinish
 * Signature: undefined __thiscall TextInputDidFinish(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::TextInputDidFinish() */

void __thiscall Caver::GUITextFieldImpl::TextInputDidFinish(GUITextFieldImpl *this)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(this + 0x138);
  if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 8))(plVar1,this), (uVar2 & 1) == 0)
     ) {
                    /* try { // try from 005ba0e0 to 006ba0eb has its CatchHandler @ 005ba070 */
                    /* catch() { ... } // from try @ 005ba0dc with catch @ 005ba0e8 */
    return;
  }
                    /* catch() { ... } // from try @ 005ba090 with catch @ 005ba0c8 */
                    /* try { // try from 005ba0d4 to 006ba0d7 has its CatchHandler @ 005ba0d8 */
                    /* catch() { ... } // from try @ 005ba0d4 with catch @ 005ba0d8 */
                    /* WARNING: Could not recover jumptable at 0x005ba0dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 005ba0dc to 006ba0df has its CatchHandler @ 005ba0e8 */
  (**(code **)(*(long *)this + 0xd0))(this);
  return;
}


