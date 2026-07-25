/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE618
 * Mangled: _ZN5Caver5Proto7Vector310SharedCtorEv
 * Demangled: Caver::Proto::Vector3::SharedCtor(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector3::SharedCtor(__int64 this)
{
  *(_QWORD *)(this + 8) = 0;
  *(_QWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 24) = 0;
  return this;
}

