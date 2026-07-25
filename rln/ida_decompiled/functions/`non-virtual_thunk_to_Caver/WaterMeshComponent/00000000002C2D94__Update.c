/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C2D94
 * Mangled: _ZThn24_N5Caver18WaterMeshComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::WaterMeshComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F9040  Caver::WaterMeshComponent::UpdateBounds(void)
 *
 * Referenced strings: 11
 *   insn=0x00000000002C2DA0 string=0x00000000002C2DA4 "4@"
 *   insn=0x00000000002C2DA4 string=0x00000000002C2DA8 ""
 *   insn=0x00000000002C2DB0 string=0x00000000002C2DB4 "`"
 *   insn=0x00000000002C2DB0 string=0x00000000002C2DC8 "`VA"
 *   insn=0x00000000002C2DB8 string=0x00000000002C2DBC "I"
 *   insn=0x00000000002C2DBC string=0x00000000002C2DC0 "hB@"
 *   insn=0x00000000002C2DBC string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002C2DC0 string=0x00000000002C2DC4 ""
 *   insn=0x00000000002C2DD0 string=0x00000000002C2DD4 "`V"
 *   insn=0x00000000002C2DD8 string=0x00000000001F9040 "0'"
 *   insn=0x00000000002C2DDC string=0x00000000002C2DE0 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::WaterMeshComponent::Update(Caver::WaterMeshComponent *this, float a2)
{
  float *v3; // x19
  __int64 result; // x0

  v3 = (float *)((char *)this - 24);
  if ( *((_QWORD *)this + 13)
    || (result = Caver::ComponentOutletBase::Connect(
                   (Caver::WaterMeshComponent *)((char *)this + 88),
                   (const Caver::Component *)v3),
        *((_QWORD *)v3 + 16)) )
  {
    v3[85] = v3[85] + a2;
    result = Caver::WaterMeshComponent::UpdateBounds((Caver::WaterMeshComponent *)v3);
    *((_BYTE *)v3 + 320) = 1;
  }
  return result;
}

