/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF280
 * Mangled: _ZN5Caver5Proto3Box10SharedCtorEv
 * Demangled: Caver::Proto::Box::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall Caver::Proto::Box::SharedCtor(Caver::Proto::Box *this)
{
  long double result; // q0

  *(_OWORD *)&result = 0u;
  *(_OWORD *)((char *)this + 24) = 0u;
  *(_OWORD *)((char *)this + 8) = 0u;
  return result;
}

