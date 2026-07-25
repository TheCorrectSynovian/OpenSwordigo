/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026CCB8
 * Mangled: _ZN5Caver25EntityControllerComponent24UpdateMoveAnimationSpeedEv
 * Demangled: Caver::EntityControllerComponent::UpdateMoveAnimationSpeed(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x000000000026CCC0 string=0x0000000000583944 "\n"
 *   insn=0x000000000026CCC4 string=0x000000000026CCC8 "!EI"
 *   insn=0x000000000026CCCC string=0x000000000026CCD0 ""
 *   insn=0x000000000026CCD0 string=0x000000000026CCD4 "\t"
 *   insn=0x000000000026CCD8 string=0x000000000026CCDC "B-H"
 *   insn=0x000000000026CCDC string=0x000000000026CCE0 "!"
 *   insn=0x000000000026CCE0 string=0x000000000026CCE4 "!""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::EntityControllerComponent::UpdateMoveAnimationSpeed(
        Caver::EntityControllerComponent *this,
        float result)
{
  __int64 v2; // x8

  v2 = *((_QWORD *)this + 32);
  if ( v2 )
  {
    result = *((float *)this + 67);
    if ( result > 0.01 )
    {
      result = result / (float)(*(float *)(*((_QWORD *)this + 5) + 140LL) * 100.0);
      *(float *)(v2 + 52) = result;
    }
  }
  return result;
}

