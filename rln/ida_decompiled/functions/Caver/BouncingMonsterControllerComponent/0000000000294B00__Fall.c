/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000294B00
 * Mangled: _ZN5Caver34BouncingMonsterControllerComponent4FallEv
 * Demangled: Caver::BouncingMonsterControllerComponent::Fall(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 9
 *   insn=0x0000000000294B0C string=0x0000000000294B10 "h"
 *   insn=0x0000000000294B14 string=0x0000000000294B18 "\tY"
 *   insn=0x0000000000294B18 string=0x0000000000294B1C "`~@"
 *   insn=0x0000000000294B20 string=0x0000000000294B24 "`"
 *   insn=0x0000000000294B20 string=0x0000000000294B34 ""
 *   insn=0x0000000000294B2C string=0x0000000000294B30 "`~@"
 *   insn=0x0000000000294B2C string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000294B34 string=0x0000000000294B38 ""
 *   insn=0x0000000000294B44 string=0x0000000000294B48 "hf"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::BouncingMonsterControllerComponent::Fall(Caver::BouncingMonsterControllerComponent *this)
{
  __int64 v2; // x0
  __int64 result; // x0

  *(_WORD *)(*((_QWORD *)this + 32) + 44LL) = 256;
  v2 = *((_QWORD *)this + 31);
  if ( !v2 )
  {
    Caver::ComponentOutletBase::Connect((Caver::BouncingMonsterControllerComponent *)((char *)this + 232), this);
    v2 = *((_QWORD *)this + 31);
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
  *(_DWORD *)(result + 12) = 0;
  *((_BYTE *)this + 281) = 1;
  return result;
}

