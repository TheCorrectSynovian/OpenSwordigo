/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029BE98
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponentC2Ev
 * Demangled: Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000001F4560  Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent(void)
 *
 * Callees: 1
 *   0x00000000001FA3B0  Caver::MonsterControllerComponent::MonsterControllerComponent(void)
 *
 * Referenced strings: 10
 *   insn=0x000000000029BEA4 string=0x000000000029BEA8 "By"
 *   insn=0x000000000029BEA8 string=0x000000000029BEAC "H""
 *   insn=0x000000000029BEA8 string=0x00000000001FA3B0 "0'"
 *   insn=0x000000000029BEAC string=0x000000000029BEB0 ""
 *   insn=0x000000000029BEB0 string=0x000000000029BEB4 "\n"
 *   insn=0x000000000029BEB4 string=0x000000000029BEB8 "\tA"
 *   insn=0x000000000029BEB8 string=0x000000000029BEBC "@"
 *   insn=0x000000000029BEBC string=0x000000000029BEC0 ""
 *   insn=0x000000000029BEC4 string=0x000000000029BEC8 "i"
 *   insn=0x000000000029BEC8 string=0x000000000029BECC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__n128 __fastcall Caver::ProjectileMonsterControllerComponent::ProjectileMonsterControllerComponent(
        Caver::ProjectileMonsterControllerComponent *this)
{
  __n128 result; // q0

  Caver::MonsterControllerComponent::MonsterControllerComponent(this);
  result.n128_u64[0] = (unsigned __int64)&off_6C2368;
  result.n128_u64[1] = (unsigned __int64)&off_6C23A8;
  *(_QWORD *)this = off_6C2250;
  *((__n128 *)this + 1) = result;
  return result;
}

