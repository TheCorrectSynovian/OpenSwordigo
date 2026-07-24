/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ba088
 * Function: Caver::GUITextFieldImpl::SendValueChangedEvent
 * Signature: undefined __thiscall SendValueChangedEvent(GUITextFieldImpl * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextFieldImpl::SendValueChangedEvent() */

void __thiscall Caver::GUITextFieldImpl::SendValueChangedEvent(GUITextFieldImpl *this)

{
                    /* try { // try from 005ba090 to 006ba097 has its CatchHandler @ 005ba0c8 */
  GUIControl::SendActionsForControlEvent((GUIControl *)this,0x1000,0);
  return;
}


