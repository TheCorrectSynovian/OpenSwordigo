/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA088
 * Mangled: _ZN5Caver16GUITextFieldImpl21SendValueChangedEventEv
 * Demangled: Caver::GUITextFieldImpl::SendValueChangedEvent(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000203510  Caver::GUIControl::SendActionsForControlEvent(Caver::GUIControl::Event,uint)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BA08C string=0x00000000004BA090 " %"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITextFieldImpl::SendValueChangedEvent(Caver::GUITextFieldImpl *this)
{
  return Caver::GUIControl::SendActionsForControlEvent();
}

