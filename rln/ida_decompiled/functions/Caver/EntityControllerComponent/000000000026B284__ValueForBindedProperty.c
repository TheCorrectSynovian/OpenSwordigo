/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026B284
 * Mangled: _ZN5Caver25EntityControllerComponent22ValueForBindedPropertyEi
 * Demangled: Caver::EntityControllerComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000001FCEE0  Caver::EntityControllerComponent::ValueForBindedProperty(int)
 *
 * Callees: 8
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7770  Caver::StringForMovementBehavior(Caver::EntityControllerComponent::MovementBehavior)
 *   0x00000000001FEED0  Caver::Component::ValueForBindedProperty(int)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 34
 *   insn=0x000000000026B294 string=0x000000000026B298 "U"
 *   insn=0x000000000026B2A0 string=0x000000000026B2A4 "("
 *   insn=0x000000000026B2B4 string=0x000000000026B2BC "(y"
 *   insn=0x000000000026B2BC string=0x000000000026B2C0 ""
 *   insn=0x000000000026B2C8 string=0x000000000026B2CC ""
 *   insn=0x000000000026B2E0 string=0x000000000026B2E4 "#1"
 *   insn=0x000000000026B2E4 string=0x00000000001F7770 "0'"
 *   insn=0x000000000026B2FC string=0x000000000026B300 ")"
 *   insn=0x000000000026B310 string=0x000000000026B314 ")=G"
 *   insn=0x000000000026B314 string=0x000000000026B318 "!"
 *   insn=0x000000000026B31C string=0x000000000026B320 "\t"
 *   insn=0x000000000026B31C string=0x000000000026B370 "\t"
 *   insn=0x000000000026B320 string=0x000000000026B324 "*"
 *   insn=0x000000000026B324 string=0x000000000026B328 "\n"
 *   insn=0x000000000026B330 string=0x000000000026B37C "?"
 *   insn=0x000000000026B338 string=0x000000000026B33C "QP"
 *   insn=0x000000000026B370 string=0x000000000026B374 "*"
 *   insn=0x000000000026B374 string=0x000000000026B378 "\n"
 *   insn=0x000000000026B37C string=0x000000000026B380 "l"
 *   insn=0x000000000026B384 string=0x000000000026B388 ""
 *   insn=0x000000000026B390 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026B398 string=0x000000000026B39C "J"
 *   insn=0x000000000026B3A0 string=0x000000000026B3A4 "(a"
 *   insn=0x000000000026B3B0 string=0x000000000026B3B4 "J=G"
 *   insn=0x000000000026B3B4 string=0x000000000026B3B8 ")!"
 *   insn=0x000000000026B3BC string=0x000000000026B3C0 "*"
 *   insn=0x000000000026B3BC string=0x000000000026B3EC "*"
 *   insn=0x000000000026B3C0 string=0x000000000026B3C4 "K"
 *   insn=0x000000000026B3C4 string=0x000000000026B3C8 "+"
 *   insn=0x000000000026B3CC string=0x000000000026B3D0 "_"
 *   insn=0x000000000026B3E4 string=0x000000000026B3E8 "7Y"
 *   insn=0x000000000026B3EC string=0x000000000026B3F0 "K"
 *   insn=0x000000000026B3F0 string=0x000000000026B3F4 "+"
 *   insn=0x000000000026B3F4 string=0x000000000026B3F8 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::EntityControllerComponent::ValueForBindedProperty(
        Caver::EntityControllerComponent *this,
        int a2)
{
  float v2; // s0
  unsigned int *v3; // x8
  int v4; // w9
  __int64 v5; // [xsp+8h] [xbp-38h]

  _ReadStatusReg(TPIDR_EL0);
  switch ( a2 )
  {
    case 3:
      v2 = *((float *)this + 56);
      goto LABEL_9;
    case 4:
      v2 = *((float *)this + 57);
      goto LABEL_9;
    case 5:
      v2 = *((float *)this + 58);
LABEL_9:
      Caver::BindingValue::ValueWithFloat(this, v2);
      break;
    case 6:
      Caver::StringForMovementBehavior();
      Caver::BindingValue::ValueWithInt();
      if ( (__int64 *)(v5 - 24) != &qword_6FD2E0 )
      {
        v3 = (unsigned int *)(v5 - 8);
        if ( &pthread_create )
        {
          do
            v4 = __ldaxr(v3);
          while ( __stlxr(v4 - 1, v3) );
        }
        else
        {
          v4 = (*v3)--;
        }
        if ( v4 <= 0 )
          operator delete((void *)(v5 - 24));
      }
      break;
    default:
      Caver::Component::ValueForBindedProperty(this, a2);
      break;
  }
}

