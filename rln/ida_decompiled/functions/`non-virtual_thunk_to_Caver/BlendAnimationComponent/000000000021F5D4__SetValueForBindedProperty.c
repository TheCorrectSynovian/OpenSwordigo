/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F5D4
 * Mangled: _ZThn16_N5Caver23BlendAnimationComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: `non-virtual thunk to'Caver::BlendAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3480  Caver::BlendAnimationComponent::setAnimation2(Caver::AnimationComponent *)
 *   0x00000000001F7F70  Caver::BlendAnimationComponent::setAnimation1(Caver::AnimationComponent *)
 *   0x00000000001FAAC0  Caver::Component::ComponentWithIdentifier(int)
 *
 * Referenced strings: 22
 *   insn=0x000000000021F5DC string=0x000000000021F5E0 "?"
 *   insn=0x000000000021F5E0 string=0x000000000021F5E4 "h"
 *   insn=0x000000000021F5E4 string=0x000000000021F5E8 ")"
 *   insn=0x000000000021F5EC string=0x000000000021F5F0 ")"
 *   insn=0x000000000021F5F0 string=0x000000000021F5F4 "(y"
 *   insn=0x000000000021F5F8 string=0x000000000021F5FC ""
 *   insn=0x000000000021F600 string=0x000000000021F604 "H"
 *   insn=0x000000000021F600 string=0x000000000021F628 "H"
 *   insn=0x000000000021F600 string=0x000000000021F64C "H"
 *   insn=0x000000000021F600 string=0x000000000021F660 "H"
 *   insn=0x000000000021F60C string=0x000000000021F610 ",m"
 *   insn=0x000000000021F610 string=0x00000000001FAAC0 "0'"
 *   insn=0x000000000021F620 string=0x000000000021F624 "Sb"
 *   insn=0x000000000021F624 string=0x00000000001F7F70 "0'"
 *   insn=0x000000000021F630 string=0x000000000021F634 "#m"
 *   insn=0x000000000021F648 string=0x00000000001F3480 "P'"
 *   insn=0x000000000021F64C string=0x000000000021F650 "i>@"
 *   insn=0x000000000021F650 string=0x000000000021F654 ""
 *   insn=0x000000000021F654 string=0x000000000021F658 "(%"
 *   insn=0x000000000021F660 string=0x000000000021F664 "i>@"
 *   insn=0x000000000021F664 string=0x000000000021F668 ""
 *   insn=0x000000000021F668 string=0x000000000021F66C "()"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall `non-virtual thunk to'Caver::BlendAnimationComponent::SetValueForBindedProperty(
        Caver::BlendAnimationComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::BlendAnimationComponent *v3; // x19
  Caver::AnimationComponent *v4; // x1

  v3 = (Caver::BlendAnimationComponent *)((char *)this - 16);
  switch ( a2 )
  {
    case 0:
      v4 = (Caver::AnimationComponent *)Caver::Component::ComponentWithIdentifier(
                                          (Caver::BlendAnimationComponent *)((char *)this - 16),
                                          **((_DWORD **)a3 + 1));
      Caver::BlendAnimationComponent::setAnimation1(v3, v4);
      break;
    case 1:
      Caver::Component::ComponentWithIdentifier(
        (Caver::BlendAnimationComponent *)((char *)this - 16),
        **((_DWORD **)a3 + 1));
      Caver::BlendAnimationComponent::setAnimation2();
      break;
    case 2:
      *(_DWORD *)(*((_QWORD *)this + 13) + 36LL) = **((_DWORD **)a3 + 1);
      break;
    case 3:
      *(_DWORD *)(*((_QWORD *)this + 13) + 40LL) = **((_DWORD **)a3 + 1);
      break;
    default:
      return;
  }
}

