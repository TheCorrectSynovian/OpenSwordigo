/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000483D48
 * Mangled: _ZN5Caver17SoundEffectSource13EnqueueSourceERKN5boost13intrusive_ptrIS0_EE
 * Demangled: Caver::SoundEffectSource::EnqueueSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Callers: 1
 *   0x00000000001F9D40  Caver::SoundEffectSource::EnqueueSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Callees: 6
 *   0x00000000001F55A0  Caver::SoundEffectSource::SetEffect(boost::intrusive_ptr<Caver::SoundEffect> const&)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x000000000052A9AC  sub_52A9AC
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 25
 *   insn=0x0000000000483D54 string=0x0000000000483D58 "T"
 *   insn=0x0000000000483D64 string=0x0000000000483D68 "`"
 *   insn=0x0000000000483D70 string=0x0000000000483D74 ""
 *   insn=0x0000000000483D74 string=0x00000000001F55A0 "P'"
 *   insn=0x0000000000483D7C string=0x0000000000483D80 "h"
 *   insn=0x0000000000483D7C string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000483D80 string=0x0000000000483D84 ""
 *   insn=0x0000000000483D88 string=0x0000000000483D8C "\t\t@"
 *   insn=0x0000000000483D88 string=0x0000000000483D98 "!"
 *   insn=0x0000000000483D8C string=0x0000000000483D90 ")"
 *   insn=0x0000000000483D90 string=0x0000000000483D94 "\t\t"
 *   insn=0x0000000000483DA0 string=0x000000000052A9AC """
 *   insn=0x0000000000483DB0 string=0x0000000000483DC4 "C"
 *   insn=0x0000000000483DC4 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000483DD8 string=0x0000000000483DDC "4"
 *   insn=0x0000000000483DEC string=0x0000000000483DF0 "`\n@"
 *   insn=0x0000000000483DF0 string=0x0000000000483DF4 "u"
 *   insn=0x0000000000483DF8 string=0x0000000000483DFC "@"
 *   insn=0x0000000000483DFC string=0x0000000000483E00 ""
 *   insn=0x0000000000483E00 string=0x0000000000483E04 ""
 *   insn=0x0000000000483E08 string=0x0000000000483E0C ""
 *   insn=0x0000000000483E0C string=0x0000000000483E10 ""
 *   insn=0x0000000000483E18 string=0x0000000000483E1C "%"
 *   insn=0x0000000000483E1C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000483E24 string=0x0000000000483E28 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SoundEffectSource::EnqueueSource(__int64 *a1)
{
  __int64 v2; // x0
  __int64 v3; // x8

  _ReadStatusReg(TPIDR_EL0);
  Caver::SoundEffectSource::SetEffect();
  v2 = operator new(0x18u);
  v3 = *a1;
  *(_QWORD *)(v2 + 16) = *a1;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  return sub_52A9AC(v2, &xmmword_6E9DA0);
}

