/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029BF64
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponent6UpdateEf
 * Demangled: Caver::ProjectileMonsterControllerComponent::Update(float)
 *
 * Callers: 1
 *   0x00000000001F68D0  Caver::ProjectileMonsterControllerComponent::Update(float)
 *
 * Callees: 2
 *   0x00000000001F5DA0  Caver::SceneObject::RegisterForWorldBoundsUpdate(void)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 20
 *   insn=0x000000000029BF74 string=0x000000000029BF78 "`B@"
 *   insn=0x000000000029BF78 string=0x000000000029BF7C ""
 *   insn=0x000000000029BF80 string=0x000000000029BF84 "`"
 *   insn=0x000000000029BF80 string=0x000000000029BF98 "t"
 *   insn=0x000000000029BF8C string=0x000000000029BF90 "`B@"
 *   insn=0x000000000029BF8C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029BF98 string=0x000000000029BF9C "h"
 *   insn=0x000000000029BFA8 string=0x000000000029BFAC "H"
 *   insn=0x000000000029BFAC string=0x000000000029BFB0 "@`"
 *   insn=0x000000000029BFB0 string=0x000000000029BFB4 """
 *   insn=0x000000000029BFC4 string=0x000000000029BFC8 "!"
 *   insn=0x000000000029BFC8 string=0x000000000029BFCC "  ""
 *   insn=0x000000000029BFD0 string=0x000000000029C008 ""
 *   insn=0x000000000029BFD8 string=0x000000000029BFDC "h"
 *   insn=0x000000000029BFE0 string=0x000000000029BFE4 "og"
 *   insn=0x000000000029BFE4 string=0x00000000001F5DA0 "P'"
 *   insn=0x000000000029BFEC string=0x000000000029BFF0 "`B@"
 *   insn=0x000000000029BFF4 string=0x000000000029BFF8 "`"
 *   insn=0x000000000029C000 string=0x000000000029C004 "`B@"
 *   insn=0x000000000029C01C string=0x000000000029C020 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileMonsterControllerComponent::Update(
        Caver::ProjectileMonsterControllerComponent *this,
        long double a2)
{
  __int64 result; // x0
  __int64 v5; // x20
  float v6; // s1
  float v7; // s0
  int v8; // w8

  result = *((_QWORD *)this + 16);
  if ( result
    || (Caver::ComponentOutletBase::Connect((Caver::ProjectileMonsterControllerComponent *)((char *)this + 112), this),
        (result = *((_QWORD *)this + 16)) != 0) )
  {
    v5 = *((_QWORD *)this + 5);
    v6 = *(float *)(v5 + 128);
    v7 = *(float *)&a2 * 18.8495559 + v6;
    if ( fabsf(v7 - v6) > 0.0001 )
    {
      v8 = *(unsigned __int8 *)(v5 + 180);
      *(float *)(v5 + 128) = v7;
      if ( !v8 )
      {
        Caver::SceneObject::RegisterForWorldBoundsUpdate((Caver::SceneObject *)v5);
        *(_BYTE *)(v5 + 180) = 1;
        result = *((_QWORD *)this + 16);
        if ( !result )
        {
          Caver::ComponentOutletBase::Connect((Caver::ProjectileMonsterControllerComponent *)((char *)this + 112), this);
          result = *((_QWORD *)this + 16);
        }
      }
    }
    return (*(__int64 (__fastcall **)(__int64, long double))(*(_QWORD *)result + 200LL))(result, a2);
  }
  return result;
}

