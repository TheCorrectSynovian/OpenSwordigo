/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB438
 * Mangled: _ZN5Caver10FWKeyboardD2Ev
 * Demangled: Caver::FWKeyboard::~FWKeyboard()
 *
 * Callers: 1
 *   0x00000000004AB3CC  Caver::FWKeyboard::sharedKeyboard(void)
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 2
 *   insn=0x00000000004AB444 string=0x00000000004AB448 "`"
 *   insn=0x00000000004AB458 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FWKeyboard::~FWKeyboard(Caver::FWKeyboard **this)
{
  Caver::FWKeyboard *v2; // x0
  Caver::FWKeyboard *v3; // x20

  v2 = *this;
  if ( v2 != (Caver::FWKeyboard *)this )
  {
    do
    {
      v3 = *(Caver::FWKeyboard **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != (Caver::FWKeyboard *)this );
  }
}

