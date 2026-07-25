/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000024117C
 * Mangled: _ZN5Caver28TransformControllerComponent7ScaleByEff
 * Demangled: Caver::TransformControllerComponent::ScaleBy(float,float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF760  Caver::SceneObject::SetInstanceScaling(float)
 *
 * Referenced strings: 8
 *   insn=0x000000000024117C string=0x0000000000241180 "\t"
 *   insn=0x0000000000241180 string=0x0000000000241184 "#5G"
 *   insn=0x0000000000241180 string=0x0000000000583734 "o"
 *   insn=0x0000000000241188 string=0x000000000024118C "  #"
 *   insn=0x000000000024118C string=0x0000000000241190 "@ "
 *   insn=0x0000000000241194 string=0x0000000000241198 "e"
 *   insn=0x000000000024119C string=0x00000000002411A0 "p"
 *   insn=0x00000000002411A4 string=0x00000000002411A8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::TransformControllerComponent::ScaleBy(
        Caver::TransformControllerComponent *this,
        float a2,
        float a3)
{
  float *v3; // x8
  float v4; // s0

  v3 = (float *)*((_QWORD *)this + 5);
  v4 = v3[34] * a2;
  *((float *)this + 44) = v4;
  if ( a3 >= 0.001 )
  {
    *((_BYTE *)this + 172) = 1;
    *((float *)this + 45) = a3;
  }
  else
  {
    Caver::SceneObject::SetInstanceScaling((Caver::SceneObject *)v3, v4);
  }
}

