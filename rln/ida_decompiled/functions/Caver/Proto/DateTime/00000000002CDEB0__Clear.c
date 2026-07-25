/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CDEB0
 * Mangled: _ZN5Caver5Proto8DateTime5ClearEv
 * Demangled: Caver::Proto::DateTime::Clear(void)
 *
 * Callers: 1
 *   0x00000000001F7310  Caver::Proto::DateTime::Clear(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002CDEB0 string=0x00000000002CDEB4 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DateTime::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 24) )
    *(_QWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 24) = 0;
  return this;
}

