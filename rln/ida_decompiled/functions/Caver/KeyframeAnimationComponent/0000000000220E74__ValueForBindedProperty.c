/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000220E74
 * Mangled: _ZN5Caver26KeyframeAnimationComponent22ValueForBindedPropertyEi
 * Demangled: Caver::KeyframeAnimationComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001F4F30  Caver::KeyframeAnimationComponent::ValueForBindedProperty(int)
 *
 * Callees: 12
 *   0x00000000001F4F30  Caver::KeyframeAnimationComponent::ValueForBindedProperty(int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001FB2C0  Caver::BindingValue::ValueWithInt(int)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FED40  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000001FF970  Caver::Component::ValueForBindedOutlet(boost::intrusive_ptr<Caver::Component> const&)
 *   0x0000000000200540  Caver::BindingValue::ValueWithString(std::string const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 40
 *   insn=0x0000000000220E84 string=0x0000000000220E88 "U"
 *   insn=0x0000000000220E90 string=0x0000000000220E94 "("
 *   insn=0x0000000000220EA0 string=0x0000000000220EA4 "h"
 *   insn=0x0000000000220EA4 string=0x0000000000220EA8 "\t"
 *   insn=0x0000000000220EA8 string=0x0000000000220EB0 "(y"
 *   insn=0x0000000000220EB0 string=0x0000000000220EB4 ""
 *   insn=0x0000000000220EC4 string=0x0000000000220EC8 ":"
 *   insn=0x0000000000220EC8 string=0x0000000000220FB0 "\t\t@"
 *   insn=0x0000000000220ED0 string=0x0000000000220ED4 "!"
 *   insn=0x0000000000220ED8 string=0x0000000000220EDC "@"
 *   insn=0x0000000000220EEC string=0x0000000000220EF0 "@"
 *   insn=0x0000000000220EF0 string=0x0000000000220EF4 ""
 *   insn=0x0000000000220F00 string=0x00000000001FB2C0 "0'"
 *   insn=0x0000000000220F08 string=0x0000000000220F0C "@"
 *   insn=0x0000000000220F1C string=0x0000000000220F20 "@"
 *   insn=0x0000000000220F44 string=0x0000000000220F48 "~}"
 *   insn=0x0000000000220F48 string=0x0000000000220F4C "\n"
 *   insn=0x0000000000220F58 string=0x0000000000220F5C "eu"
 *   insn=0x0000000000220F6C string=0x0000000000220F70 "Dy"
 *   insn=0x0000000000220F7C string=0x0000000000220F80 "!"
 *   insn=0x0000000000220FA0 string=0x00000000001F7AE0 "0'"
 *   insn=0x0000000000220FB0 string=0x0000000000220FB4 ")"
 *   insn=0x0000000000220FB4 string=0x0000000000220FB8 "\t\t"
 *   insn=0x0000000000220FC4 string=0x0000000000220FC8 "jz"
 *   insn=0x0000000000220FCC string=0x0000000000220FD0 " "
 *   insn=0x0000000000220FD0 string=0x0000000000220FD4 "@"
 *   insn=0x0000000000220FD4 string=0x0000000000220FD8 ""
 *   insn=0x0000000000220FD8 string=0x0000000000220FDC ""
 *   insn=0x0000000000220FE0 string=0x0000000000220FE4 ""
 *   insn=0x0000000000220FE4 string=0x0000000000220FE8 ""
 *   insn=0x0000000000221004 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000022100C string=0x0000000000221010 "("
 *   insn=0x0000000000221010 string=0x0000000000221014 "\t\t@"
 *   insn=0x0000000000221014 string=0x0000000000221018 ")"
 *   insn=0x0000000000221018 string=0x000000000022101C "\t\t"
 *   insn=0x0000000000221020 string=0x0000000000221024 "\t"
 *   insn=0x0000000000221024 string=0x0000000000221028 ")"
 *   insn=0x000000000022102C string=0x0000000000221030 " "
 *   insn=0x0000000000221034 string=0x0000000000221038 "#"
 *   insn=0x0000000000221044 string=0x00000000001F4F30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::KeyframeAnimationComponent::ValueForBindedProperty(
        Caver::KeyframeAnimationComponent *this@<X0>,
        int a2@<W1>,
        __int64 *a3@<X8>)
{
  Caver::KeyframeAnimationComponent *v4; // x20
  _DWORD *v5; // x8
  Caver::BindingValue *v6; // x0
  __int64 v7; // x8
  Caver::BindingValue *v8; // x0
  __int64 v9; // x8
  float v10; // s0
  int v11; // w8
  _DWORD *v12; // [xsp+0h] [xbp-30h]

  v4 = this;
  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 'd':
      v5 = (_DWORD *)*((_QWORD *)this + 16);
      if ( v5 )
      {
        v12 = (_DWORD *)*((_QWORD *)this + 16);
      }
      else
      {
        Caver::ComponentOutletBase::Connect((Caver::KeyframeAnimationComponent *)((char *)this + 112), this);
        v5 = (_DWORD *)*((_QWORD *)v4 + 16);
        v12 = v5;
        if ( !v5 )
          goto LABEL_21;
      }
      ++v5[2];
LABEL_21:
      Caver::Component::ValueForBindedOutlet();
      if ( v12 )
      {
        v11 = v12[2] - 1;
        v12[2] = v11;
        if ( !v11 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 8LL))(v12);
      }
      return;
    case 'e':
      Caver::BindingValue::ValueWithString();
      return;
    case 'f':
      v7 = *(_QWORD *)(*((_QWORD *)this + 18) + 24LL);
      if ( v7
        || (Caver::KeyframeAnimationComponent::LoadAnimation(this), (v7 = *(_QWORD *)(*((_QWORD *)v4 + 18) + 24LL)) != 0) )
      {
        v8 = (Caver::BindingValue *)*(unsigned int *)(v7 + 8);
      }
      else
      {
        v8 = 0;
      }
      Caver::BindingValue::ValueWithInt(a3, v8, a2);
      return;
    case 'g':
      v9 = *(_QWORD *)(*((_QWORD *)this + 18) + 24LL);
      if ( v9
        || (this = (Caver::KeyframeAnimationComponent *)Caver::KeyframeAnimationComponent::LoadAnimation(this),
            (v9 = *(_QWORD *)(*((_QWORD *)v4 + 18) + 24LL)) != 0) )
      {
        v10 = *(float *)(v9 + 32);
      }
      else
      {
        v10 = 0.0;
      }
      goto LABEL_17;
    case 'h':
      v6 = (Caver::BindingValue *)*(unsigned __int8 *)(*((_QWORD *)this + 18) + 44LL);
      goto LABEL_15;
    case 'i':
      v6 = (Caver::BindingValue *)*(unsigned __int8 *)(*((_QWORD *)this + 18) + 56LL);
LABEL_15:
      Caver::BindingValue::ValueWithBool(v6, a2);
      return;
    case 'j':
      v10 = *(float *)(*((_QWORD *)this + 18) + 48LL);
LABEL_17:
      Caver::BindingValue::ValueWithFloat(this, v10);
      return;
    default:
      Caver::Component::ValueForBindedProperty(this, a2);
      return;
  }
}

