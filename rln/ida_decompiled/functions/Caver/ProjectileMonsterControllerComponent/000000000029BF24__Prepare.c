/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029BF24
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponent7PrepareEv
 * Demangled: Caver::ProjectileMonsterControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 6
 *   insn=0x000000000029BF30 string=0x000000000029BF34 "hB@"
 *   insn=0x000000000029BF38 string=0x000000000029BF3C "`"
 *   insn=0x000000000029BF44 string=0x000000000029BF48 "hB@"
 *   insn=0x000000000029BF44 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000029BF48 string=0x000000000029BF4C "h"
 *   insn=0x000000000029BF50 string=0x000000000029BF54 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::ProjectileMonsterControllerComponent::Prepare(_QWORD *this)
{
  _QWORD *v1; // x19
  __int64 v2; // x8

  v1 = this;
  v2 = this[16];
  if ( v2
    || (this = (_QWORD *)Caver::ComponentOutletBase::Connect(
                           (Caver::ComponentOutletBase *)(this + 14),
                           (const Caver::Component *)this),
        (v2 = v1[16]) != 0) )
  {
    *(_BYTE *)(v2 + 188) = 1;
  }
  return this;
}

