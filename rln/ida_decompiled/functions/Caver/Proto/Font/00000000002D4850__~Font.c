/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D4850
 * Mangled: _ZN5Caver5Proto4FontD0Ev
 * Demangled: Caver::Proto::Font::~Font()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F86C0  Caver::Proto::Font::~Font()
 *   0x00000000002D4888  Caver::Proto::Font::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x00000000002D4860 string=0x00000000001F86C0 "0'"
 *   insn=0x00000000002D4870 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Font::~Font(Caver::Proto::Font *this)
{
  Caver::Proto::Font::~Font(this);
  operator delete(this);
}

