/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000219E7C
 * Mangled: _ZN5Caver23CollisionShapeComponent22ValueForBindedPropertyEi
 * Demangled: Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *
 * Callers: 1
 *   0x00000000002001A0  Caver::CollisionShapeComponent::ValueForBindedProperty(int)
 *
 * Callees: 10
 *   0x00000000001F36F0  Caver::ShapeComponent::ValueForBindedProperty(int)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FA5F0  Caver::BindingValue::ValueWithProgram(Caver::Program const&)
 *   0x00000000001FE4F0  Caver::BindingValue::ValueWithBool(bool)
 *   0x00000000001FF480  Caver::BindingValue::ValueWithFloat(float)
 *   0x00000000001FFD40  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x0000000000219C18  Caver::BindingValue::ValueWithInt(int,std::string const&)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 48
 *   insn=0x0000000000219E8C string=0x0000000000219E90 "U"
 *   insn=0x0000000000219E98 string=0x0000000000219E9C "( "
 *   insn=0x0000000000219EA8 string=0x0000000000219EAC "I"
 *   insn=0x0000000000219EAC string=0x0000000000219EB4 "(y"
 *   insn=0x0000000000219EAC string=0x0000000000583994 ",e"
 *   insn=0x0000000000219EB4 string=0x0000000000219EB8 ""
 *   insn=0x0000000000219EC0 string=0x0000000000219EC4 "0"
 *   insn=0x0000000000219EC8 string=0x0000000000219ECC ""
 *   insn=0x0000000000219ED0 string=0x0000000000219ED4 ","
 *   insn=0x0000000000219EE0 string=0x0000000000219EE4 "("
 *   insn=0x0000000000219EF0 string=0x0000000000219EF4 "*"
 *   insn=0x0000000000219EF0 string=0x00000000001FA5F0 "0'"
 *   insn=0x0000000000219EF8 string=0x0000000000219EFC """
 *   insn=0x0000000000219F04 string=0x0000000000219F08 "%"
 *   insn=0x0000000000219F04 string=0x00000000001F36F0 "P'"
 *   insn=0x0000000000219F0C string=0x0000000000219F10 "!"
 *   insn=0x0000000000219F44 string=0x0000000000219F48 "i&"
 *   insn=0x0000000000219F48 string=0x0000000000219F4C ")"
 *   insn=0x0000000000219F54 string=0x0000000000219F58 " "
 *   insn=0x0000000000219F58 string=0x0000000000219F5C "I&"
 *   insn=0x0000000000219F5C string=0x0000000000219F60 ")=G"
 *   insn=0x0000000000219F60 string=0x0000000000219F64 "!"
 *   insn=0x0000000000219F68 string=0x0000000000219F6C "\t"
 *   insn=0x0000000000219F68 string=0x0000000000219FC0 "\t"
 *   insn=0x0000000000219F6C string=0x0000000000219F70 "*"
 *   insn=0x0000000000219F70 string=0x0000000000219F74 "\n"
 *   insn=0x0000000000219F7C string=0x0000000000219FCC "?"
 *   insn=0x0000000000219F84 string=0x0000000000219F88 "Z"
 *   insn=0x0000000000219F94 string=0x0000000000219F98 ":"
 *   insn=0x0000000000219FC0 string=0x0000000000219FC4 "*"
 *   insn=0x0000000000219FC4 string=0x0000000000219FC8 "\n"
 *   insn=0x0000000000219FCC string=0x0000000000219FD0 "l"
 *   insn=0x0000000000219FE0 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000219FE4 string=0x0000000000219FE8 "j&"
 *   insn=0x0000000000219FE8 string=0x0000000000219FEC "J"
 *   insn=0x0000000000219FF0 string=0x0000000000219FF4 "(a"
 *   insn=0x0000000000219FFC string=0x000000000021A000 "J&"
 *   insn=0x000000000021A000 string=0x000000000021A004 "J=G"
 *   insn=0x000000000021A004 string=0x000000000021A008 ")!"
 *   insn=0x000000000021A00C string=0x000000000021A010 "*"
 *   insn=0x000000000021A00C string=0x000000000021A03C "*"
 *   insn=0x000000000021A010 string=0x000000000021A014 "K"
 *   insn=0x000000000021A014 string=0x000000000021A018 "+"
 *   insn=0x000000000021A01C string=0x000000000021A020 "_"
 *   insn=0x000000000021A034 string=0x000000000021A038 "#"
 *   insn=0x000000000021A03C string=0x000000000021A040 "K"
 *   insn=0x000000000021A040 string=0x000000000021A044 "+"
 *   insn=0x000000000021A044 string=0x000000000021A048 "_"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CollisionShapeComponent::ValueForBindedProperty(
        Caver::CollisionShapeComponent *this,
        const Caver::Program *a2)
{
  Caver::BindingValue *v2; // x0
  Caver::BindingValue *v3; // x0
  float v4; // s0
  void *v5; // x0
  unsigned int *v6; // x8
  int v7; // w9
  _QWORD v8[3]; // [xsp+8h] [xbp-38h] BYREF

  v8[2] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  switch ( (int)a2 )
  {
    case 200:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 376);
      goto LABEL_19;
    case 202:
      v4 = *((float *)this + 84);
      goto LABEL_21;
    case 203:
      v4 = *((float *)this + 85);
      goto LABEL_21;
    case 204:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 378);
      goto LABEL_19;
    case 205:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 379);
      goto LABEL_19;
    case 206:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 380);
      goto LABEL_19;
    case 207:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 381);
      goto LABEL_19;
    case 208:
      ((void (__fastcall *)(_QWORD *__return_ptr, _QWORD))loc_219D38)(v8, *((unsigned int *)this + 96));
      Caver::BindingValue::ValueWithInt();
      v5 = (void *)(v8[0] - 24LL);
      if ( (__int64 *)(v8[0] - 24LL) != &qword_6FD2E0 )
      {
        v6 = (unsigned int *)(v8[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v7 = __ldaxr(v6);
          while ( __stlxr(v7 - 1, v6) );
        }
        else
        {
          v7 = (*v6)--;
        }
        if ( v7 <= 0 )
          operator delete(v5);
      }
      return;
    case 209:
      v4 = *((float *)this + 97);
LABEL_21:
      Caver::BindingValue::ValueWithFloat(this, v4);
      return;
    case 210:
      v2 = (Caver::BindingValue *)*((unsigned __int8 *)this + 392);
LABEL_19:
      Caver::BindingValue::ValueWithBool(v2, (bool)a2);
      return;
    case 211:
      v3 = (Caver::CollisionShapeComponent *)((char *)this + 144);
      goto LABEL_8;
    case 212:
      v3 = (Caver::CollisionShapeComponent *)((char *)this + 184);
      goto LABEL_8;
    case 213:
      v3 = (Caver::CollisionShapeComponent *)((char *)this + 224);
LABEL_8:
      Caver::BindingValue::ValueWithProgram(v3, a2);
      break;
    default:
      Caver::ShapeComponent::ValueForBindedProperty(this, (int)a2);
      break;
  }
}

