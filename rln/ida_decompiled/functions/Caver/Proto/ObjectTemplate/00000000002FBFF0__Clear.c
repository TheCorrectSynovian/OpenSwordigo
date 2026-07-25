/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FBFF0
 * Mangled: _ZN5Caver5Proto14ObjectTemplate5ClearEv
 * Demangled: Caver::Proto::ObjectTemplate::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA880  Caver::Proto::SceneObject::Clear(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000002FBFFC string=0x00000000002FC000 "hr@9"
 *   insn=0x00000000002FC008 string=0x00000000002FC00C "`\n@"
 *   insn=0x00000000002FC00C string=0x00000000002FC010 "@"
 *   insn=0x00000000002FC010 string=0x00000000002FC014 ""
 *   insn=0x00000000002FC014 string=0x00000000001FA880 "0'"
 *   insn=0x00000000002FC018 string=0x00000000002FC01C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectTemplate::Clear(__int64 this)
{
  __int64 v1; // x19

  v1 = this;
  if ( *(_BYTE *)(this + 28) )
  {
    if ( (*(_BYTE *)(this + 28) & 1) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
        this = Caver::Proto::SceneObject::Clear((Caver::Proto::SceneObject *)this);
    }
    *(_DWORD *)(v1 + 24) = 1065353216;
  }
  *(_DWORD *)(v1 + 28) = 0;
  return this;
}

