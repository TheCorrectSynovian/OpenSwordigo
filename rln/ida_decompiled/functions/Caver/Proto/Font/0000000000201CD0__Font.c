/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201CD0
 * Mangled: ._ZN5Caver5Proto4FontC2Ev
 * Demangled: Caver::Proto::Font::Font(void)
 *
 * Callers: 1
 *   0x00000000004C2658  Caver::Font::LoadFromFile(std::string const&)
 *
 * Callees: 1
 *   0x00000000002D4198  Caver::Proto::Font_Glyph::GetTypeName(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201CD8 string=0x0000000000201CDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Font::Font(Caver::Proto::Font *this)
{
  JUMPOUT(0x2D41F0);
}

