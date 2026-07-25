/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA594
 * Mangled: _ZNK5Caver16GUITextFieldImpl9textColorEv
 * Demangled: Caver::GUITextFieldImpl::textColor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000004BA594 string=0x00000000004BA598 "\t"
 *   insn=0x00000000004BA598 string=0x00000000004BA59C "\t"
 *   insn=0x00000000004BA59C string=0x00000000004BA5A0 "\t"
 *   insn=0x00000000004BA5A0 string=0x00000000004BA5A4 "\t"
 *   insn=0x00000000004BA5A4 string=0x00000000004BA5A8 "\t\t"
 *   insn=0x00000000004BA5A8 string=0x00000000004BA5AC "\t"
 *   insn=0x00000000004BA5AC string=0x00000000004BA5B0 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_BYTE *__usercall Caver::GUITextFieldImpl::textColor@<X0>(_BYTE *this@<X0>, _BYTE *a2@<X8>)
{
  *a2 = this[360];
  a2[1] = this[361];
  a2[2] = this[362];
  a2[3] = this[363];
  return this;
}

