/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000514934
 * Mangled: _ZN11CPVRTString5clearEv
 * Demangled: CPVRTString::clear(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F6770  .calloc
 *   0x00000000001F89E0  .free
 *
 * Referenced strings: 6
 *   insn=0x0000000000514940 string=0x0000000000514944 "`"
 *   insn=0x0000000000514944 string=0x0000000000514948 "&"
 *   insn=0x0000000000514948 string=0x00000000001F89E0 "0'"
 *   insn=0x0000000000514954 string=0x00000000001F6770 "0'"
 *   insn=0x000000000051495C string=0x0000000000514960 "`"
 *   insn=0x0000000000514960 string=0x0000000000514964 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall CPVRTString::clear(void **this)
{
  void *v2; // x0
  long double result; // q0

  free(this[1]);
  v2 = calloc(1u, 1u);
  result = *(long double *)&xmmword_58B480;
  this[1] = v2;
  *((_OWORD *)this + 1) = xmmword_58B480;
  return result;
}

