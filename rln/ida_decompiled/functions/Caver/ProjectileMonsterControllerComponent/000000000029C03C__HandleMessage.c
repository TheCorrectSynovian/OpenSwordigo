/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000029C03C
 * Mangled: _ZN5Caver36ProjectileMonsterControllerComponent13HandleMessageEiPv
 * Demangled: Caver::ProjectileMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x000000000029C040 string=0x000000000029C044 "?"
 *   insn=0x000000000029C040 string=0x000000000029C050 "H"
 *   insn=0x000000000029C048 string=0x000000000029C04C "\n"
 *   insn=0x000000000029C048 string=0x000000000029C068 ""
 *   insn=0x000000000029C050 string=0x000000000029C054 ""
 *   insn=0x000000000029C058 string=0x000000000029C05C "H"
 *   insn=0x000000000029C05C string=0x000000000029C060 ""
 *   insn=0x000000000029C06C string=0x000000000029C070 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ProjectileMonsterControllerComponent::HandleMessage(
        Caver::ProjectileMonsterControllerComponent *this,
        int a2,
        _QWORD *a3)
{
  if ( a2 != 7 )
  {
    if ( a2 != 6 )
      return 0;
    goto LABEL_6;
  }
  if ( *(_BYTE *)(*a3 + 379LL) && *(_BYTE *)(a3[1] + 378LL) )
LABEL_6:
    *(_BYTE *)(*((_QWORD *)this + 5) + 232LL) = 1;
  return 0;
}

