/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA68C
 * Mangled: _ZNK5Caver16GUITextFieldImpl10textBoundsEv
 * Demangled: Caver::GUITextFieldImpl::textBounds(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004BA68C string=0x00000000004BA690 " A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::GUITextFieldImpl::textBounds@<Q0>(
        Caver::GUITextFieldImpl *this@<X0>,
        long double *a2@<X8>)
{
  long double result; // q0

  result = *(long double *)(*((_QWORD *)this + 41) + 116LL);
  *a2 = result;
  return result;
}

