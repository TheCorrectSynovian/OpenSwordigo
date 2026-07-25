/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3C30
 * Mangled: ._ZN5Caver5Proto9GameState10SharedDtorEv
 * Demangled: Caver::Proto::GameState::SharedDtor(void)
 *
 * Callers: 1
 *   0x00000000002ED9BC  Caver::Proto::GameState::GameState(Caver::Proto::GameState const&)
 *
 * Callees: 1
 *   0x00000000002ED9BC  Caver::Proto::GameState::GameState(Caver::Proto::GameState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3C38 string=0x00000000001F3C3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameState::SharedDtor(Caver::Proto::GameState *this)
{
  JUMPOUT(0x2EDE38);
}

