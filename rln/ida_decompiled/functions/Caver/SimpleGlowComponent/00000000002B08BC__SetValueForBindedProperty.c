/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B08BC
 * Mangled: _ZN5Caver19SimpleGlowComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::SimpleGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 1
 *   0x0000000000201DA0  Caver::SimpleGlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC4E0  Caver::GlowComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000001FE710  Caver::BindingValue::FloatColorValue(void)
 *   0x0000000000200100  Caver::SimpleGlowComponent::CreateVertexData(void)
 *
 * Referenced strings: 33
 *   insn=0x00000000002B08C8 string=0x00000000002B08CC "T"
 *   insn=0x00000000002B08D0 string=0x00000000002B08D4 "("
 *   insn=0x00000000002B08E0 string=0x00000000002B08E4 "H"
 *   insn=0x00000000002B08E8 string=0x00000000002B08F0 "(y"
 *   insn=0x00000000002B08E8 string=0x0000000000589AA0 "\n"
 *   insn=0x00000000002B08F0 string=0x00000000002B08F4 ""
 *   insn=0x00000000002B08F8 string=0x00000000002B0914 "H"
 *   insn=0x00000000002B08F8 string=0x00000000002B0924 "H"
 *   insn=0x00000000002B08F8 string=0x00000000002B0934 "H"
 *   insn=0x00000000002B08F8 string=0x00000000002B0944 "H"
 *   insn=0x00000000002B08F8 string=0x00000000002B0954 "H"
 *   insn=0x00000000002B08F8 string=0x00000000002B0978 "H"
 *   insn=0x00000000002B08F8 string=0x00000000002B0988 "H"
 *   insn=0x00000000002B0908 string=0x00000000002B090C "`B"
 *   insn=0x00000000002B0914 string=0x00000000002B0918 ""
 *   insn=0x00000000002B0918 string=0x00000000002B091C "h"
 *   insn=0x00000000002B0924 string=0x00000000002B0928 ""
 *   insn=0x00000000002B0928 string=0x00000000002B092C "h"
 *   insn=0x00000000002B0934 string=0x00000000002B0938 ""
 *   insn=0x00000000002B0938 string=0x00000000002B093C "h"
 *   insn=0x00000000002B0944 string=0x00000000002B0948 ""
 *   insn=0x00000000002B0948 string=0x00000000002B094C "h"
 *   insn=0x00000000002B0954 string=0x00000000002B0958 ""
 *   insn=0x00000000002B0958 string=0x00000000002B095C "h"
 *   insn=0x00000000002B0964 string=0x00000000002B0968 ""
 *   insn=0x00000000002B0970 string=0x00000000002B0974 ""
 *   insn=0x00000000002B0970 string=0x00000000001FC4E0 "0'"
 *   insn=0x00000000002B0978 string=0x00000000002B097C ""
 *   insn=0x00000000002B097C string=0x00000000002B0980 "h"
 *   insn=0x00000000002B0988 string=0x00000000002B098C ""
 *   insn=0x00000000002B098C string=0x00000000002B0990 "h"
 *   insn=0x00000000002B09A0 string=0x00000000002B09B4 "G"
 *   insn=0x00000000002B09B4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GlowComponent *__fastcall Caver::SimpleGlowComponent::SetValueForBindedProperty(
        Caver::GlowComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  __int64 v3; // x19
  __int128 v4; // [xsp+8h] [xbp-28h]

  v3 = (__int64)this;
  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 'd':
      Caver::BindingValue::FloatColorValue(a3);
      *(_OWORD *)(v3 + 164) = v4;
      goto LABEL_8;
    case 'e':
      *((_DWORD *)this + 45) = **((_DWORD **)a3 + 1);
      goto LABEL_8;
    case 'f':
      *((_DWORD *)this + 46) = **((_DWORD **)a3 + 1);
LABEL_8:
      this = (Caver::GlowComponent *)Caver::SimpleGlowComponent::CreateVertexData((Caver::SimpleGlowComponent *)v3);
      break;
    case 'g':
      *((_DWORD *)this + 49) = **((_DWORD **)a3 + 1);
      break;
    case 'h':
      *((_DWORD *)this + 47) = **((_DWORD **)a3 + 1);
      break;
    case 'i':
      *((_DWORD *)this + 48) = **((_DWORD **)a3 + 1);
      break;
    case 'j':
      *((_DWORD *)this + 51) = **((_DWORD **)a3 + 1);
      break;
    case 'k':
      *((_DWORD *)this + 52) = **((_DWORD **)a3 + 1);
      break;
    default:
      this = (Caver::GlowComponent *)Caver::GlowComponent::SetValueForBindedProperty(this, a2, a3);
      break;
  }
  return this;
}

