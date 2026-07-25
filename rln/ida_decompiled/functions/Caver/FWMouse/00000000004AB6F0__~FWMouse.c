/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AB6F0
 * Mangled: _ZN5Caver7FWMouseD2Ev
 * Demangled: Caver::FWMouse::~FWMouse()
 *
 * Callers: 1
 *   0x00000000004AB680  Caver::FWMouse::sharedMouse(void)
 *
 * Callees: 1
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 2
 *   insn=0x00000000004AB6FC string=0x00000000004AB700 "`"
 *   insn=0x00000000004AB710 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FWMouse::~FWMouse(Caver::FWMouse **this)
{
  Caver::FWMouse *v2; // x0
  Caver::FWMouse *v3; // x20

  v2 = *this;
  if ( v2 != (Caver::FWMouse *)this )
  {
    do
    {
      v3 = *(Caver::FWMouse **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != (Caver::FWMouse *)this );
  }
}

