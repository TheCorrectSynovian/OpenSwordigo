/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026BFE0
 * Mangled: _ZN5Caver25EntityControllerComponent16SetMoveDirectionEi
 * Demangled: Caver::EntityControllerComponent::SetMoveDirection(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 13
 *   insn=0x000000000026BFF0 string=0x000000000026BFF4 "hB@"
 *   insn=0x000000000026BFFC string=0x000000000026C000 "t."
 *   insn=0x000000000026C000 string=0x000000000026C004 "t\n"
 *   insn=0x000000000026C008 string=0x000000000026C00C "`"
 *   insn=0x000000000026C008 string=0x000000000026C020 "`"
 *   insn=0x000000000026C014 string=0x000000000026C018 "hB@"
 *   insn=0x000000000026C014 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026C018 string=0x000000000026C01C "t\nA"
 *   insn=0x000000000026C02C string=0x000000000026C030 "u"
 *   insn=0x000000000026C030 string=0x000000000026C034 "U"
 *   insn=0x000000000026C038 string=0x000000000026C03C "`"
 *   insn=0x000000000026C038 string=0x000000000026C04C "q@"
 *   insn=0x000000000026C044 string=0x000000000026C048 "hB@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::SetMoveDirection(__int64 this, int a2)
{
  __int64 v2; // x19
  __int64 v3; // x8
  int v4; // w20
  __int64 v5; // x21

  v2 = this;
  v3 = *(_QWORD *)(this + 128);
  v4 = a2;
  *(_DWORD *)(this + 308) = 0;
  *(_DWORD *)(this + 300) = a2;
  *(_DWORD *)(this + 264) = a2;
  if ( !v3 )
  {
    this = Caver::ComponentOutletBase::Connect(
             (Caver::ComponentOutletBase *)(this + 112),
             (const Caver::Component *)this);
    v3 = *(_QWORD *)(v2 + 128);
    v4 = *(_DWORD *)(v2 + 264);
  }
  *(float *)(v3 + 176) = *(float *)(v2 + 268) * (float)v4;
  v5 = *(_QWORD *)(v2 + 256);
  if ( v5 )
  {
    if ( !v3 )
    {
      this = Caver::ComponentOutletBase::Connect((Caver::ComponentOutletBase *)(v2 + 112), (const Caver::Component *)v2);
      v3 = *(_QWORD *)(v2 + 128);
    }
    *(_BYTE *)(v5 + 57) = v4 != *(_DWORD *)(v3 + 112);
  }
  return this;
}

