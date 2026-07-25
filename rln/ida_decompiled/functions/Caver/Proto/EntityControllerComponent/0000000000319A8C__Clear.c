/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000319A8C
 * Mangled: _ZN5Caver5Proto25EntityControllerComponent5ClearEv
 * Demangled: Caver::Proto::EntityControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000319AA0 string=0x0000000000319AA4 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityControllerComponent::Clear(__int64 this)
{
  if ( *(_BYTE *)(this + 44) )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    *(_QWORD *)(this + 28) = 0;
    *(_QWORD *)(this + 36) = 0x100000000LL;
  }
  *(_DWORD *)(this + 44) = 0;
  return this;
}

