/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DA67C
 * Mangled: _ZN5Caver5Proto15EditorViewStateD0Ev
 * Demangled: Caver::Proto::EditorViewState::~EditorViewState()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002035F0  Caver::Proto::EditorViewState::~EditorViewState()
 *   0x00000000002DA6B4  Caver::Proto::EditorViewState::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 1
 *   insn=0x00000000002DA69C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::EditorViewState::~EditorViewState(Caver::Proto::EditorViewState *this)
{
  Caver::Proto::EditorViewState::~EditorViewState(this);
  operator delete(this);
}

