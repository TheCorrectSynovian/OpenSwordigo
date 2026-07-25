/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F86C0
 * Mangled: ._ZN5Caver5Proto4FontD2Ev_0
 * Demangled: Caver::Proto::Font::~Font()
 *
 * Callers: 1
 *   0x00000000002D4850  Caver::Proto::Font::~Font()
 *
 * Callees: 1
 *   0x00000000002D4268  Caver::Proto::Font::Font(Caver::Proto::Font const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F86C8 string=0x00000000001F86CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Font::~Font(Caver::Proto::Font *this)
{
  JUMPOUT(0x2D45C0);
}

