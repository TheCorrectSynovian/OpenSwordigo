/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000312E38
 * Mangled: _ZN5Caver5Proto23CharControllerComponent5ClearEv
 * Demangled: Caver::Proto::CharControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x0000000000312E68 string=0x0000000000312E6C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CharControllerComponent::Clear(__int64 this)
{
  int v1; // w8

  v1 = *(_DWORD *)(this + 124);
  if ( (_BYTE)v1 )
  {
    *(_OWORD *)(this + 28) = 0u;
    *(_OWORD *)(this + 12) = 0u;
  }
  if ( (v1 & 0xFF00) != 0 )
  {
    *(_DWORD *)(this + 104) = 0;
    *(_QWORD *)(this + 60) = 0;
    *(_QWORD *)(this + 52) = 0;
    *(_QWORD *)(this + 44) = 0;
  }
  if ( (v1 & 0xFF0000) != 0 )
  {
    *(_QWORD *)(this + 116) = 0;
    *(_QWORD *)(this + 108) = 0;
  }
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 124) = 0;
  return this;
}

