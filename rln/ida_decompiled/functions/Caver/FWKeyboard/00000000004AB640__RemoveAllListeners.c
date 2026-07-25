/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB640
 * Mangled: _ZN5Caver10FWKeyboard18RemoveAllListenersEv
 * Demangled: Caver::FWKeyboard::RemoveAllListeners(void)
 *
 * Callers: 1
 *   0x0000000000201140  Caver::FWKeyboard::RemoveAllListeners(void)
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 3
 *   insn=0x00000000004AB64C string=0x00000000004AB650 "`"
 *   insn=0x00000000004AB658 string=0x00000000004AB670 "sN"
 *   insn=0x00000000004AB660 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::FWKeyboard *__fastcall Caver::FWKeyboard::RemoveAllListeners(Caver::FWKeyboard **this)
{
  Caver::FWKeyboard *result; // x0
  Caver::FWKeyboard *v3; // x20

  result = *this;
  if ( result != (Caver::FWKeyboard *)this )
  {
    do
    {
      v3 = *(Caver::FWKeyboard **)result;
      operator delete(result);
      result = v3;
    }
    while ( v3 != (Caver::FWKeyboard *)this );
  }
  *this = (Caver::FWKeyboard *)this;
  this[1] = (Caver::FWKeyboard *)this;
  return result;
}

