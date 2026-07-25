/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002ACF18
 * Mangled: _ZN5Caver23ParticleObjectComponent13HandleMessageEiPv
 * Demangled: Caver::ParticleObjectComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE040  Caver::PhysicsObjectState::HandleGroundCollision(Caver::CollisionMessageData const&)
 *
 * Referenced strings: 28
 *   insn=0x00000000002ACF20 string=0x00000000002ACF24 "?"
 *   insn=0x00000000002ACF2C string=0x00000000002ACF30 "?"
 *   insn=0x00000000002ACF2C string=0x00000000002ACF48 "I"
 *   insn=0x00000000002ACF30 string=0x00000000002ACF34 "A"
 *   insn=0x00000000002ACF34 string=0x00000000002ACF38 "h"
 *   insn=0x00000000002ACF3C string=0x00000000002ACF40 "\t"
 *   insn=0x00000000002ACF48 string=0x00000000002ACF4C "("
 *   insn=0x00000000002ACF4C string=0x00000000002ACF50 "h"
 *   insn=0x00000000002ACF50 string=0x00000000002ACF54 "H"
 *   insn=0x00000000002ACF54 string=0x00000000002ACF58 "\n"
 *   insn=0x00000000002ACF58 string=0x00000000002ACF5C "\n"
 *   insn=0x00000000002ACF5C string=0x00000000002ACF60 "j"
 *   insn=0x00000000002ACF60 string=0x00000000002ACF64 "A"
 *   insn=0x00000000002ACF64 string=0x00000000002ACF68 "D0@"
 *   insn=0x00000000002ACF68 string=0x00000000002ACF6C "BM-!""
 *   insn=0x00000000002ACF6C string=0x00000000002ACF70 "!""
 *   insn=0x00000000002ACF74 string=0x00000000002ACF78 "!(""
 *   insn=0x00000000002ACF78 string=0x00000000002ACF7C "  $"
 *   insn=0x00000000002ACF80 string=0x00000000002ACF84 ")"
 *   insn=0x00000000002ACF90 string=0x00000000002ACF94 "e"
 *   insn=0x00000000002ACF94 string=0x00000000002ACF98 "i"
 *   insn=0x00000000002ACF98 string=0x00000000002ACF9C "\t"
 *   insn=0x00000000002ACFA0 string=0x00000000002ACFA4 "!=I"
 *   insn=0x00000000002ACFA0 string=0x000000000058493C "fff?"
 *   insn=0x00000000002ACFAC string=0x00000000002ACFB0 ""
 *   insn=0x00000000002ACFAC string=0x00000000002ACFCC "`""
 *   insn=0x00000000002ACFB0 string=0x00000000002ACFB4 ""
 *   insn=0x00000000002ACFD0 string=0x00000000002ACFD4 "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ParticleObjectComponent::HandleMessage(
        Caver::ParticleObjectComponent *this,
        int a2,
        float *a3)
{
  __int64 v4; // x8
  float v5; // s0

  if ( a2 == 7 )
  {
    if ( *(_BYTE *)(*(_QWORD *)a3 + 379LL) )
    {
      v4 = *((_QWORD *)a3 + 1);
      if ( *(_BYTE *)(v4 + 378) )
      {
        v5 = a3[11];
        if ( (float)((float)(a3[10] * *(float *)(*((_QWORD *)this + 5) + 104LL))
                   + (float)(v5 * *(float *)(*((_QWORD *)this + 5) + 108LL))) <= a3[12]
          && (!*(_BYTE *)(*(_QWORD *)a3 + 378LL) || v5 >= -0.5 || !*((_BYTE *)this + 236))
          && (v5 >= 0.9 || !*(_QWORD *)(*(_QWORD *)(v4 + 40) + 48LL)) )
        {
          Caver::PhysicsObjectState::HandleGroundCollision();
          goto LABEL_3;
        }
      }
    }
  }
  else if ( a2 == 6 )
  {
LABEL_3:
    *(_BYTE *)(*((_QWORD *)this + 5) + 232LL) = 1;
  }
  return 0;
}

