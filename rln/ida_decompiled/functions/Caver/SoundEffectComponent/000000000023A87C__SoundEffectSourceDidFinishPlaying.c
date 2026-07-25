/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A87C
 * Mangled: _ZN5Caver20SoundEffectComponent33SoundEffectSourceDidFinishPlayingEPNS_17SoundEffectSourceE
 * Demangled: Caver::SoundEffectComponent::SoundEffectSourceDidFinishPlaying(Caver::SoundEffectSource *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000023A880 string=0x000000000023A884 "@"
 *   insn=0x000000000023A890 string=0x000000000023A894 "(@"
 *   insn=0x000000000023A894 string=0x000000000023A898 ""
 *   insn=0x000000000023A898 string=0x000000000023A89C "("
 *   insn=0x000000000023A89C string=0x000000000023A8A0 "A"
 *   insn=0x000000000023A8A0 string=0x000000000023A8A4 "("
 *   insn=0x000000000023A8AC string=0x000000000023A8B0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffectComponent::SoundEffectSourceDidFinishPlaying(
        __int64 this,
        Caver::SoundEffectSource *a2)
{
  int v2; // w8

  if ( *(Caver::SoundEffectSource **)(this + 144) == a2 )
  {
    *(_QWORD *)(this + 144) = 0;
    if ( a2 )
    {
      v2 = *((_DWORD *)a2 + 2) - 1;
      *((_DWORD *)a2 + 2) = v2;
      if ( !v2 )
        return (*(__int64 (__fastcall **)(Caver::SoundEffectSource *))(*(_QWORD *)a2 + 8LL))(a2);
    }
  }
  return this;
}

