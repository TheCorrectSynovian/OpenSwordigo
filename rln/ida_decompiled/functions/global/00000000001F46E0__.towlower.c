/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F46E0
 * Mangled: .towlower
 * Demangled: .towlower
 *
 * Callers: 2
 *   0x0000000000520688  sub_520688
 *   0x0000000000520690  sub_520690
 *
 * Callees: 1
 *   0x00000000006FE608  towlower
 *
 * Referenced strings: 1
 *   insn=0x00000000001F46E8 string=0x00000000001F46EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
wint_t towlower(wint_t wc)
{
  return towlower(wc);
}

