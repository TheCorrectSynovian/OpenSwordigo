/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002411B4
 * Mangled: _ZN5Caver28TransformControllerComponent7ScaleToEff
 * Demangled: Caver::TransformControllerComponent::ScaleTo(float,float)
 *
 * Callers: 1
 *   0x00000000001FD040  Caver::TransformControllerComponent::ScaleTo(float,float)
 *
 * Callees: 1
 *   0x00000000001FF760  Caver::SceneObject::SetInstanceScaling(float)
 *
 * Referenced strings: 5
 *   insn=0x00000000002411B4 string=0x0000000000583734 "o"
 *   insn=0x00000000002411BC string=0x00000000002411C0 "  ""
 *   insn=0x00000000002411C0 string=0x00000000002411C4 "e"
 *   insn=0x00000000002411C8 string=0x00000000002411CC "e"
 *   insn=0x00000000002411D0 string=0x00000000002411D4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TransformControllerComponent::ScaleTo(
        Caver::TransformControllerComponent *this,
        float a2,
        float a3)
{
  *((float *)this + 44) = a2;
  if ( a3 >= 0.001 )
  {
    *((_BYTE *)this + 172) = 1;
    *((float *)this + 45) = a3;
  }
  else
  {
    Caver::SceneObject::SetInstanceScaling(*((Caver::SceneObject **)this + 5), a2);
  }
}

