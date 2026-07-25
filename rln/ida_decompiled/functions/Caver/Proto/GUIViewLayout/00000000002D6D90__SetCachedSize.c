/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D6D90
 * Mangled: _ZNK5Caver5Proto13GUIViewLayout13SetCachedSizeEi
 * Demangled: Caver::Proto::GUIViewLayout::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D6D58  Caver::Proto::GUIViewLayout::~GUIViewLayout()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GUIViewLayout::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

