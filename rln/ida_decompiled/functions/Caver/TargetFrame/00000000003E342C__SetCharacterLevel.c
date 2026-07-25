/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E342C
 * Mangled: _ZN5Caver11TargetFrame17SetCharacterLevelEi
 * Demangled: Caver::TargetFrame::SetCharacterLevel(int)
 *
 * Callers: 1
 *   0x00000000001F84F0  Caver::TargetFrame::SetCharacterLevel(int)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TargetFrame::SetCharacterLevel(__int64 this, int a2)
{
  *(_DWORD *)(this + 240) = a2;
  return this;
}

