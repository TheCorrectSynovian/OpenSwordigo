/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000028BD40
 * Mangled: _ZN5Caver23MagicSpellCastComponent13HandleMessageEiPv
 * Demangled: Caver::MagicSpellCastComponent::HandleMessage(int,void *)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FCE00  Caver::SoundEffectComponent::Stop(void)
 *
 * Referenced strings: 10
 *   insn=0x000000000028BD48 string=0x000000000028BD4C "?"
 *   insn=0x000000000028BD50 string=0x000000000028BD54 "!"
 *   insn=0x000000000028BD54 string=0x000000000028BD58 "`N@"
 *   insn=0x000000000028BD5C string=0x000000000028BD60 "`""
 *   insn=0x000000000028BD5C string=0x000000000028BD74 "#"
 *   insn=0x000000000028BD64 string=0x000000000028BD68 "^"
 *   insn=0x000000000028BD68 string=0x000000000028BD6C "`N@"
 *   insn=0x000000000028BD68 string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000028BD6C string=0x000000000028BD70 "@"
 *   insn=0x000000000028BD74 string=0x00000000001FCE00 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MagicSpellCastComponent::HandleMessage(
        Caver::MagicSpellCastComponent *this,
        int a2,
        void *a3)
{
  Caver::SoundEffectComponent *v4; // x0

  if ( a2 == 2 )
  {
    v4 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 19);
    if ( v4
      || (Caver::ComponentOutletBase::Connect((Caver::MagicSpellCastComponent *)((char *)this + 136), this),
          (v4 = (Caver::SoundEffectComponent *)*((_QWORD *)this + 19)) != 0) )
    {
      Caver::SoundEffectComponent::Stop(v4);
    }
  }
  return 0;
}

