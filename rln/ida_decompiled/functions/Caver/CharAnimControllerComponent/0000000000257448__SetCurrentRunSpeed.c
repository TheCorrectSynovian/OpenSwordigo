/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000257448
 * Mangled: _ZN5Caver27CharAnimControllerComponent18SetCurrentRunSpeedEf
 * Demangled: Caver::CharAnimControllerComponent::SetCurrentRunSpeed(float)
 *
 * Callers: 1
 *   0x00000000001FBD30  Caver::CharAnimControllerComponent::SetCurrentRunSpeed(float)
 *
 * Callees: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 13
 *   insn=0x0000000000257458 string=0x000000000025745C "`r@"
 *   insn=0x000000000025745C string=0x0000000000257460 ""
 *   insn=0x0000000000257464 string=0x0000000000257468 "`B"
 *   insn=0x0000000000257464 string=0x000000000025747C ""
 *   insn=0x0000000000257470 string=0x0000000000257474 "`r@"
 *   insn=0x0000000000257470 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000257474 string=0x0000000000257478 "@"
 *   insn=0x000000000025747C string=0x0000000000257480 ""
 *   insn=0x0000000000257488 string=0x000000000025748C "`r@"
 *   insn=0x0000000000257490 string=0x0000000000257494 "`B"
 *   insn=0x0000000000257490 string=0x00000000002574A4 ""
 *   insn=0x000000000025749C string=0x00000000002574A0 "`r@"
 *   insn=0x00000000002574A4 string=0x00000000002574A8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::CharAnimControllerComponent::SetCurrentRunSpeed(
        Caver::CharAnimControllerComponent *this,
        float a2)
{
  float *result; // x0
  __int64 v5; // x0

  result = (float *)*((_QWORD *)this + 28);
  if ( result
    || (Caver::ComponentOutletBase::Connect((Caver::CharAnimControllerComponent *)((char *)this + 208), this),
        (result = (float *)*((_QWORD *)this + 28)) != 0) )
  {
    result = (float *)(*(__int64 (__fastcall **)(float *))(*(_QWORD *)result + 264LL))(result);
    if ( result )
    {
      v5 = *((_QWORD *)this + 28);
      if ( !v5 )
      {
        Caver::ComponentOutletBase::Connect((Caver::CharAnimControllerComponent *)((char *)this + 208), this);
        v5 = *((_QWORD *)this + 28);
      }
      result = (float *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 264LL))(v5);
      result[13] = a2 / 100.0;
    }
  }
  return result;
}

