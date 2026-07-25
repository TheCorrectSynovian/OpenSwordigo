/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA654
 * Mangled: _ZNK5Caver16GUITextFieldImpl11textMarginsEv
 * Demangled: Caver::GUITextFieldImpl::textMargins(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004BA654 string=0x00000000004BA658 "\n"
 *   insn=0x00000000004BA658 string=0x00000000004BA65C "\t"
 *   insn=0x00000000004BA65C string=0x00000000004BA660 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::GUITextFieldImpl::textMargins@<Q0>(Caver::GUITextFieldImpl *this@<X0>, __int64 a2@<X8>)
{
  long double result; // q0

  *(_DWORD *)(a2 + 16) = *((_DWORD *)this + 95);
  result = *(long double *)((char *)this + 364);
  *(long double *)a2 = result;
  return result;
}

