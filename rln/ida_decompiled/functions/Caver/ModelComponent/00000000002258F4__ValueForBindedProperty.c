/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002258F4
 * Mangled: _ZN5Caver14ModelComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ModelComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F54D0  Caver::ModelComponent::ValueForBindedProperty(int)
 *
 * Callees: 6
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8C80  Caver::BindingValue::ValueWithFloatColor(Caver::FloatColor const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x00000000002033B0  Caver::BindingValue::ValueWithVector3(Caver::Vector3 const&)
 *
 * Referenced strings: 23
 *   insn=0x0000000000225900 string=0x0000000000225904 "S"
 *   insn=0x0000000000225904 string=0x0000000000225908 "i"
 *   insn=0x0000000000225908 string=0x000000000022590C "?"
 *   insn=0x0000000000225910 string=0x0000000000225914 "h"
 *   insn=0x000000000022591C string=0x0000000000225920 "J"
 *   insn=0x0000000000225920 string=0x0000000000225924 "Iy"
 *   insn=0x0000000000225924 string=0x0000000000225928 ")"
 *   insn=0x0000000000225928 string=0x000000000022592C " "
 *   insn=0x0000000000225934 string=0x0000000000225938 "+"
 *   insn=0x0000000000225938 string=0x00000000002259E4 "h"
 *   insn=0x0000000000225940 string=0x0000000000225944 "("
 *   insn=0x0000000000225954 string=0x0000000000225958 "!"
 *   insn=0x0000000000225960 string=0x0000000000225964 " "
 *   insn=0x000000000022596C string=0x00000000001F8C80 "0'"
 *   insn=0x00000000002259A0 string=0x00000000002259A4 "$"
 *   insn=0x00000000002259A8 string=0x00000000002259AC "!"
 *   insn=0x00000000002259AC string=0x00000000002259B0 "B"
 *   insn=0x00000000002259B0 string=0x00000000002259B4 "c"
 *   insn=0x00000000002259B8 string=0x00000000002259BC "!"
 *   insn=0x00000000002259BC string=0x00000000002259C0 "B"
 *   insn=0x00000000002259C0 string=0x00000000002259C4 "c"
 *   insn=0x00000000002259F0 string=0x0000000000225A04 "3B"
 *   insn=0x0000000000225A04 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::ModelComponent::ValueForBindedProperty(
        Caver::ModelComponent *this@<X0>,
        const Caver::Vector3 *a2@<X1>,
        __int64 a3@<X8>,
        unsigned int a4@<S0>,
        unsigned int a5@<S1>,
        unsigned int a6@<S2>,
        unsigned int a7@<S3>)
{
  float v7; // s0
  float v8[4]; // [xsp+8h] [xbp-28h] BYREF
  __int64 v9; // [xsp+18h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( (int)a2 )
  {
    case 0:
      Caver::BindingValue::ValueWithString();
      break;
    case 1:
      Caver::BindingValue::ValueWithVector3((Caver::ModelComponent *)((char *)this + 196), a2);
      break;
    case 2:
      v7 = *((float *)this + 52);
      goto LABEL_6;
    case 3:
      v7 = *((float *)this + 53);
LABEL_6:
      Caver::BindingValue::ValueWithFloat(this, v7 * 57.296);
      break;
    case 4:
      Caver::BindingValue::ValueWithFloat(this, *((float *)this + 38));
      break;
    case 5:
      LOBYTE(a4) = *((_BYTE *)this + 314);
      LOBYTE(a5) = *((_BYTE *)this + 315);
      LOBYTE(a6) = *((_BYTE *)this + 316);
      LOBYTE(a7) = *((_BYTE *)this + 317);
      v8[0] = (float)a4 / 255.0;
      v8[1] = (float)a5 / 255.0;
      v8[2] = (float)a6 / 255.0;
      v8[3] = (float)a7 / 255.0;
      Caver::BindingValue::ValueWithFloatColor((Caver::BindingValue *)v8, a2);
      break;
    case 6:
      Caver::BindingValue::ValueWithBool((Caver::BindingValue *)*((unsigned __int8 *)this + 156), (bool)a2);
      break;
    case 7:
      Caver::BindingValue::ValueWithFloatColor((Caver::ModelComponent *)((char *)this + 160), a2);
      break;
    default:
      *(_DWORD *)a3 = 0;
      *(_QWORD *)(a3 + 24) = 0;
      *(_QWORD *)(a3 + 32) = 0;
      *(_QWORD *)(a3 + 8) = 0;
      *(_QWORD *)(a3 + 16) = 0;
      break;
  }
}

