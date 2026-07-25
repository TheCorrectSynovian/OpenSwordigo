/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030CE24
 * Mangled: _ZN5Caver5Proto15DamageComponent5ClearEv
 * Demangled: Caver::Proto::DamageComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000030CE44 string=0x000000000030CE48 "`"
 *   insn=0x000000000030CE4C string=0x000000000030CE50 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::DamageComponent::Clear(__int64 this)
{
  int v1; // w8

  v1 = *(_DWORD *)(this + 44);
  if ( (_BYTE)v1 )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    *(_BYTE *)(this + 28) = 0;
    *(_BYTE *)(this + 40) = 0;
    *(_QWORD *)(this + 32) = 0;
  }
  if ( (v1 & 0xFF00) != 0 )
    *(_BYTE *)(this + 41) = 1;
  *(_DWORD *)(this + 44) = 0;
  return this;
}

