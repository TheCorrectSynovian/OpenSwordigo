/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305558
 * Mangled: _ZN5Caver5Proto33ModelTransformControllerComponent5ClearEv
 * Demangled: Caver::Proto::ModelTransformControllerComponent::Clear(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002034E0  Caver::Proto::Vector3::Clear(void)
 *
 * Referenced strings: 6
 *   insn=0x0000000000305564 string=0x0000000000305568 "h"
 *   insn=0x0000000000305574 string=0x0000000000305578 "`\n@"
 *   insn=0x0000000000305578 string=0x000000000030557C "`"
 *   insn=0x0000000000305580 string=0x0000000000305584 "h*@"
 *   insn=0x0000000000305588 string=0x000000000030558C "`"
 *   insn=0x000000000030558C string=0x0000000000305590 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ModelTransformControllerComponent::Clear(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  LOBYTE(v2) = *(_BYTE *)(this + 40);
  if ( (_BYTE)v2 )
  {
    *(_DWORD *)(this + 12) = 0;
    if ( (v2 & 2) != 0 )
    {
      this = *(_QWORD *)(this + 16);
      if ( this )
      {
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
        v2 = *(_DWORD *)(v1 + 40);
      }
    }
    if ( (v2 & 4) != 0 )
    {
      this = *(_QWORD *)(v1 + 24);
      if ( this )
        this = Caver::Proto::Vector3::Clear((Caver::Proto::Vector3 *)this);
    }
    *(_QWORD *)(v1 + 32) = 0;
  }
  *(_DWORD *)(v1 + 40) = 0;
  return this;
}

