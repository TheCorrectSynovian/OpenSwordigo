/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB9C4
 * Mangled: _ZN5Caver7FWMouse18RemoveAllListenersEv
 * Demangled: Caver::FWMouse::RemoveAllListeners(void)
 *
 * Callers: 1
 *   0x0000000000201630  Caver::FWMouse::RemoveAllListeners(void)
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 4
 *   insn=0x00000000004AB9D0 string=0x00000000004AB9D4 "`"
 *   insn=0x00000000004AB9DC string=0x00000000004AB9F4 "sN"
 *   insn=0x00000000004AB9E0 string=0x00000000004AB9E4 "3."
 *   insn=0x00000000004AB9E4 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::FWMouse *__fastcall Caver::FWMouse::RemoveAllListeners(Caver::FWMouse **this)
{
  Caver::FWMouse *result; // x0
  Caver::FWMouse *v3; // x20

  result = *this;
  if ( result != (Caver::FWMouse *)this )
  {
    do
    {
      v3 = *(Caver::FWMouse **)result;
      operator delete(result);
      result = v3;
    }
    while ( v3 != (Caver::FWMouse *)this );
  }
  *this = (Caver::FWMouse *)this;
  this[1] = (Caver::FWMouse *)this;
  return result;
}

