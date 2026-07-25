/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DA6B4
 * Mangled: _ZNK5Caver5Proto15EditorViewState13SetCachedSizeEi
 * Demangled: Caver::Proto::EditorViewState::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002DA67C  Caver::Proto::EditorViewState::~EditorViewState()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EditorViewState::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

