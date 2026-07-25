/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD7A0
 * Mangled: ._ZN5Caver5Proto4Font10SharedDtorEv
 * Demangled: Caver::Proto::Font::SharedDtor(void)
 *
 * Callers: 1
 *   0x00000000002D4268  Caver::Proto::Font::Font(Caver::Proto::Font const&)
 *
 * Callees: 1
 *   0x00000000002D4268  Caver::Proto::Font::Font(Caver::Proto::Font const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD7A8 string=0x00000000001FD7AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Font::SharedDtor(Caver::Proto::Font *this)
{
  JUMPOUT(0x2D46C8);
}

