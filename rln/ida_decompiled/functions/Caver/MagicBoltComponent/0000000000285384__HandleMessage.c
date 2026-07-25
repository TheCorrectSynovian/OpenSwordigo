/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000285384
 * Mangled: _ZN5Caver18MagicBoltComponent13HandleMessageEiPv
 * Demangled: Caver::MagicBoltComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FC840  Caver::SpellComponent::HandleMessage(int,void *)
 *   0x00000000001FE100  Caver::MagicBoltComponent::Explode(bool)
 *
 * Referenced strings: 18
 *   insn=0x00000000002853A0 string=0x00000000002853A4 " "
 *   insn=0x00000000002853A4 string=0x00000000002853C8 "h"
 *   insn=0x00000000002853AC string=0x00000000002853B0 "h"
 *   insn=0x00000000002853B0 string=0x00000000002853B4 "h"
 *   insn=0x00000000002853BC string=0x00000000002853C0 "P"
 *   insn=0x00000000002853CC string=0x00000000002853D0 "a"
 *   insn=0x00000000002853D8 string=0x00000000002853DC "#!"
 *   insn=0x00000000002853E4 string=0x00000000002853E8 "` ""
 *   insn=0x00000000002853EC string=0x00000000002853F0 "h"
 *   insn=0x00000000002853F0 string=0x00000000002853F4 ""
 *   insn=0x00000000002853F4 string=0x00000000002853F8 "H"
 *   insn=0x00000000002853F8 string=0x00000000002853FC "h"
 *   insn=0x00000000002853FC string=0x0000000000285400 ""
 *   insn=0x0000000000285404 string=0x0000000000285408 "b"
 *   insn=0x0000000000285408 string=0x000000000028540C "A!"
 *   insn=0x000000000028540C string=0x0000000000285410 "` "
 *   insn=0x0000000000285414 string=0x0000000000285418 "  "
 *   insn=0x0000000000285438 string=0x00000000001FC840 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicBoltComponent::HandleMessage(Caver::MagicBoltComponent *this, int a2, float *a3)
{
  float v6; // s0
  float v7; // s1

  if ( a2 == 7 )
  {
    if ( *((_BYTE *)a3 + 52) )
    {
      v7 = a3[6];
      v6 = a3[7];
      if ( (float)((float)(v6 * v6) + (float)(v7 * v7)) > 0.0001
        && *(_BYTE *)(*(_QWORD *)a3 + 379LL)
        && *(_BYTE *)(*((_QWORD *)a3 + 1) + 378LL)
        && (float)((float)(a3[11] * v6) + (float)(a3[10] * v7)) < 0.0 )
      {
        goto LABEL_4;
      }
    }
  }
  else if ( a2 == 13 && !*((_BYTE *)a3 + 36) )
  {
LABEL_4:
    Caver::MagicBoltComponent::Explode(this, 1);
  }
  return Caver::SpellComponent::HandleMessage(this, a2, a3);
}

