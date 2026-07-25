/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047F9F8
 * Mangled: _ZN5Caver11AudioSystem20AddSoundEffectSourceERKN5boost13intrusive_ptrINS_17SoundEffectSourceEEE
 * Demangled: Caver::AudioSystem::AddSoundEffectSource(boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F48F0  std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::intrusive_ptr<Caver::SoundEffectSource>*,std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>,std::allocator<boost::intrusive_ptr<Caver::SoundEffectSource>>>>,boost::intrusive_ptr<Caver::SoundEffectSource> const&)
 *
 * Referenced strings: 19
 *   insn=0x000000000047FA04 string=0x000000000047FA08 "h"
 *   insn=0x000000000047FA0C string=0x000000000047FA10 "\t"
 *   insn=0x000000000047FA14 string=0x000000000047FA18 "I"
 *   insn=0x000000000047FA18 string=0x00000000005895F8 "\n"
 *   insn=0x000000000047FA1C string=0x000000000047FA20 "!"
 *   insn=0x000000000047FA24 string=0x000000000047FA28 "M"
 *   insn=0x000000000047FA2C string=0x000000000047FA30 "?"
 *   insn=0x000000000047FA34 string=0x000000000047FA38 "("
 *   insn=0x000000000047FA38 string=0x000000000047FA3C "\t\t@"
 *   insn=0x000000000047FA3C string=0x000000000047FA40 ")"
 *   insn=0x000000000047FA40 string=0x000000000047FA44 "\t\t"
 *   insn=0x000000000047FA4C string=0x000000000047FA88 "h"
 *   insn=0x000000000047FA50 string=0x000000000047FA54 "?"
 *   insn=0x000000000047FA54 string=0x000000000047FA58 " "
 *   insn=0x000000000047FA58 string=0x000000000047FA5C "("
 *   insn=0x000000000047FA5C string=0x000000000047FA60 "\t\t@"
 *   insn=0x000000000047FA60 string=0x000000000047FA64 ")"
 *   insn=0x000000000047FA64 string=0x000000000047FA68 "\t\t"
 *   insn=0x000000000047FA84 string=0x00000000001F48F0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::AudioSystem::AddSoundEffectSource(_QWORD *result, __int64 *a2)
{
  __int64 v3; // x8
  _QWORD *v4; // x20
  _QWORD *v5; // x1
  _QWORD *v6; // x1

  v3 = *a2;
  v4 = result;
  if ( !*(_QWORD *)(*a2 + 32) )
  {
    if ( *(float *)(v3 + 68) <= 0.005 )
    {
      v6 = (_QWORD *)result[6];
      if ( v6 != (_QWORD *)result[7] )
      {
        *v6 = v3;
        ++*(_DWORD *)(v3 + 8);
        result[6] = v6 + 1;
        goto LABEL_8;
      }
    }
    else
    {
      v5 = (_QWORD *)result[3];
      if ( v5 != (_QWORD *)result[4] )
      {
        *v5 = v3;
        ++*(_DWORD *)(v3 + 8);
        result[3] = v5 + 1;
LABEL_8:
        *(_QWORD *)(*a2 + 32) = v4;
        return result;
      }
    }
    result = (_QWORD *)std::vector<boost::intrusive_ptr<Caver::SoundEffectSource>>::_M_insert_aux();
    goto LABEL_8;
  }
  return result;
}

