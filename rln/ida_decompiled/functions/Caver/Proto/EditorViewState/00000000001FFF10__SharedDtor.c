/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFF10
 * Mangled: ._ZN5Caver5Proto15EditorViewState10SharedDtorEv
 * Demangled: Caver::Proto::EditorViewState::SharedDtor(void)
 *
 * Callers: 1
 *   0x00000000002DA000  Caver::Proto::EditorViewState::EditorViewState(Caver::Proto::EditorViewState const&)
 *
 * Callees: 1
 *   0x00000000002DA000  Caver::Proto::EditorViewState::EditorViewState(Caver::Proto::EditorViewState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFF18 string=0x00000000001FFF1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EditorViewState::SharedDtor(Caver::Proto::EditorViewState *this)
{
  JUMPOUT(0x2DA470);
}

