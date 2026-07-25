/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046B92C
 * Mangled: _ZN5boost16bad_lexical_castD0Ev
 * Demangled: boost::bad_lexical_cast::~bad_lexical_cast()
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4CF0  std::bad_cast::~bad_cast()
 *   0x00000000001F72B0  operator delete(void *)
 *
 * Referenced strings: 3
 *   insn=0x000000000046B93C string=0x00000000001F4CF0 "P'"
 *   insn=0x000000000046B948 string=0x000000000046B94C "Y."
 *   insn=0x000000000046B94C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall boost::bad_lexical_cast::~bad_lexical_cast(boost::bad_lexical_cast *this)
{
  std::bad_cast::~bad_cast(this);
  operator delete(this);
}

