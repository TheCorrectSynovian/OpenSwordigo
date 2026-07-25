/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029CB0C
 * Mangled: _ZN5Caver34ShootingMonsterControllerComponent5ShootEv
 * Demangled: Caver::ShootingMonsterControllerComponent::Shoot(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 9
 *   insn=0x000000000029CB18 string=0x000000000029CB1C "`~@"
 *   insn=0x000000000029CB20 string=0x000000000029CB24 "`"
 *   insn=0x000000000029CB20 string=0x000000000029CB34 ""
 *   insn=0x000000000029CB2C string=0x000000000029CB30 "`~@"
 *   insn=0x000000000029CB2C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029CB34 string=0x000000000029CB38 ""
 *   insn=0x000000000029CB40 string=0x000000000029CB44 "h"
 *   insn=0x000000000029CB4C string=0x000000000029CB50 "\tY"
 *   insn=0x000000000029CB50 string=0x000000000029CB54 "j:"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ShootingMonsterControllerComponent::Shoot(Caver::ShootingMonsterControllerComponent *this)
{
  __int64 v2; // x0
  __int64 result; // x0

  v2 = *((_QWORD *)this + 31);
  if ( !v2 )
  {
    Caver::ComponentOutletBase::Connect((Caver::ShootingMonsterControllerComponent *)((char *)this + 232), this);
    v2 = *((_QWORD *)this + 31);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
  *(_DWORD *)(result + 12) = 0;
  *(_WORD *)(*((_QWORD *)this + 32) + 44LL) = 256;
  *((_WORD *)this + 142) = 1;
  *((_DWORD *)this + 70) = 0;
  return result;
}

