/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000026B4E0
 * Mangled: _ZN5Caver25EntityControllerComponent7PrepareEv
 * Demangled: Caver::EntityControllerComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 14
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6FC0  Caver::Shape::Bounds(void)
 *   0x00000000001F7A00  Caver::ProgramState::RegisterLibrary(std::string const&,Caver::LibFunction const*)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *   0x00000000001F7EC0  Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>(std::vector<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>,std::allocator<boost::intrusive_ptr<Caver::SwingableWeaponControllerComponent>>> *)
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *   0x00000000001FB650  Caver::EntityControllerComponent::RegisterLibrary(void)
 *   0x00000000001FE650  Caver::EntityControllerComponent::SetMoveAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *   0x00000000002016C0  Caver::Rectangle::ScaledRectangle(Caver::Vector2 const&)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000566BB8  sub_566BB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 196
 *   insn=0x000000000026B4F4 string=0x000000000026B4F8 "U"
 *   insn=0x000000000026B504 string=0x000000000026B508 "R@"
 *   insn=0x000000000026B508 string=0x000000000026B50C "`Z@"
 *   insn=0x000000000026B508 string=0x00000000001FB650 "0'"
 *   insn=0x000000000026B510 string=0x000000000026B514 "`"
 *   insn=0x000000000026B510 string=0x000000000026B528 ""
 *   insn=0x000000000026B518 string=0x000000000026B51C "q1"
 *   insn=0x000000000026B51C string=0x000000000026B520 "`Z@"
 *   insn=0x000000000026B51C string=0x00000000001F7AE0 "0'"
 *   insn=0x000000000026B524 string=0x000000000026B57C "h"
 *   insn=0x000000000026B528 string=0x000000000026B52C ""
 *   insn=0x000000000026B540 string=0x000000000026B544 ""
 *   insn=0x000000000026B550 string=0x000000000026B554 "?L"
 *   insn=0x000000000026B554 string=0x000000000026B558 "4"
 *   insn=0x000000000026B55C string=0x000000000026B560 ""
 *   insn=0x000000000026B570 string=0x000000000026B574 ""
 *   insn=0x000000000026B57C string=0x000000000026B580 "hB@"
 *   insn=0x000000000026B580 string=0x000000000026B584 "h"
 *   insn=0x000000000026B588 string=0x000000000026B58C "`"
 *   insn=0x000000000026B588 string=0x000000000026B5A0 "`\nA"
 *   insn=0x000000000026B590 string=0x000000000026B594 "S1"
 *   insn=0x000000000026B594 string=0x000000000026B598 "hB@"
 *   insn=0x000000000026B59C string=0x000000000026B5B0 "i"
 *   insn=0x000000000026B5B4 string=0x000000000026B5E8 "v"
 *   insn=0x000000000026B5B8 string=0x000000000026B5BC "`"
 *   insn=0x000000000026B5B8 string=0x0000000000583944 "\n"
 *   insn=0x000000000026B5BC string=0x000000000026B5C0 "AEI"
 *   insn=0x000000000026B5C4 string=0x000000000026B5C8 ""
 *   insn=0x000000000026B5C8 string=0x000000000026B5CC "j"
 *   insn=0x000000000026B5D0 string=0x000000000026B5D4 "b-H"
 *   insn=0x000000000026B5D4 string=0x000000000026B5D8 "A"
 *   insn=0x000000000026B5D8 string=0x000000000026B5DC "!""
 *   insn=0x000000000026B5E0 string=0x000000000026B5E4 " 5"
 *   insn=0x000000000026B5E8 string=0x000000000026B5EC "v"
 *   insn=0x000000000026B5F0 string=0x000000000026B5F4 "t"
 *   insn=0x000000000026B5FC string=0x000000000026B600 "81"
 *   insn=0x000000000026B600 string=0x000000000026B604 "hB@"
 *   insn=0x000000000026B604 string=0x000000000026B608 "h"
 *   insn=0x000000000026B60C string=0x000000000026B610 "\tq@"
 *   insn=0x000000000026B610 string=0x000000000026B614 "j\nA"
 *   insn=0x000000000026B614 string=0x000000000026B618 "hf@"
 *   insn=0x000000000026B618 string=0x000000000026B61C "i*"
 *   insn=0x000000000026B61C string=0x000000000026B620 "j."
 *   insn=0x000000000026B624 string=0x000000000026B628 "`"
 *   insn=0x000000000026B62C string=0x000000000026B630 ",1"
 *   insn=0x000000000026B630 string=0x000000000026B634 "hf@"
 *   insn=0x000000000026B634 string=0x000000000026B638 "H"
 *   insn=0x000000000026B638 string=0x000000000026B680 "`"
 *   insn=0x000000000026B640 string=0x000000000026B644 "_."
 *   insn=0x000000000026B644 string=0x000000000026B648 "h"
 *   insn=0x000000000026B644 string=0x00000000001F6FC0 "P'"
 *   insn=0x000000000026B650 string=0x000000000026B654 ""
 *   insn=0x000000000026B660 string=0x000000000026B664 "h"
 *   insn=0x000000000026B670 string=0x000000000026B674 "{9"
 *   insn=0x000000000026B674 string=0x00000000001F9C60 "0'"
 *   insn=0x000000000026B678 string=0x000000000026B67C "`6"
 *   insn=0x000000000026B680 string=0x000000000026B684 "a"
 *   insn=0x000000000026B688 string=0x00000000001F7EC0 "0'"
 *   insn=0x000000000026B6B8 string=0x000000000026B6BC "\t1"
 *   insn=0x000000000026B6BC string=0x000000000026B6C0 "hB@"
 *   insn=0x000000000026B6C0 string=0x000000000026B6C4 "h"
 *   insn=0x000000000026B6D0 string=0x00000000001F62D0 "0'"
 *   insn=0x000000000026B6D4 string=0x000000000026B6D8 "4"
 *   insn=0x000000000026B6DC string=0x000000000026B6E0 ""
 *   insn=0x000000000026B6EC string=0x000000000026B6F0 ""
 *   insn=0x000000000026B6FC string=0x000000000026B700 "qX"
 *   insn=0x000000000026B714 string=0x000000000026B718 "S"
 *   insn=0x000000000026B718 string=0x000000000026B71C "h"
 *   insn=0x000000000026B720 string=0x000000000026B724 ""
 *   insn=0x000000000026B72C string=0x000000000058545E "EntityController"
 *   insn=0x000000000026B750 string=0x00000000001F7A00 "0'"
 *   insn=0x000000000026B758 string=0x000000000026B75C ")"
 *   insn=0x000000000026B764 string=0x000000000026B768 "!"
 *   insn=0x000000000026B768 string=0x000000000026B76C "h"
 *   insn=0x000000000026B78C string=0x000000000026B790 ")=G"
 *   insn=0x000000000026B790 string=0x000000000026B794 "!"
 *   insn=0x000000000026B798 string=0x000000000026B79C "\t"
 *   insn=0x000000000026B798 string=0x000000000026B7B0 "\t"
 *   insn=0x000000000026B79C string=0x000000000026B7A0 "*"
 *   insn=0x000000000026B7A0 string=0x000000000026B7A4 "\n"
 *   insn=0x000000000026B7AC string=0x000000000026B7BC "?"
 *   insn=0x000000000026B7B0 string=0x000000000026B7B4 "*"
 *   insn=0x000000000026B7B4 string=0x000000000026B7B8 "\n"
 *   insn=0x000000000026B7BC string=0x000000000026B7C0 "l"
 *   insn=0x000000000026B7D8 string=0x000000000026B7DC "J"
 *   insn=0x000000000026B7E0 string=0x000000000026B7E4 "(a"
 *   insn=0x000000000026B7F0 string=0x000000000026B7F4 "J=G"
 *   insn=0x000000000026B7F4 string=0x000000000026B7F8 ")!"
 *   insn=0x000000000026B7FC string=0x000000000026B800 "*"
 *   insn=0x000000000026B7FC string=0x000000000026B82C "*"
 *   insn=0x000000000026B800 string=0x000000000026B804 "K"
 *   insn=0x000000000026B804 string=0x000000000026B808 "+"
 *   insn=0x000000000026B80C string=0x000000000026B810 "_"
 *   insn=0x000000000026B824 string=0x000000000026B828 "'X"
 *   insn=0x000000000026B82C string=0x000000000026B830 "K"
 *   insn=0x000000000026B830 string=0x000000000026B834 "+"
 *   insn=0x000000000026B834 string=0x000000000026B838 "_"
 *   insn=0x000000000026B858 string=0x000000000026B85C "V"
 *   insn=0x000000000026B868 string=0x000000000026B86C "("
 *   insn=0x000000000026B87C string=0x000000000026B880 "i\n@"
 *   insn=0x000000000026B880 string=0x000000000026B884 ")"
 *   insn=0x000000000026B884 string=0x000000000026B888 "i\n"
 *   insn=0x000000000026B88C string=0x000000000026B890 "\t\t@"
 *   insn=0x000000000026B890 string=0x000000000026B894 ")"
 *   insn=0x000000000026B894 string=0x000000000026B898 "\t\t"
 *   insn=0x000000000026B89C string=0x000000000026B8A0 "S"
 *   insn=0x000000000026B8A0 string=0x000000000026B8A4 "i\n@"
 *   insn=0x000000000026B8A4 string=0x000000000026B8A8 ")"
 *   insn=0x000000000026B8A8 string=0x000000000026B8AC "i\n"
 *   insn=0x000000000026B8B0 string=0x000000000026B8B4 "h"
 *   insn=0x000000000026B8B4 string=0x000000000026B8B8 ""
 *   insn=0x000000000026B8D0 string=0x000000000026B8D4 "!EI"
 *   insn=0x000000000026B8D8 string=0x000000000026B8DC ""
 *   insn=0x000000000026B8E4 string=0x000000000026B8E8 "B-H"
 *   insn=0x000000000026B8E8 string=0x000000000026B8EC "!"
 *   insn=0x000000000026B8EC string=0x000000000026B8F0 "!""
 *   insn=0x000000000026B900 string=0x000000000026B918 "P@"
 *   insn=0x000000000026B908 string=0x000000000026B90C "u0"
 *   insn=0x000000000026B914 string=0x000000000026BA64 "3"
 *   insn=0x000000000026B918 string=0x000000000026B91C "H"
 *   insn=0x000000000026B91C string=0x000000000026B920 "\t\t@"
 *   insn=0x000000000026B920 string=0x000000000026B924 "i"
 *   insn=0x000000000026B924 string=0x000000000026B928 "\t"
 *   insn=0x000000000026B928 string=0x000000000026B92C ")"
 *   insn=0x000000000026B930 string=0x000000000026B934 " "
 *   insn=0x000000000026B944 string=0x000000000026B948 "f0"
 *   insn=0x000000000026B950 string=0x000000000026B954 "u"
 *   insn=0x000000000026B954 string=0x000000000026B9A0 "3"
 *   insn=0x000000000026B960 string=0x000000000026B964 ""
 *   insn=0x000000000026B97C string=0x000000000026B980 "\n"
 *   insn=0x000000000026B97C string=0x000000000026B9B8 ""
 *   insn=0x000000000026B984 string=0x000000000026B988 "T"
 *   insn=0x000000000026B990 string=0x000000000026B994 "\t"
 *   insn=0x000000000026B99C string=0x000000000026BA14 "P@"
 *   insn=0x000000000026B9AC string=0x000000000026B9B0 "L0"
 *   insn=0x000000000026B9BC string=0x000000000026B9C0 ""
 *   insn=0x000000000026B9C8 string=0x000000000026B9CC "*\t@"
 *   insn=0x000000000026B9CC string=0x000000000026B9D0 "J"
 *   insn=0x000000000026B9D0 string=0x000000000026B9D4 "*\t"
 *   insn=0x000000000026B9D8 string=0x000000000026B9DC " 9L"
 *   insn=0x000000000026B9D8 string=0x0000000000583C38 "\n"
 *   insn=0x000000000026B9EC string=0x000000000026B9F0 "@"
 *   insn=0x000000000026B9F0 string=0x000000000026B9F4 ""
 *   insn=0x000000000026B9F4 string=0x000000000026B9F8 ""
 *   insn=0x000000000026B9F8 string=0x000000000026B9FC "A"
 *   insn=0x000000000026B9FC string=0x000000000026BA00 ""
 *   insn=0x000000000026BA00 string=0x000000000026BA04 ""
 *   insn=0x000000000026BA18 string=0x000000000026BA1C "("
 *   insn=0x000000000026BA1C string=0x000000000026BA20 "\t\t@"
 *   insn=0x000000000026BA1C string=0x000000000026BA40 "5"
 *   insn=0x000000000026BA20 string=0x000000000026BA24 ")"
 *   insn=0x000000000026BA24 string=0x000000000026BA28 "\t\t"
 *   insn=0x000000000026BA2C string=0x000000000026BA30 "\t"
 *   insn=0x000000000026BA30 string=0x000000000026BA34 ")"
 *   insn=0x000000000026BA38 string=0x000000000026BA3C " "
 *   insn=0x000000000026BA44 string=0x000000000026BA48 ""
 *   insn=0x000000000026BA54 string=0x000000000026BA58 ""
 *   insn=0x000000000026BA64 string=0x000000000026BA68 "h\n@"
 *   insn=0x000000000026BA68 string=0x000000000026BA6C ""
 *   insn=0x000000000026BA6C string=0x000000000026BA70 "h\n"
 *   insn=0x000000000026BA74 string=0x000000000026BA78 "h"
 *   insn=0x000000000026BA7C string=0x000000000026BA80 ""
 *   insn=0x000000000026BA94 string=0x000000000026BAAC "\t*"
 *   insn=0x000000000026BABC string=0x000000000026BAC0 "5"
 *   insn=0x000000000026BAC0 string=0x000000000026BB24 "3"
 *   insn=0x000000000026BAC4 string=0x000000000026BAC8 "*\t@"
 *   insn=0x000000000026BAC8 string=0x000000000026BACC "J"
 *   insn=0x000000000026BACC string=0x000000000026BAD0 "*\t"
 *   insn=0x000000000026BAD8 string=0x000000000026BADC ""
 *   insn=0x000000000026BADC string=0x000000000026BAE0 ""
 *   insn=0x000000000026BAF4 string=0x000000000026BAF8 "\t\t@"
 *   insn=0x000000000026BAF8 string=0x000000000026BAFC ")"
 *   insn=0x000000000026BAFC string=0x000000000026BB00 "\t\t"
 *   insn=0x000000000026BB04 string=0x000000000026BB08 "\t"
 *   insn=0x000000000026BB08 string=0x000000000026BB0C ")"
 *   insn=0x000000000026BB10 string=0x000000000026BB14 " "
 *   insn=0x000000000026BB24 string=0x000000000026BB28 "h\n@"
 *   insn=0x000000000026BB28 string=0x000000000026BB2C ""
 *   insn=0x000000000026BB2C string=0x000000000026BB30 "h\n"
 *   insn=0x000000000026BB34 string=0x000000000026BB38 "h"
 *   insn=0x000000000026BB38 string=0x000000000026BB3C ""
 *   insn=0x000000000026BB48 string=0x000000000026BB4C "^W"
 *   insn=0x000000000026BB64 string=0x000000000026BB68 "hB@"
 *   insn=0x000000000026BB68 string=0x000000000026BB6C ""
 *   insn=0x000000000026BB6C string=0x000000000026BB70 "h"
 *   insn=0x000000000026BB74 string=0x000000000026BB78 "`"
 *   insn=0x000000000026BB74 string=0x000000000026BB8C "`\nA"
 *   insn=0x000000000026BB80 string=0x000000000026BB84 "hB@"
 *   insn=0x000000000026BB88 string=0x000000000026BB9C "h"
 *   insn=0x000000000026BBA4 string=0x000000000026BBA8 "`"
 *   insn=0x000000000026BBA8 string=0x000000000026BBAC "!EI"
 *   insn=0x000000000026BBB0 string=0x000000000026BBB4 ""
 *   insn=0x000000000026BBB4 string=0x000000000026BBB8 "i"
 *   insn=0x000000000026BBBC string=0x000000000026BBC0 "B-H"
 *   insn=0x000000000026BBC0 string=0x000000000026BBC4 "!"
 *   insn=0x000000000026BBC4 string=0x000000000026BBC8 "!""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::EntityControllerComponent::Prepare(Caver::EntityControllerComponent *this)
{
  __int64 v2; // x0
  __int64 v3; // x0
  _DWORD *v4; // x20
  int v5; // w8
  float v6; // s8
  __int64 v7; // x8
  __int64 v8; // x9
  float v9; // s0
  int v10; // w22
  int v11; // w9
  int v12; // w10
  __int64 v13; // x8
  __int64 v15[2]; // [xsp+A8h] [xbp-68h] BYREF
  __int64 v16[2]; // [xsp+B8h] [xbp-58h] BYREF
  __int128 v17; // [xsp+C8h] [xbp-48h] BYREF
  __int64 v18; // [xsp+D8h] [xbp-38h]

  v18 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  Caver::EntityControllerComponent::RegisterLibrary(this);
  v2 = *((_QWORD *)this + 22);
  if ( v2
    || (Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 160), this),
        (v2 = *((_QWORD *)this + 22)) != 0) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 264LL))(v2);
    v4 = (_DWORD *)v3;
    *(_QWORD *)&v17 = v3;
    if ( v3 )
      ++*(_DWORD *)(v3 + 8);
    Caver::EntityControllerComponent::SetMoveAnimation();
    if ( v4 )
    {
      v5 = v4[2] - 1;
      v4[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v6 = *((float *)this + 56);
  v7 = *((_QWORD *)this + 16);
  *((float *)this + 67) = v6;
  if ( v7
    || (Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this),
        (v7 = *((_QWORD *)this + 16)) != 0) )
  {
    *(float *)(v7 + 176) = v6 * (float)*((int *)this + 66);
  }
  v8 = *((_QWORD *)this + 32);
  if ( v8 )
  {
    v9 = *((float *)this + 67);
    if ( v9 > 0.01 )
      *(float *)(v8 + 52) = v9 / (float)(*(float *)(*((_QWORD *)this + 5) + 140LL) * 100.0);
  }
  v10 = *((_DWORD *)this + 57);
  *((_DWORD *)this + 68) = v10;
  if ( v7
    || (Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this),
        (v7 = *((_QWORD *)this + 16)) != 0) )
  {
    *(_DWORD *)(v7 + 180) = v10;
  }
  else
  {
    Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 112), this);
    v7 = *((_QWORD *)this + 16);
    if ( !v7 )
    {
      v11 = 0;
      goto LABEL_18;
    }
  }
  v11 = *(_DWORD *)(v7 + 112);
LABEL_18:
  v12 = *((_DWORD *)this + 66);
  v13 = *((_QWORD *)this + 25);
  *((_DWORD *)this + 74) = v11;
  *((_DWORD *)this + 75) = v12;
  if ( v13
    || (Caver::ComponentOutletBase::Connect((Caver::EntityControllerComponent *)((char *)this + 184), this),
        (v13 = *((_QWORD *)this + 25)) != 0) )
  {
    Caver::Shape::Bounds(v16, (Caver::Shape *)(v13 + 112));
    LODWORD(v17) = *(_DWORD *)(*((_QWORD *)this + 5) + 140LL);
    DWORD1(v17) = v17;
    Caver::Rectangle::ScaledRectangle(v15, (Caver::Rectangle *)v16, (const Caver::Vector2 *)&v17);
    Caver::Rectangle::TranslatedRectangle(
      (__int64 *)&v17,
      (Caver::Rectangle *)v15,
      (const Caver::Vector2 *)(*((_QWORD *)this + 5) + 112LL));
    *((_OWORD *)this + 13) = v17;
  }
  return Caver::SceneObject::GetComponentsWithInterface<Caver::SwingableWeaponControllerComponent>();
}

