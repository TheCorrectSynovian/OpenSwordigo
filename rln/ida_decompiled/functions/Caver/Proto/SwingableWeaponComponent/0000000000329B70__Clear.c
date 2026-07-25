/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329B70
 * Mangled: _ZN5Caver5Proto24SwingableWeaponComponent5ClearEv
 * Demangled: Caver::Proto::SwingableWeaponComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FBAB0  Caver::Proto::FloatColor::Clear(void)
 *
 * Referenced strings: 7
 *   insn=0x0000000000329B7C string=0x0000000000329B80 "hF@"
 *   insn=0x0000000000329B84 string=0x0000000000329B88 "@"
 *   insn=0x0000000000329B98 string=0x0000000000329B9C "`"
 *   insn=0x0000000000329B9C string=0x0000000000329BA0 "`"
 *   insn=0x0000000000329BA4 string=0x0000000000329BA8 "hF@"
 *   insn=0x0000000000329BA4 string=0x00000000001FBAB0 "0'"
 *   insn=0x0000000000329BB0 string=0x0000000000329BB4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  v2 = *(_DWORD *)(this + 68);
  if ( (_BYTE)v2 )
  {
    *(_QWORD *)(this + 20) = 0;
    *(_QWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 28) = 0;
    if ( (v2 & 0x20) != 0 )
    {
      this = *(_QWORD *)(this + 32);
      if ( this )
      {
        this = Caver::Proto::FloatColor::Clear((Caver::Proto::FloatColor *)this);
        v2 = *(_DWORD *)(v1 + 68);
      }
    }
    *(_QWORD *)(v1 + 40) = 0;
  }
  if ( (v2 & 0xFF00) != 0 )
  {
    *(_QWORD *)(v1 + 48) = 0;
    *(_QWORD *)(v1 + 56) = 0;
    *(_DWORD *)(v1 + 64) = 0;
  }
  *(_DWORD *)(v1 + 68) = 0;
  return this;
}

