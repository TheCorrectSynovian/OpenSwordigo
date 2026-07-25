/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0C60
 * Mangled: _ZN5Caver32StaticMonsterControllerComponent13HandleMessageEiPv
 * Demangled: Caver::StaticMonsterControllerComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4290  Caver::SoundEffectComponent::CancelDelayed(void)
 *
 * Referenced strings: 8
 *   insn=0x00000000002A0C6C string=0x00000000002A0C70 "?"
 *   insn=0x00000000002A0C74 string=0x00000000002A0C78 "!"
 *   insn=0x00000000002A0C78 string=0x00000000002A0C7C "h"
 *   insn=0x00000000002A0C84 string=0x00000000002A0C88 "`"
 *   insn=0x00000000002A0C98 string=0x00000000002A0C9C "@"
 *   insn=0x00000000002A0CA0 string=0x00000000002A0CA4 "{M"
 *   insn=0x00000000002A0CA4 string=0x00000000002A0CA8 "h"
 *   insn=0x00000000002A0CA4 string=0x00000000001F4290 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StaticMonsterControllerComponent::HandleMessage(
        Caver::StaticMonsterControllerComponent *this,
        int a2,
        void *a3)
{
  __int64 v4; // x20
  __int64 *v5; // x21
  __int64 v6; // t1
  Caver::SoundEffectComponent *v7; // x0

  if ( a2 == 6 && *((int *)this + 70) >= 1 )
  {
    v4 = 0;
    v5 = (__int64 *)((char *)this + 232);
    do
    {
      v6 = *v5;
      v5 += 3;
      v7 = (Caver::SoundEffectComponent *)(*(__int64 (**)(void))(v6 + 24))();
      Caver::SoundEffectComponent::CancelDelayed(v7);
      ++v4;
    }
    while ( v4 < *((int *)this + 70) );
  }
  return 0;
}

