/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C2D34
 * Mangled: _ZN5Caver18WaterMeshComponent6UpdateEf
 * Demangled: Caver::WaterMeshComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F9040  Caver::WaterMeshComponent::UpdateBounds(void)
 *
 * Referenced strings: 11
 *   insn=0x00000000002C2D44 string=0x00000000002C2D48 "hB@"
 *   insn=0x00000000002C2D48 string=0x00000000002C2D4C ""
 *   insn=0x00000000002C2D50 string=0x00000000002C2D54 "`"
 *   insn=0x00000000002C2D50 string=0x00000000002C2D68 "`VA"
 *   insn=0x00000000002C2D58 string=0x00000000002C2D5C "a"
 *   insn=0x00000000002C2D5C string=0x00000000002C2D60 "hB@"
 *   insn=0x00000000002C2D5C string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C2D60 string=0x00000000002C2D64 ""
 *   insn=0x00000000002C2D70 string=0x00000000002C2D74 "`V"
 *   insn=0x00000000002C2D78 string=0x00000000001F9040 "0'"
 *   insn=0x00000000002C2D7C string=0x00000000002C2D80 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WaterMeshComponent::Update(Caver::WaterMeshComponent *this, float a2)
{
  __int64 result; // x0

  if ( *((_QWORD *)this + 16)
    || (result = Caver::ComponentOutletBase::Connect((Caver::WaterMeshComponent *)((char *)this + 112), this),
        *((_QWORD *)this + 16)) )
  {
    *((float *)this + 85) = *((float *)this + 85) + a2;
    result = Caver::WaterMeshComponent::UpdateBounds(this);
    *((_BYTE *)this + 320) = 1;
  }
  return result;
}

