/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002035F0
 * Mangled: ._ZN5Caver5Proto15EditorViewStateD2Ev
 * Demangled: Caver::Proto::EditorViewState::~EditorViewState()
 *
 * Callers: 1
 *   0x00000000002DA67C  Caver::Proto::EditorViewState::~EditorViewState()
 *
 * Callees: 1
 *   0x00000000002DA000  Caver::Proto::EditorViewState::EditorViewState(Caver::Proto::EditorViewState const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002035F8 string=0x00000000002035FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EditorViewState::~EditorViewState(Caver::Proto::EditorViewState *this)
{
  JUMPOUT(0x2DA384);
}

