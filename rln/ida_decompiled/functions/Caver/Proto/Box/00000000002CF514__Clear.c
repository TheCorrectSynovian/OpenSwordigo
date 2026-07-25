/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF514
 * Mangled: _ZN5Caver5Proto3Box5ClearEv
 * Demangled: Caver::Proto::Box::Clear(void)
 *
 * Callers: 1
 *   0x00000000001FF920  Caver::Proto::Box::Clear(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Box::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 36) )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    *(_QWORD *)(this + 28) = 0;
  }
  *(_DWORD *)(this + 36) = 0;
  return this;
}

