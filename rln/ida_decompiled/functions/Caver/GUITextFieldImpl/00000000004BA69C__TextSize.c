/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA69C
 * Mangled: _ZNK5Caver16GUITextFieldImpl8TextSizeEv
 * Demangled: Caver::GUITextFieldImpl::TextSize(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002039B0  Caver::GUILabel::TextSize(void)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::GUITextFieldImpl::TextSize@<X0>(Caver::GUILabel **this@<X0>, __int64 *a2@<X8>)
{
  return Caver::GUILabel::TextSize(a2, this[41]);
}

