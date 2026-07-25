/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021F52C
 * Mangled: _ZN5Caver23BlendAnimationComponent25SetValueForBindedPropertyEiRKNS_12BindingValueE
 * Demangled: Caver::BlendAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F3480  Caver::BlendAnimationComponent::setAnimation2(Caver::AnimationComponent *)
 *   0x00000000001F7F70  Caver::BlendAnimationComponent::setAnimation1(Caver::AnimationComponent *)
 *   0x00000000001FAAC0  Caver::Component::ComponentWithIdentifier(int)
 *
 * Referenced strings: 23
 *   insn=0x000000000021F534 string=0x000000000021F538 "?"
 *   insn=0x000000000021F53C string=0x000000000021F540 "H"
 *   insn=0x000000000021F540 string=0x000000000021F544 ")"
 *   insn=0x000000000021F544 string=0x0000000000583D54 ""
 *   insn=0x000000000021F548 string=0x000000000021F54C ")Q5"
 *   insn=0x000000000021F54C string=0x000000000021F550 "(y"
 *   insn=0x000000000021F550 string=0x000000000021F554 ""
 *   insn=0x000000000021F558 string=0x000000000021F55C "H"
 *   insn=0x000000000021F558 string=0x000000000021F580 "H"
 *   insn=0x000000000021F558 string=0x000000000021F5A4 "H"
 *   insn=0x000000000021F558 string=0x000000000021F5B8 "H"
 *   insn=0x000000000021F564 string=0x000000000021F568 "Vm"
 *   insn=0x000000000021F568 string=0x00000000001FAAC0 "0'"
 *   insn=0x000000000021F578 string=0x000000000021F57C "}b"
 *   insn=0x000000000021F57C string=0x00000000001F7F70 "0'"
 *   insn=0x000000000021F588 string=0x000000000021F58C "Mm"
 *   insn=0x000000000021F5A0 string=0x00000000001F3480 "P'"
 *   insn=0x000000000021F5A4 string=0x000000000021F5A8 "i>@"
 *   insn=0x000000000021F5A8 string=0x000000000021F5AC ""
 *   insn=0x000000000021F5AC string=0x000000000021F5B0 "(%"
 *   insn=0x000000000021F5B8 string=0x000000000021F5BC "i>@"
 *   insn=0x000000000021F5BC string=0x000000000021F5C0 ""
 *   insn=0x000000000021F5C0 string=0x000000000021F5C4 "()"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::BlendAnimationComponent::SetValueForBindedProperty(
        Caver::BlendAnimationComponent *this,
        int a2,
        const Caver::BindingValue *a3)
{
  Caver::AnimationComponent *v4; // x1

  switch ( a2 )
  {
    case 0:
      v4 = (Caver::AnimationComponent *)Caver::Component::ComponentWithIdentifier(this, **((_DWORD **)a3 + 1));
      Caver::BlendAnimationComponent::setAnimation1(this, v4);
      break;
    case 1:
      Caver::Component::ComponentWithIdentifier(this, **((_DWORD **)a3 + 1));
      Caver::BlendAnimationComponent::setAnimation2();
      break;
    case 2:
      *(_DWORD *)(*((_QWORD *)this + 15) + 36LL) = **((_DWORD **)a3 + 1);
      break;
    case 3:
      *(_DWORD *)(*((_QWORD *)this + 15) + 40LL) = **((_DWORD **)a3 + 1);
      break;
    default:
      return;
  }
}

