/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000023A8B4
 * Mangled: _ZThn112_N5Caver20SoundEffectComponent33SoundEffectSourceDidFinishPlayingEPNS_17SoundEffectSourceE
 * Demangled: `non-virtual thunk to'Caver::SoundEffectComponent::SoundEffectSourceDidFinishPlaying(Caver::SoundEffectSource *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000023A8B8 string=0x000000000023A8BC "@"
 *   insn=0x000000000023A8C8 string=0x000000000023A8CC "(@"
 *   insn=0x000000000023A8CC string=0x000000000023A8D0 ""
 *   insn=0x000000000023A8D0 string=0x000000000023A8D4 "("
 *   insn=0x000000000023A8D4 string=0x000000000023A8D8 "A"
 *   insn=0x000000000023A8D8 string=0x000000000023A8DC "("
 *   insn=0x000000000023A8E4 string=0x000000000023A8E8 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SoundEffectComponent::SoundEffectSourceDidFinishPlaying(
        __int64 this,
        Caver::SoundEffectSource *a2)
{
  int v2; // w8

  if ( *(Caver::SoundEffectSource **)(this + 32) == a2 )
  {
    *(_QWORD *)(this + 32) = 0;
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

